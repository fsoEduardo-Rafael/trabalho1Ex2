ordena: main.o
	g++ $(CFLAGS) -o  ordena main.o
main.o: main.c
	gcc $(CFLAGS) -c main.c
clean: 
	rm -f *.o ordena