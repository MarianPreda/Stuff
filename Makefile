.c.o:
	gcc -Wall -g -c $?

clean:
	-rm *.o *~ *.out *.in
