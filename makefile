all = main.cpp race.cpp race.h horse.cpp horse.h
out = main.o

$(out): $(all)
	g++ -o $(out) $(all)

clean:
	rm $(out)

run:	${out}
	./${out}
