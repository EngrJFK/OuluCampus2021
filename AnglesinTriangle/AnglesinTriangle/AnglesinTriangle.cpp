// AnglesinTriangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include <math.h>
#define PI 3.14159265

using namespace std;

int main()
{
	double k; 
	double SOH, CAH, TOA;

	for ( ; ;)    // we created an infinite loop
	{ 
	    cout << "Enter the value of your angle: " << '\n' << endl;
	    //
	   cin >> k;

	   SOH = sin(k*PI / 180);
	   CAH = cos(k*PI / 180);
	   TOA = tan(k*PI / 180); 

	    cout << "the calculated angles are: " << " " << '\n\n' << endl; 
	    cout << " " << SOH << '\n' << endl; 
	    cout << " " << CAH << '\n' << endl; 
	    cout << " " << TOA << '\n' << endl; 
	}
	system("pause"); 

    return 0;
}

