// Addingcolor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include <Windows.h>

using namespace std; 

int main()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_INTENSITY);
	//program starts from here
	cout << "Flipped koin tech" << endl; 
	SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Flipped koin tech" << endl;
	system("pause"); 
    return 0;
}

