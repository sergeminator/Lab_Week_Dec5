// EvenAndOddArrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

static const int ARRAY_SIZE = 31;

bool NumberIsEven(int number) 
{
	return (number % 2 == 0);
}

int GetRandomEvenNumber() 
{
	return (rand() % 50) * 2;
}

int GetRandomOddNumber()
{
	return (rand() % 50) * 2 + 1;
}

void InitArray(int arrayToBeInit[])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		arrayToBeInit[i] = ARRAY_SIZE - i;
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	int evenArray[ARRAY_SIZE];
	int oddArray[ARRAY_SIZE];
	InitArray(evenArray);
	InitArray(oddArray);
	int evenStarter = NumberIsEven(ARRAY_SIZE) ? 1 : 0;
	int oddStarter = NumberIsEven(ARRAY_SIZE) ? 0 : 1;
	for (int i = evenStarter; i < ARRAY_SIZE; i = i + 2) {
		evenArray[i] = GetRandomEvenNumber();
	}
	for (int i = oddStarter; i < ARRAY_SIZE; i = i + 2) {
		oddArray[i] = GetRandomOddNumber();
	}
	cout << "Even Array: {";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << " " << evenArray[i];
	}
	cout << " };" << endl << endl;
	cout << "Odd Array: {";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << " " << oddArray[i];
	}
	cout << " };" << endl;

    return 0;
}

