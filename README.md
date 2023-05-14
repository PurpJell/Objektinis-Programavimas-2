Versija 0.1
Dvi programos versijos, viena su dinaminiais masyvais, kita su vektoriais
Programos leidžia įvesti norimą skaičių studentų ir jiems įvesti norimą skaičių pažymių bei apskaičiuoti pažymių vidurkį ir medianą ir juos išvesti.


Versija 0.2
Išplėstas programos versijos su vektoriais funkcionalumas, dabar galima pasirinkti, kad duomenys būtų irašyti iš failo ir yra išvedami surikiuoti abecėlės tvarka pagal vardą į failą res.txt

Versija 0.3
Į programą įtrauktas išimčių valdymas (kai nerandamas failas, įvedami ne tokie duomenys, neteisingai paruoštas failas) bei programos funkcijos aprašytos faile funk_v03.cpp ir sukurti antraščių failas op.h ir Makefile

Versija 0.4
Galima generuoti studentų failą pasirenkant, kiek įrašų generuoti (1k, 10k, 100k, 1M, 10M). Generuojant failą naudojamas quick sort algoritmas vietoj bubble sort. Skaičiuojamas visos programos ir atskirų jos dalių vykdymo laikas.

Vykdymo laikas su skirtingais įrašų kiekiais:
(Failo generavimas, nuskaitymas, rūšiavimas, studentų skirstymas, studentų išvedimas, visas laikas)
1k:    1s,          0s,          0s,         0s,                  0s,                 4s.
10k:   1s,          0s,          0s,         0s,                  0s,                 4s.
100k:  1s,          0s,          0s,         0s,                  0s,                 5s.
1M:    1s,          1s,          0s,         0s,                  1s,                 7s.
10M:   7s,          10s,         12s,        3s,                  9s,                 52s.

Versija 0.4.1
Atskirtas failo generavimas padarytas atskira funkcija, po kurios nevyksta kiti veiksmai.

Versija 0.5
Sukurtos skirtingos v0.4 programos versijos, pakeičiančios vector konteinerį į deque ir list.

DEQUE:

(Failo nuskaitymas, rūšiavimas, studentų skirstymas, visas laikas)
1k:    0s,          0s,         0s,                  4s.
10k:   0s,          0s,         0s,                  4s.
100k:  0s,          0s,         0s,                  5s.
1M:    0s,          1s,         0s,                  8s.
10M:   9s,          19s,        3s,                  60s.

LIST:

(Failo nuskaitymas, rūšiavimas, studentų skirstymas, visas laikas)
1k:    0s,          0s,         0s,                  4s.
10k:   0s,          0s,         0s,                  4s.
100k:  0s,          0s,         0s,                  5s.
1M:    0s,          0s,         0s,                  8s.
10M:   9s,          9s,         5s,                  55s.

CPU: 3.60GHz, 6 cores, 12 virtual cores, L1: 384KB, L2: 3.0MB, L3: 32.0MB
RAM: 16GB, 2400MHz
SSD: M.2 250GB, read: 550 MB/s, write: 520 MB/s

Versija 1.0
Optimizuotas studentų dalijimas į dvi grupes su vector konteineriu. Visoms programos versijoms pridėta galimybė geriems ir blogiems studentas skirstyti į du arba tik vieną naują konteinerį.

(10M studentų, 2 konteineriai)
(Failos nuskaitymas, rusiavimas, studentu skirstymas, visas laikas)

optimised vector: 9s, 12s, 2s, 50s.
vector:           9s, 12s, 3s, 48s.
deque:            8s, 19s, 3s, 54s.
list:             9s, 8s,  5s, 48s.

(10M studentų, 1 konteineris)
(Failos nuskaitymas, rusiavimas, studentu skirstymas, visas laikas)
optimised vector: 9s, 12s, 3s, 48s.
vector:           9s, 12s, 3s, 48s.
deque:            8s, 19s, 4s, 54s.
list:             9s, 8s,  5s, 48s.

Versija 1.1
Į Makefile įdėtos naujos funkcijos (wipe, reset), skirtos patogesniam testavimui bei funkcijos o2, o2_funk, o3, o3_funk, kad būtų galima palyginti kompiliatoriaus flag'ų įtaką programos veikimui.
Studentų struktūra perdaryta į klasę.

(100k studentų, 2 konteineriai)
(Failo nuskaitymas, rūšiavimas, išvedimas, studentų skirstymas, visas laikas, failo dydis)
O1: 0s, 0s, 0s, 0s, 0s, 204 KB.
O2: 0s, 0s, 0s, 0s, 0s, 203 KB.
O3: 0s, 0s, 0s, 0s, 0s, 337 KB.

(1M studentų, 2 konteineriai)
(Failo nuskaitymas, rūšiavimas, išvedimas, studentų skirstymas, visas laikas, failo dydis)
O1: 1s, 1s, 0s, 0s, 3s, 204 KB.
O2: 1s, 1s, 0s, 0s, 3s, 203 KB.
O3: 1s, 2s, 1s, 0s, 6s, 337 KB.


Versija 1.2
Implementuotos "Rule of five" taisyklės "studentas" klasei bei operatorius <<, skirtas išvesti vieno studento duomenis. 

Versija 1.5
Sukurta abstrakti klasė "zmogus", su virtualiu metodu vid skaičiuoti vidurkiui. "Studentas" klasė  paveldi iš "zmogus" klasės. vardas_, pavarde_, vid_ bei kai kurios getter ir setter funkcijos perkeltos iš klasės "studentas" į klasę "zmogus".

Versija 2.0
Aprašyta programos dokumentacija naudojant Doxygen, sukurti testavimo atvejai, tikrinantys, ar funkcijos veikia teisingai, naudojant Boost.test (tests.cpp), sukurtas mysetup.exe įdiegimo failas, naudojant Inno setup 



NAUDOJIMOSI INSTRUKCIJA:

Sukompiliuoti failus naudojant Makefile. (komandos: main/vector, deque, list, optimised, clean)
Pasileisti main.exe.
Tęsti nurodymus iššokusiame lange.

DIEGIMO INSTRUKCIJA:
Atsisiųsti mysetup.exe failą, jį pasileisti ir sekti nurodymus iššokusiame lange.