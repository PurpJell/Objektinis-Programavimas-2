#ifndef STUDENTAS_H
#define STUDENTAS_H

#include "studentasLib.h"

class studentas
{
private:
	string vardas_ = "", pavarde_ = "";
	vector<int> paz_;
	int egz_;
	double vid_ = 0;
	double med_ = 0;
public:

	// constructors
	studentas() : egz_(0) {}
	studentas(string line, int pazCount); // nuskaityti is failo

	// getters
	inline string vardas() const { return vardas_; }
	inline string pavarde() const { return pavarde_; }
	inline double vid() const { return vid_; }
	inline double med() const { return med_; }
	inline int egz() const { return egz_; }
	inline int paz_at(int i) const { return paz_.at(i); }


	// setters
	void setName(const string& word) { vardas_ = word;}
	void setSurname(const string& word) { pavarde_ = word; }
	void pushPaz(const int& paz) { paz_.push_back(paz); }
	void pushEgz(const int& paz) { egz_ = paz; }

	// misc
	void setVid();
	void setMed();
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


