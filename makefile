make:
	gcc -Wall -o braille braille_translator.c

memcheck:
	valgrind ./braille hello.txt
