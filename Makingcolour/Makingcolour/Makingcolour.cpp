// Makingcolour.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include <eku\io\concol.h>
#include <iostream>
#include "concol.h"
#include "Windows.h"
using namespace std;
using namespace eku;

int main()
{
	concolinit();
	char a[30];
	SetConsoleTitle("Color");
	cout << red << "Hello" << endl;
	setcolor(red, yellow);
	cout << "Hello2" << endl;
	setcolor(white, defbackcol);
	cout << "Hello3" << endl;
	settextcolor(blue);
	cout << "Enter a word ";
	cin >> green >> a;
	cout << pink << "You entered " << yellow << a << endl;
	settextcolor(cyan);
	return 0;
}

//int main()
//{
//    return 0;
//}

