// MovingMessage.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include "iostream"
#include "sstream"
#include "Windows.h"

using namespace std; 

void moveX(int row)
{
	for (int i = 0; i < row; i++)
		cout << " "; 
}
int main()
{
	HANDLE kamal = GetStdHandle(STD_OUTPUT_HANDLE); //color handler
	

	for( ; ;)
	{ 
	int j; 
	for (int j = 0; j <=100; ++j)
	{
		
		system("CLS");
		SetConsoleTextAttribute(kamal, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		moveX(j); 
		//cout << endl;
		cout << "Flipped Koin Tech"; 
		//cout << " Flipped Koin Tech";
		Sleep(100);
	}

	if (j = 100)
	{
		system("CLS");
		for (j = 100; j >= 5; --j)
		{
			system("CLS");
			SetConsoleTextAttribute(kamal, FOREGROUND_RED | FOREGROUND_INTENSITY);
			moveX(j);
			//cout << endl;
			cout << "Flipped Koin Tech";
			Sleep(100); 
		}
	}
	}
    return 0;
}



//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int yMax = 6;
//int xMax = 55;
//
//char picture[6][55] = {
//	"                                                      ",
//	"         .-.   .-.     .--.                           ",
//	"        | OO| | OO|   / _.-'    .-.   .-.  .-.        ",
//	"        |   | |   |   \\  `-.    '-'   '-'  '-'       ",
//	"        '^^^' '^^^'    `--'                           ",
//	"                                                      "
//};
//char frame[6][55] = {
//	"======================================================",
//	"x                                                    x",
//	"x                                                    x",
//	"x                                                    x",
//	"x                                                    x",
//	"======================================================"
//};
//char buffer[6][55];
//
//void text(int, int, int);
//
//int main()
//{
//	int AxisOffset = 30;
//	while (true)
//	{
//		// Fill the buffer with scrolling image
//		for (int x = 0; x <= (xMax - AxisOffset - 1); x++)
//		{
//			for (int y = 0; y < xMax; y++)
//			{
//				buffer[y][x + AxisOffset] = picture[y][x];
//			}
//		}
//		for (int x = (xMax - AxisOffset); x < xMax; x++)
//		{
//			for (int y = 0; y < xMax; y++)
//			{
//				buffer[y][x - (xMax - AxisOffset)] = picture[y][x];
//			}
//		}
//
//		// Conditionally overlay the frame on top
//		for (int y = 0; y < yMax; y++)
//		{
//			for (int x = 0; x < xMax; x++)
//			{
//				if (frame[y][x] != ' ')
//					buffer[y][x] = frame[y][x];
//			}
//		}
//
//		// Flip buffer, essentially
//		for (int y = 0; y < yMax; y++)
//		{
//			for (int x = 0; x < xMax; x++)
//			{
//				text(x, 5 + y, 15);
//				cout << buffer[y][x];
//			}
//		}
//		AxisOffset++;
//		Sleep(50);
//		if (AxisOffset == xMax)
//		{
//			AxisOffset = 0;
//		}
//	}
//}
//
//void text(int x, int y, int color)
//{
//	COORD cPos;
//	cPos.X = x;
//	cPos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}