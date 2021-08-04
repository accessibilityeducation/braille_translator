/**
 * Name:
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_CHAR (30)

FILE* in_file;
FILE* out_file;

/*This method will write the Braille letters either horizontally or vertically
 to the output_file.
 
 @param braille_line: an array of int arrays(Braille letters).
 @param length: length of braille_line, number of Braille letters in line.
 
 @return 1 on success, -1 if an error occurs*/
int write_braille_to_file(int **braille_line, int length)
{
    return 1;
}

/*This method translates an ASCII char to an array of 6 ints(a Brailler letter):
 0 3
 1 4
 2 5
 
 @param letter: the ASCII char to be translated.
 
 @return an int* that represents a Braille char, or NULL if that char is invalid.*/
int *ASCII_to_braille(char letter)
{
    return NULL;
}

/*This method reads from in_file up to MAX_CHAR per call to fread(), then builds an 
 array of Braille letters by calling ASCII_to_braille(). It will write the Braille
 to out_file by calling write_braille_to_file().
 
 @return 1 on success, and -1 if an error occurs.*/
int translate_to_braille()
{
    return 1;
}

/*The program should validate that only one argument was supplied, and that it opens
 a valid file. The in_file will be translated from ASCII to Braille. It will create 
 the output file, and call translate_to_braille().

 The program should output the translation to a file named in_file.txt.output.
 e.g.: in_file: some_text.txt 
       out_file: some_text.txt.output
 
 @return 0 on success, and a 1 on error, exiting.*/
int main(int argc, char **argv[])
{
    return 0;
}