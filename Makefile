all:
	gcc -I Include $(wildcard Objects/*.c) -o object