// Switch Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include "Windows.h"

using namespace std; 

int main()
{  
	float x, y; //declaration of variables
	char oper = '+';   // states of operator

	// we are writing switch operator or statement in c++
	cout << "Welcome to today's class on switch operator" << endl; 
	cout << "please enter the operation sign you wish to perfom" << endl; 
	cin >> oper;
	cout << "please enter the values of the variables for the operation" << endl;
	cin >> x >> y; 

	switch (oper)
	{
	case '+': 
		cout << "addition of two numbers is:" << x + y << endl;
		break;
	case '-':
		cout << "subtraction of two numbers is: " << x - y << endl; 
		break; 
	case '*': 
		cout << "multiplication of two numbers is: " << x * y << endl; 
		break; 
	case '/': 
		cout << "division of two numbers is: " << x / y << endl; 
		break; 
	default: 
		cout << "sign not recognized" << endl;

	}

	system("pause"); 

	return 0;
}





//int main()
//{
//	double x = 0.0;
//	double y = 0.0; 
//	double outcome = 0.0;
//	char op = '+';
//
//	cout << "please enter the operation to be performed" << endl;
//	cin >> op; 
//
//	cout << "please enter the variables' value:" << endl;
//	cin >> x >> y; 
//	for (;;) {
//	switch (op) 
//	{
//	case '+': 
//		cout << " addition of two variables is: " << x + y  << endl;
//		break;
//	case '-': 
//		cout << "Subtraction of two variables is: " << x - y <<endl;
//		break;
//	case '* ': 
//		cout << "multiplication of two variables is:" << x * y <<endl; 
//		break; 
//	case '/': 
//		cout << "division of two variables is: " << x / y << endl;
//		break; 
//
//	default: 
//		cout << "operator not recognised";
//		
//	}
//	}
//	system("pause");
//
//    return 0;
//}
//float x, y;
//char oper;
//
///// entering operators
//cout << "Please enter the operator you wish to work on:" << endl;
//cin >> oper;
////// entering variables
//cout << "please enter the variables of your choice: " << endl;
//cin >> x >> y;
//
//switch (oper)
//{
//case '+':
//	cout << "addition of two variables is :" << " " << x + y << endl;
//	break;
//case '-':
//	cout << "subtraction of two variables is: " << " " << x - y << endl;
//	break;
//case '*':
//	cout << "multiplication of two variables is: " << " " << x * y << endl;
//	break;
//case '/':
//	cout << "division of two variables is : " << " " << x / y << endl;
//	break;
//default:
//	cout << "Operator not recognised!!!" << endl;
//	break;
//}
//
//system("pause");
