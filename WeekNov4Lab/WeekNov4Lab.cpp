#include "HelperFunctions.h"

int main(int argc, char* argv[])
{
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);

	// Adding something here just for fun
	// some message to test merge

	DisplayIntroMessage(hstdout);

	DisplayTuesdayLabUserList(hstdout);
	DisplayWednesdayLabUserList(hstdout);
	DisplayThursdayLabUserList(hstdout);

	return 0;
}