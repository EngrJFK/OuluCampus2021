// functionoverloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"

using namespace std;
int h;
class cylinder
{
	
public:
	void volume(int r)
	{
		cout << "\n\t Volume of cylinder" << 3.14*r*r;
	}
	
	void volume(int h, int m)
	{
		cout << "\n\t volume of cone is: " << 0.33*h*m;

	}

//private:

};






int main()
{
	cylinder c;
	c.volume(4);
	c.volume(4, 6);

	system("pause");
	system("cls");
    return 0;
}

