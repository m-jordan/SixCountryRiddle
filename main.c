/*
 * main.c
 *
 *  Created on: 8 Jan 2018
 *      Author: Michael Jordan
 */

/* Riddle:
 * There are six country names that when spelled in capitals, no letters have a closed space between them.
 * For example, A has a closed space in the lil triangle, E does not.
 * Try name them.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {A, B, D, O, P, Q, R} invalid;

int main() {
	int lineNum = 0;
	int charNum = 0;
	char countries[300][40];
	char validCountries[300][40];
	FILE *fp = fopen("./inputFiles/CountryList.txt", "r+");


	if (fp == NULL)	//If file address leads to a null file.
	{
		perror("Error opening file.");
		exit(1);
	} else
	{
		while (fgets(countries[lineNum], sizeof(countries[lineNum]), fp) != NULL)
		{
			lineNum++;
		}
		fclose(fp);
		lineNum = 0;


		while (countries[lineNum] != NULL)
		{
			while (countries[lineNum][charNum] != NULL)
			{
				if ( typeof(countries[lineNum][charNum]) == invalid)	//Checking if current character is of typedef invalid.
				{
					printf("\nInvalid: %c\n", countries[lineNum][charNum]);
				}
				printf("%c", countries[lineNum][charNum]);
				charNum++;
			}
			lineNum++;
			charNum = 0;
		}
	}

	return 0;
}
