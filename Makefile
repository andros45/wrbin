all :	wrbin.o
	gcc -o wrbin wrbin.o

wrbin :	wrbin.o
	gcc -o wrbin wrbin.o

wrbin.o :	wrbin.c
	gcc -c wrbin.c

clean :
	rm wrbin wrbin.o
