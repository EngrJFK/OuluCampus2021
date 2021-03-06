// FriendFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"

using namespace std;

class Mango;

class Apple
{
	int price;
	int weight; 

public:
	Apple(int x, int y)
	{
		price  = x;
		weight = y;
	}

	friend void total(Apple, Mango);

};

class Mango
{
	int price;
	int weight;

public:
	Mango(int x, int y)
	{
		price  =  x; 
		weight = y;
	}

	friend void total(Apple, Mango);

};




void total(Apple A, Mango M)
{
	cout << "\n\tprice\tweight";
	cout << "\n Fruit 1 : " << A.price << "\t" << A.weight;
	cout << "\n Fruit 2  : " << M.price << "\t" << M.price;
	cout << "\n...........";
	cout << "\n\t total : " << A.price + M.price << "\t" << A.price + M.weight;
	cout << "\n.................................";
}

int main()
{
	Apple Rimi(50, 30);
	Mango Maxima(20, 60);

	total(Rimi, Maxima);

	system("pause");
	
	return 0;
}

