FN	:= template

all: compile judge

compile:
	gcc -Wall -g $(FN).c

judge:
	./a.out < test.in > test.tmp
	cat test.tmp
	diff -aur test.tmp test.out 

debug:
	gcc -Wall -DDEBUG -g $(FN).c
