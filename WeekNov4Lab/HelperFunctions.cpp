#include "HelperFunctions.h"
#include <iostream>
#include <string>

void SetTextCoordinates(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void DisplayIntroMessage(HANDLE hConsole)
{
	// Possible attributes to set the colors
	//
	//FOREGROUND_BLUE	Text color contains blue.
	//FOREGROUND_GREEN	Text color contains green.
	//FOREGROUND_RED	Text color contains red.
	//
	//FOREGROUND_INTENSITY	Text color is intensified.
	//
	//BACKGROUND_BLUE	Background color contains blue.
	//BACKGROUND_GREEN	Background color contains green.
	//BACKGROUND_RED	Background color contains red.
	//
	//BACKGROUND_INTENSITY	Background color is intensified.

	// Combine colors in forground to create cyan
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE);

	SetTextCoordinates(48, 16);
	std::cout << "***********" << std::endl;
	SetTextCoordinates(48, 17);
	std::cout << "* WELCOME *" << std::endl;
	SetTextCoordinates(48, 18);
	std::cout << "***********" << std::endl;

	// If you don't provide a forground color, it will display white text like in the following example

	SetTextCoordinates(41, 21);
	SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
	std::cout << "Enter any text to continue" << std::endl;

	// If you don't provide a background color, it will display black background
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED );
	std::string userInput = "";
	std::cin >> userInput;
}

void DisplayTuesdayLabUserList(HANDLE hConsole)
{
	system("cls"); // clear screen before we start drawing again

	int row = 5;
	int col = 10;

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	SetTextCoordinates(col, row);
	++row;

	std::cout << "------------------------------------------------------------------------" << std::endl;
	
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
	SetTextCoordinates(col, row);
	++row;

	std::cout << "                 Sergio Juarez           sergeminator                   " << std::endl;
	std::cout << "                 Gareth Poole            Serentty                       " << std::endl;
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	SetTextCoordinates(col, row);
	++row;

	std::cout << "------------------------------------------------------------------------" << std::endl;

	row += 5;
	SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
	SetTextCoordinates(col, row);
	++row;

	std::cout << "Enter any text to continue" << std::endl;

	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	std::string userInput = "";
	std::cin >> userInput;
}

void DisplayWednesdayLabUserList(HANDLE hConsole)
{

}

void DisplayThursdayLabUserList(HANDLE hConsole)
{

}