// Multidimensional Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include "Windows.h"

using namespace std; 

int main()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE |FOREGROUND_INTENSITY);
	
	string Array[3][3] = 
	{
		{"Aisha", "Sumaya", "Aminah"}, {"Yusuf", "Faisal", "Ahmad"}, {"a31", "a32", "a33"}
	};

	for (int i = 0; i < 3; i++) 
	{
	  for(int j = 0; j<3; j++)
	  {
		  //cout << Array[i][j] << " " << flush;
		  
		 cout << Array[j][i] << " " << flush;
	  }
	  cout << " " << endl;
	}
	system("pause");
    return 0;
}

