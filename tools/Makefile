out : main.o add.o sub.o mul.o div.o mod.o
	gcc -o out main.o add.o sub.o mul.o div.o mod.o
main.o : main.c
	gcc -c main.c
add.o : add.c
	gcc -c add.c
sub.o : sub.c
	gcc -c sub.c
mul.o : mul.c
	gcc -c mul.c
div.o : div.c
	gcc -c div.c
mod.0 : mod.c
	gcc -c mod.c
.PHONY : clean
clean :
	rm *.o 
