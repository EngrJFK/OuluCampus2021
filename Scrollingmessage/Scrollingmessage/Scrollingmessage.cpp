// Scrollingmessage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include "iostream"
#include "sstream"

using namespace std;

struct Road

{
	int East; 
	int North; 
	int West; 
	int South; 

};


int main()
{
	Road p1 = { 20, 25, 40, 50 };
	struct Road* p2 = &p1;
	cout << "Your Road directions are: " << endl; 
	cout << p2->East << " "<<'\n'<< p2->North << " " << endl;
	cout << p2->South << " " <<'\n'<< p2->West << " " << endl;
	cout << p2->East +(p2->South) <<" " <<'\n' << p2->North + (p2->West) << " " << endl;

	system("pause"); 
	return 0; 
}