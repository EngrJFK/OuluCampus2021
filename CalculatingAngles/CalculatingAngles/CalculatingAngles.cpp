// CalculatingAngles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include "math.h"
#define PI 3.14159265
using namespace std; 

double theta; //represent angle 
double SOH, CAH, TOA;

int main()
{
	cout << " we are writing code for calculating trigonometric angles:" << endl; 
	cout << " "; 
	for (; ;)       // creating an  infinite loop
	{
		cout << " please enter the angle to be calculated:" << endl;

		cin >> theta;

		SOH = sin(theta*PI / 180);
		CAH = cos(theta*PI / 180);
		TOA = tan(theta*PI / 180);

		cout << " " << " Sin angle is: " << SOH << endl;
		cout << " " << "Cos angle is : " << CAH << endl;
		cout << " " << "Tan angle is : " << TOA << endl;
	}
	system("pause"); 
    return 0;
}

