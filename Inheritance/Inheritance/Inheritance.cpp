// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std; // namespace helps to create scope for different identifiers. 

class shape
{
	int Length;
	int Breadth;
	int Height;

public:
	void Dimension()
	{
		cout << " Shape length is: " << '\n';
		cin >> Length;
		cout << "Shape Breadth is: " << '\n';
		cin >> Breadth;
		cout << "Shape Height is: " << '\n';
		cin >> Height;

	}

	void Displaydata()
	{
		cout << "\n\n Length: " << Length;
		cout << "\n\n Breadth: " << Breadth;
		cout << "\n\n Height: " << Height;

	}


};


class Rectangle : public shape
{
	int x;
	int y;

public: 
	void Recdata()
	{
		cout << "\n\n Length values";
		cin >> x;
		cout << "\n\n Breadth values";
		cin >> y;

	}

	void Recgetdata()
	{
		cout << "\n\n Length: " << x;
		cout << "\n\n Length: " << y;
		
	}


};


class square : public shape
{
	int x;

public: 

	void squaredata()
	{

		cout << "read sqaure data";
		cin >> x;
	}

	void squarereaddata()
	{

		cout << "\n\n Length: " << x;

	}

};



int main()
{
	Rectangle rect;
	square	  sqrt;
	//s.Recdata();
	//s.Recgetdata();

	system("pause");
    return 0;
}

