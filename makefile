FLAG:=-Wall -Wextra -Wno-unused-variable

ANSI-C: src/*.c
	gcc $(FLAG) src/*.c -o ANSI-C

prova: prova.c
	gcc $(FLAG) prova.c -o prova