// Getgoing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include "Windows.h"

using namespace std; 
int main()
{
	HANDLE colour = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(colour, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	int score;
	cout << "Writing code for an 'if' statement" << endl;

	cout << "enter the score of the students" << endl;
	for (;;)// infinite loop
	{
		SetConsoleTextAttribute(colour, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cin >> score; 
	if (score >= 85)
	{
		cout << "Excellent Grade, Bravo!!!" << endl;
	}
	else 
	{
		SetConsoleTextAttribute(colour, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "not a good grade" << endl; 
	}
	}
	system("pause"); 
    return 0;
}

