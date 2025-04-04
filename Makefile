COMPILER=g++

.PHONEY: all clean
all: l3

l3: main.o tank.o Country.o
	${COMPILER} $^ -o $@
main.o: main.cpp
	${COMPILER} -c main.cpp -o $@
tank.o: tank.cpp
	${COMPILER} -c $^ -o $@
Country.o: Country.cpp
	${COMPILER} -c $^ -o$@
clean:
	rm -f *.o l3