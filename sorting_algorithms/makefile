exe: main.o sorting_algos.o
	g++ $^ -o $@

main.o: main.cpp sorting_algos.h
	g++ -Wall -g -c $<

sorting_algos.o: sorting_algos.cpp sorting_algos.h
	g++ -Wall -g -c $<

clean:
	rm -f *.o exe

.PHONY: clean
