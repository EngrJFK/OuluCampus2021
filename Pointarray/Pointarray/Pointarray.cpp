// Pointarray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include <dos.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	int  x ; 
	
	string array[3][5] = {"Ghana", "Nigeria", "Cameroon", 
		                  "Rwanda", "Senegal", "Egypt", "Ethiopia", 
		                  "Mali" , "Kenya", "Somalia", "DR Congo", 
		                  "South-Africa", "Angola", "Mozambique", "Gabon" };

	//int arrayj[] = {6, 7, 8, 9, 15};
	//p = array;
	string (*p)[5];
	p = array;
	for (int row = 0; row < 3; row++)
	
	{
		for (int col = 0; col < 5; col++) 
		{
			//
			//
		}
			
	}

	for (; ;){
	
		cout << "Enter the the keypad digit for the desired letter: " << endl;
	
	
		cin >> x; 
	
		if (x == 1)
	
		{
		cout << *(*p + 1) << endl;
	
		}

	
		else if (x == 2)
	
		{

		cout << *(*(p + 1) + 4) << endl; 
	
		}

	
		else if (x == 3)
	
		{

		cout << *(*(p + 2) + 4) << endl;
	
		}

	
		else if (x == 4)
	
		{
		cout << *(*(p + 1) + 2) << endl;
	    }

		else if (x == 5)

		{
			cout << *(*(p + 2) + 2) << endl;
		}

		else if (x == 6)

		{
			cout << *(*(p + 1) + 3) << endl;
		}
		else if (x == 7)

		{
			cout << *(*(p + 2) + 3) << endl;
		}

		else
		{
			cout << "Country not found!!!: " << endl;
		}
	}
	/*Sleep(7000);
	cout << (**p) << ' ' << *(*p+4)  << endl;
	Sleep(7000);
	cout << (**p) << ' ' << *(*(p + 1) + 2) << endl;
	Sleep(7000);
	cout << (**p) << ' ' << *(*(p + 2) + 3) << endl;*/

	system("pause");
    return 0;
}

