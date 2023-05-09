main: v1_5_funk.o
	g++ -o main -O3 v1_5.cpp  v1_5_funk.o
funk:
	g++ -c v1_5_funk.cpp -O3

o2: v1_5_funk.o
	g++ -o main -O2 v1_5.cpp  v1_5_funk.o
o2_funk:
	g++ -c v1_5_funk.cpp -O2

o1: v1_5_funk.o
	g++ -o main -O1 v1_5.cpp  v1_5_funk.o
o1_funk:
	g++ -c v1_5_funk.cpp -O1

clean:
	del *.o main.exe

wipe:
	del *.txt

reset:
	del kieti.txt prasti.txt res.txt