#ifndef STUDENTAS_H
#define STUDENTAS_H

#include "studentasLib.h"

class zmogus
{
protected:
	string vardas_ = "", pavarde_ = "";
	double vid_ = 0;

public:
	// getters
	inline string vardas() const { return vardas_; }
	inline string pavarde() const { return pavarde_; }

	// setters
	void setName(const string& word) { vardas_ = word; }
	void setSurname(const string& word) { pavarde_ = word; }

	virtual inline double vid() const { return vid_; }

};

class studentas : public zmogus
{
private:
	vector<int> paz_;
	int egz_;
	double med_ = 0;
public:

	// constructors
	studentas() : egz_(0) {}
	studentas(string line, int pazCount); // nuskaityti is failo
	studentas(const studentas& kitas); // copy constructor
	studentas(const studentas&& kitas); // move constructor

	~studentas() {}

	// getters
	inline double vid() const override { return vid_; }
	inline double med() const { return med_; }
	inline int egz() const { return egz_; }
	inline int paz_at(int i) const { return paz_.at(i); }


	// setters
	void pushPaz(const int& paz) { paz_.push_back(paz); }
	void pushEgz(const int& paz) { egz_ = paz; }

	// misc
	void setVid();
	void setMed();


	studentas& operator=(const studentas& kitas) // copy assignment
	{
		if (this != &kitas)
		{
			this->vardas_ = kitas.vardas_;
			this->pavarde_ = kitas.pavarde_;
			this->paz_ = kitas.paz_;
			this->egz_ = kitas.egz_;
			this->vid_ = kitas.vid_;
			this->med_ = kitas.med_;
		}

		return *this;
	}

	studentas& operator=(studentas&& kitas) // move assignment
	{
		if (this != &kitas)
		{
			this->vardas_ = kitas.vardas_;
			this->pavarde_ = kitas.pavarde_;
			this->paz_ = kitas.paz_;
			this->egz_ = kitas.egz_;
			this->vid_ = kitas.vid_;
			this->med_ = kitas.med_;
		}

		return *this;
	}

	friend ostream& operator<<(ostream& out, const studentas& s)
	{
		out << left << setw(20) << s.pavarde_ << setw(15) << s.vardas_;
		for (int paz : s.paz_)
		{
			out << right << setw(4) << paz;
		}
		out << right << setw(4) << s.egz_ << endl;
		return out;
	}
};

void pildyti(vector<studentas>& mas, int& pazCount);
void nuskaityti(vector<studentas> &mas, int &stCount, int &pazNr);
void generuoti(vector<studentas> &mas, int &stCount, int &pazNr);
bool daugiau(string s1, string s2);
int partition(vector<studentas>& mas, int start, int end);
void quicksort(vector<studentas>& mas, int start, int end);
void dalinti(vector<studentas>& mas, vector<studentas> &kieti, vector<studentas> &prasti);
void dalinti2(vector<studentas> &mas, vector<studentas> &kieti);
void print(vector<studentas> &mas, char mode);
void kout(vector<studentas> &kieti, int pazCount);
void pout(vector<studentas> &prasti, int pazCount);

#endif


