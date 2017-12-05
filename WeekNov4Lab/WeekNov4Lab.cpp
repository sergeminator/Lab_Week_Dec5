#include "HelperFunctions.h"

int main(int argc, char* argv[])
{
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);

	DisplayIntroMessage(hstdout);

	DisplayTuesdayLabUserList(hstdout);
	DisplayWednesdayLabUserList(hstdout);
	DisplayThursdayLabUserList(hstdout);

	return 0;
}