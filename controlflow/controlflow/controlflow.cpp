// controlflow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include "Windows.h"

using namespace std; 

int main()
{
	for (int i = 50; i >= 10; i--)

	{
		cout <<"\t"<< i << endl; 
	}

	cout << "We did it, Bravo!!!" << endl;

	system("pause");
    return 0;
}

