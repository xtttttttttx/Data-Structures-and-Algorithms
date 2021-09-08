sort: sort.o algorithms.o
	gcc sort.o algorithms.o -o sort

sort.o: sort.c algorithms.h
	gcc -c sort.c

algorithms.o: algorithms.c
	gcc -c algorithms.c

clean:
	rm *.o sort