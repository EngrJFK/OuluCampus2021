// Forloop_for_Beginners.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"

using namespace std;


struct Employee 
{
	char Name[30];
	int	 Date_of_Birth;
	char Origin[25];
	char B;
	int Height;

};

int main()
{
	Employee Emp;
	cout << "Enter Employee's name here:" << " " << endl;
	cin >> Emp.Name; 
	cout << "Enter Employee Date of Birth:" << " " << endl; 
	cin >> Emp.Date_of_Birth;
	cout << "Enter Employee's State of Origin:" << " " << endl;
	cin >> Emp.Origin;
	cout << "Enter Employee's Blood type:" << " " << endl;
	cin >> Emp.B;
	cout << "Enter Employee's Height here:" << " " << endl;
	cin >> Emp.Height;

	//from here we will output all details
	cout << "....list of employees details.... " << endl;
	cout << "\n\n Employee's Name" << Emp.Name << endl;
	cout << "\n Employee's Date of Birth" << Emp.Date_of_Birth << endl;
	cout << "\n Employee's State of Origin:" << " " << Emp.Origin << endl;
	cout << "\n Employee's Blood type:" << " " << Emp.B << endl;
	cout << "\n Employee's Height..: " << " " << Emp.Height << endl;

	/*for (int i = 0; i < 20; i++)
	{
		cout << "our output" << "=" << i << endl;

	};*/

	system("pause");

    return 0;
}

