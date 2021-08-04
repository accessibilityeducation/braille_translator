make:
	gcc -Wall -o braille braille_translator_sol.c

memcheck:
	valgrind ./braille cats.txt