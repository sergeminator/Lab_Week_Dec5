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
	//SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE);
	SetConsoleTextAttribute(hConsole, 3);

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
	system("cls"); // clear screen before we start drawing again

	int row = 5;
	int col = 10;

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	SetTextCoordinates(col, row);
	++row;

	std::cout << "------------------------------------------------------------------------" << std::endl;


	// Copy every thing from here
	10fb8f10f8b083b03377a4e8b25359369a4cb635;
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
	SetTextCoordinates(col, row);
	++row;

	std::cout << "                 Sergio Juarez           sergeminator                   " << std::endl;





	// To Here

<<<<<<< HEAD
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
=======
<<<<<<< HEAD
	/******************************** Paste your new code here *************************************/
	10fb8f10f8b083b03377a4e8b25359369a4cb635;
=======
>>>>>>> 92d3b7caee20df8508aac9798aa644e9a8c0e991
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
>>>>>>> 34be42850b3951c5f0ece18f81c657eb5f542f34
	SetTextCoordinates(col, row);
	++row;

<<<<<<< HEAD
std::cout << "                 Chris Dujay           MrMust4chio                   " << std::endl;



=======
	std::cout << "                 Ben LeBlanc             LeScoops                   " << std::endl;
>>>>>>> 92d3b7caee20df8508aac9798aa644e9a8c0e991


10fb8f10f8b083b03377a4e8b25359369a4cb635;
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