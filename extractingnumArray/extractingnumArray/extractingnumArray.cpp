// extractingnumArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
using namespace std;

int main()
{
	//int * pointer;
	
	int i, j, r=3, c=3;
	
	int array[3][3] = { 1,2,3,4,5,6,7,8,9 };
	
	for (i = 0; i < r; i++) 
	{
		for (j = 0; j < c; j++)
		{
			cout << array[i][j]<< endl;
		}
	
	}
	
	system("pause");
    return 0;
}

