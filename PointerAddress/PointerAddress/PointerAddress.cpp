// PointerAddress.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
//#include "ctime"
#include <sstream>
using namespace std;

struct Traffic {
	
	char Dir1[30];
	int  left;
	float  upside;
	int busstation;
}go;



int main()
{
	cout << "Welcome to traffic control interface" << '\n';

	cout << "enter the direction of your choice" << '\n';
	cin.get(go.Dir1, 30);

	cout << "enter the second direction of your choice" <<'\n' ;
	cin >> go.left;

	cout << "enter third direction of your choice" << '\n';
	cin >> go.upside;
	cout << "enter third direction of your choice" << '\n';
	cin >> go.busstation;

	cout << "enter1" << go.Dir1 << '\n';
	cout << "enter2" << go.left << '\n';
	cout << "enter3" << go.upside << '\n';
	cout << "enter4" << go.busstation << '\n';
	
	system("pause");
    return 0;
}


