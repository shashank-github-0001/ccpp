CFLAGS = -Wno-implicit-function-declaration

towerofhanoi : towerofhanoi.o
	gcc $(CFLAGS) towerofhanoi.o -o towerofhanoi

towerofhanoi.o : towerofhanoi.c
	gcc $(CFLAGS) -c towerofhanoi.c

clean :
	rm -rf *.o
