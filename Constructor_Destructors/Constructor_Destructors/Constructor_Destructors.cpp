// Constructor_Destructors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


class Construction
{
public:
	int m;

	
	Construction()
	{
		cout << "default constructor" << '\n';
		m = -8;
	}

	Construction(int x)
	{
		cout << "parameterised" << '\n';
		m = x;
	}

};


int main()
{
	Construction C;
	cout << "constructorConst" << C.m << endl;
	Construction C2(43);
	cout << "constructorparam" << C2.m << endl;
	
	system("pause");
	system("cls");
	return 0;
}

