// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include "iostream"
#include "sstream"

using namespace std; 

int main()
{
	cout << "We are writing a while loop code: " << endl; 

	int  number = 15; 

	while (number > 5)
	{
		cin >> number;
		cout << " " << endl;
		cout << "Getting started with c++ programming on while loop: " << endl;
	}

	system("pause"); 
    return 0;
}










//HANDLE sole = GetStdHandle(STD_OUTPUT_HANDLE);
//// you can loop k higher to see more color choices
//for (int k = 1; k < 16; k++)
//{
//	// pick the colorattribute k you want
//	SetConsoleTextAttribute(sole, k);
//	cout << k << " I will work at Qualcomm InshaLah!" << endl;
//}

