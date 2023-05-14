main: v2_0_funk.o
	g++ -o main -O3 v2_0.cpp  v2_0_funk.o
funk:
	g++ -c v2_0_funk.cpp -O3

clean:
	del *.o main.exe

wipe:
	del *.txt *.o main.exe "Objektinis programavimas"
	rmdir "Objektinis programavimas"