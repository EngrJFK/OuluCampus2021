// DatastructureClass1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"

using namespace std;

struct  Patient

{
	char Name[30];
	int  Date_of_Birth;
	char Origin[25];
	char Blood[5];
	int  Height;
	
};


int main()
{
	int i;
	Patient p[5];

	for (i = 0; i < 5; i++)

	{
		cout << "Enter details of admitted patient:" << i + 1 << endl;

	cout << "Enter Patient's Name" << " " << endl;
	cin >> p[i].Name;
	cout << "Enter Patient's Date of Birth: " << " " << endl;
	cin >> p[i].Date_of_Birth;
	cout << "Enter Patient's State of Origin: " << " " << endl;
	cin >> p[i].Origin;
	cout << "Enter Patient's Blood type: " << " " << endl;
	cin >> p[i].Blood;
	cout << "Enter Patient's Height: " << " " << endl;
	cin >> p[i].Height;
	 }
	//From here, we will output all of employee's detail: 

	cout << "Patient's main detials" << endl; 
	for (i=0; i<5; i++)

	cout << "\n\n Patient's Name: " << " " << p[i].Name;
	cout << "\n Patient's Date of Birth:" << " " << p[i].Date_of_Birth;
	cout << " \n Patient's Origin: " << " " << p[i].Origin;
	cout << "\n Patient's Blood type: " << " " << p[i].Blood;
	cout << "\n Patient's Height: " << " " << p[i].Height;

	system("pause");

    return 0;
}

