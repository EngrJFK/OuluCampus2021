// Datastructure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;


struct Traffic 
{

	char Westindices[20];
	float East;
	int Southgate;

};

int main()
{
	Traffic T[2];

	for (int i = 0; i < 2; ++i)

	{
		cout << "welcome to the traffic gates interface" << '\n';

		cout << "Enter the direction of your choice" << '\n';
		cin >> T[i].Westindices;

		cout << "Enter the 2nd direction of your choice" << '\n';
		cin >> T[i].East;

		cout << "Enter the 3rd direction of your choice" << '\n';
		cin >> T[i].Southgate;

		cout << "enter value summary" << "  " << i + 1 << '\n';
		cout << "\n\nFirst Direction" << "  " <<T[i].Westindices << '\n';
		cout << "\n\nSecond Direction" <<"  " <<T[i].East        << '\n';
		cout << "\n\nThird Direction" << "  " <<T[i].Southgate   << '\n';
	}

	system("pause");
    return 0;
}

