#include "studentasLib.h"
#include "studentas.h"

int main()
{
	// INICIALIZACIJA

	auto progStart = system_clock::now();
	
	vector<studentas> mas; // studentu masyvas
	vector<studentas> kieti;
	vector<studentas> prasti;
	int pazCount = -1;

	int stCount = 0;

	char inputMode; // budas ivesti duomenis
	cout << "Ivesti duomenis Ranka (h), Nuskaityti (r) ar Generuoti (g)?" << endl;
	cin >> inputMode;
	//inputMode = 'r';

	// GENERAVIMAS

	if ((inputMode == 'g' || inputMode == 'G')) // jei generuojamas failas
	{
		auto genStart = system_clock::now();

		generuoti(mas, stCount, pazCount);

		auto genEnd = system_clock::now();

		auto genElapsed =
			duration_cast<seconds>(genEnd - genStart);
		cout << endl << "~Failo generavimo laikas: " << genElapsed.count() << "s." << endl << endl;

		return 0;
	}

	// IVEDIMAS RANKA

	else if ((inputMode == 'h' || inputMode == 'H')) // jei ivedama ranka
	{
		pildyti(mas, pazCount);
	}


	// NUSKAITYMAS

	else // jei skaitoma is failo
	{
		nuskaityti(mas, stCount, pazCount);
	}

	// RYKIAVIMAS

	auto sortStart = system_clock::now();

	quicksort(mas, 0, mas.size() - 1);

	auto sortEnd = system_clock::now();

	auto sortElapsed =
		duration_cast<seconds>(sortEnd - sortStart);
	cout << endl << "~Rusiavimo laikas: " << sortElapsed.count() << "s." << endl << endl;

	
	// ISVEDIMAS


	char mode;
	cout << "Kaip isvesti duomenis Vidurki (v) ar Mediana (m)?" << endl;
	cin >> mode;
	//mode = 'v';

	auto printStart = system_clock::now();

	ofstream write("res.txt");

	if (mode == 'v' || mode == 'V') write << left << setw(20) << "Pavarde" << setw(15) << "Vardas" << setw(3) << "Galutinis (Vid.)" << endl << "__________________________________________________________________________________" << endl;
	else if (mode == 'm' || mode == 'M') write << left << setw(20) << "Pavarde" << setw(15) << "Vardas" << setw(3) << "Galutinis (Med.)" << endl << "__________________________________________________________________________________" << endl;

	print(mas, mode);

	auto printEnd = system_clock::now();
	auto printElapsed = duration_cast<seconds>(printEnd - printStart);
	cout << endl << "~Isvedimo laikas: " << printElapsed.count() << "s." << endl << endl;


	// DALINIMAS

	char dalMode; // budas dalinti studentus i skirtingus konteinerius
	cout << "Kaip dalinti studentus, Sukuriant du naujus konteinerius (a) ar Sukuriant viena nauja konteineri (b)?" << endl;
	cin >> dalMode;
	//dalMode = 'a';

	auto splitStart = system_clock::now();

	if (dalMode == 'a' || dalMode == 'A') dalinti(mas, kieti, prasti);
	else if (dalMode == 'b' || dalMode == 'B')
	{
		dalinti2(mas, kieti);
		prasti = mas;
	}

	auto splitEnd = system_clock::now();

	auto splitElapsed =
		duration_cast<seconds>(splitEnd - splitStart);
	cout << endl << "~Studentu skirstymo laikas: " << splitElapsed.count() << "s." << endl << endl;

	// ISVEDIMAS 2

	kout(kieti, pazCount);
	pout(prasti, pazCount);

	auto progEnd = system_clock::now();
	auto progElapsed = duration_cast<seconds>(progEnd - progStart);
	cout<<endl<<"~Visas programos vykdymo laikas: "<<progElapsed.count()<<"s."<<endl<<endl;
	
	system("pause");
}
