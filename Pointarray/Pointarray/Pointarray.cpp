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
	
	char array[3][5] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' , 'i', 'j', 'k', 'l',
					   'm', 'n', 'o'};
	//int arrayj[] = {6, 7, 8, 9, 15};
	//p = array;
	char (*p)[5];
	p = array;
	for (int i = 0; i < 3; i++)
	
	{
		for (int j = 0; j < 5; j++) 
		{
			//
			//
		}
			
	}
	cout << (**p) << ' ' << *(*(p + 2) + 2) << endl;
	Sleep(7000);
	cout << (**p) << ' ' << *(*(p + 1) + 2) << endl;

	system("pause");
    return 0;
}

