// KoronaviaRuss.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	
	string str[10], temp;
	cout << "Enter 10 words:" << endl;
	for (int i = 0; i < 10; ++i)
	{
		getline(cin, str[i]);

	}

	for(int i =0; i<9; ++i)
		for (int j = i + 1; j < 10; ++j)
		{
			if (str[i] > str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp; 

			}

		}
	cout << "In lexicographical order:" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << str[i] << endl;
	}



	/*int r, c, a[5][5], b[5][5], sum[5][5], i, j;
	cout << "ensss";
	cin >> r;

	cout << "endidid";
	cin >> c;
	cout << endl << "dididi" << endl;

	for(i =0; i<r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "go and kill" << i + 1 << j + 1 << ":";
			cin >> a[i][j];
		}

	for(i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{

			cout << "ddidid" << i + 1 << j + 1 << ":";
			cin >> b[i][j];
		}*/
	//cout << '\n';
	
	
	
	
	/*int a[10][10]; // = { 20,21,23,32,45,42,87,78,53,24 };
	a[0][0] = 30;
	a[8][8] = 23;
				   //string b[5] = { "dog", "cat", "monkey", "Lizard", "Leopard" };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			a[i][j]= 34;
		}
		
		//cout << b[3]  << '\n';
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << a[i][j] << " " ;//
			
		}
		cout<< '\n';
	}*/

	system("pause");
	return 0;
}

