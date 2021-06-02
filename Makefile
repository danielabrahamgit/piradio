all: simple fast

fast:	fast_gpio.c 
	gcc -Wall -o fast fast_gpio.c

simple:  simple_gpio.c
	gcc -Wall -o simple simple_gpio.c -lwiringPi

clean:	
	$(RM) simple fast