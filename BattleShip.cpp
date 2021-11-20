/* 
*   Copyright (C) 2017-12 Makhlug Jafarov
*
    
    //github.com/jafarov01
    //https://www.linkedin.com/in/jafarov01/
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <io.h>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(h, 9);
void main();

void menu()
{
	SetConsoleTextAttribute(h, 11);
	cout << "\n\n\t\t\tXXXXX    XXXX   XXXXXX  XXXXXX  XX      XXXXXX    XXXXX  XX  XX  XX  XXXXX\n";
	cout << "\t\t\tXX  XX  XX  XX    XX      XX    XX      XX       XX      XX  XX  XX  XX  XX\n";
	cout << "\t\t\tXX  XX  XX  XX    XX      XX    XX      XX       XX      XX  XX  XX  XX  XX\n";
	cout << "\t\t\tXXXXX   XX  XX    XX      XX    XX      XXXX      XXXX   XXXXXX  XX  XXXXX\n";
	cout << "\t\t\tXX  XX  XXXXXX    XX      XX    XX      XX           XX  XX  XX  XX  XX\n";
	cout << "\t\t\tXX  XX  XX  XX    XX      XX    XX      XX           XX  XX  XX  XX  XX\n";
	cout << "\t\t\tXXXXX   XX  XX    XX      XX    XXXXXX  XXXXXX   XXXXX   XX  XX  XX  XX\n";
	cout << "\n\n\n\n\n\n\t\t\t\t\t     BattleShip Game v.0.1.0\n";
	cout << "\n\t\t\t\t\t\t1- Start Game\n";
	cout << "\t\t\t\t\t\t2- Rules of Game\n";
	cout << "\t\t\t\t\t\t3- Exit\n";
}

void shipZ(int& key, int& posI, int& posJ, int player[10][10], int& count, int& countZ, int& size)
{
	if (key == 'Z' || key == 'z' && countZ != 0 && posI < size && posJ < size
		&& player[posI][posJ] != 10 && player[posI + 1][posJ] != 10 && player[posI - 1][posJ] != 10 && player[posI][posJ + 1] != 10 && player[posI][posJ - 1] != 10
		&& player[posI + 1][posJ - 1] != 10 && player[posI + 1][posJ + 1] != 10 && player[posI - 1][posJ + 1] != 10 && player[posI - 1][posJ - 1] != 10
		&& player[posI][posJ] != 20 && player[posI + 1][posJ] != 20 && player[posI - 1][posJ] != 20 && player[posI][posJ + 1] != 20 && player[posI][posJ - 1] != 20
		&& player[posI + 1][posJ - 1] != 20 && player[posI + 1][posJ + 1] != 20 && player[posI - 1][posJ + 1] != 20 && player[posI - 1][posJ - 1] != 20
		&& player[posI][posJ] != 30 && player[posI + 1][posJ] != 30 && player[posI - 1][posJ] != 30 && player[posI][posJ + 1] != 30 && player[posI][posJ - 1] != 30
		&& player[posI + 1][posJ - 1] != 30 && player[posI + 1][posJ + 1] != 30 && player[posI - 1][posJ + 1] != 30 && player[posI - 1][posJ - 1] != 30
		&& player[posI][posJ] != 40 && player[posI + 1][posJ] != 40 && player[posI - 1][posJ] != 40 && player[posI][posJ + 1] != 40 && player[posI][posJ - 1] != 40
		&& player[posI + 1][posJ - 1] != 40 && player[posI + 1][posJ + 1] != 40 && player[posI - 1][posJ + 1] != 40 && player[posI - 1][posJ - 1] != 40) {
		count--;
		countZ--;
		player[posI][posJ] = 10;
		cout << char(220);
	}
}

void shipX(int& key, int& posI, int& posJ, int player[10][10], int& count, int& countX, int& size)
{
	if (key == 'X' || key == 'x' && posI >= 0 && posI < size && posJ >= 0 && posJ < 9 && countX != 0
		&& player[posI][posJ] != 10 && player[posI + 1][posJ] != 10 && player[posI - 1][posJ] != 10 && player[posI][posJ + 1] != 10 && player[posI][posJ - 1] != 10
		&& player[posI + 1][posJ - 1] != 10 && player[posI + 1][posJ + 1] != 10 && player[posI - 1][posJ + 1] != 10 && player[posI - 1][posJ - 1] != 10
		&& player[posI][posJ] != 20 && player[posI + 1][posJ] != 20 && player[posI - 1][posJ] != 20 && player[posI][posJ + 1] != 20 && player[posI][posJ - 1] != 20
		&& player[posI + 1][posJ - 1] != 20 && player[posI + 1][posJ + 1] != 20 && player[posI - 1][posJ + 1] != 20 && player[posI - 1][posJ - 1] != 20
		&& player[posI][posJ] != 30 && player[posI + 1][posJ] != 30 && player[posI - 1][posJ] != 30 && player[posI][posJ + 1] != 30 && player[posI][posJ - 1] != 30
		&& player[posI + 1][posJ - 1] != 30 && player[posI + 1][posJ + 1] != 30 && player[posI - 1][posJ + 1] != 30 && player[posI - 1][posJ - 1] != 30
		&& player[posI][posJ] != 40 && player[posI + 1][posJ] != 40 && player[posI - 1][posJ] != 40 && player[posI][posJ + 1] != 40 && player[posI][posJ - 1] != 40
		&& player[posI + 1][posJ - 1] != 40 && player[posI + 1][posJ + 1] != 40 && player[posI - 1][posJ + 1] != 40 && player[posI - 1][posJ - 1] != 40
		&& player[posI][posJ + 2] != 10 && player[posI + 1][posJ + 2] != 10 && player[posI - 1][posJ + 2] != 10
		&& player[posI][posJ + 2] != 20 && player[posI + 1][posJ + 2] != 20 && player[posI - 1][posJ + 2] != 20
		&& player[posI][posJ + 2] != 30 && player[posI + 1][posJ + 2] != 30 && player[posI - 1][posJ + 2] != 30
		&& player[posI][posJ + 2] != 40 && player[posI + 1][posJ + 2] != 40 && player[posI - 1][posJ + 2] != 40) {
		countX--;
		count--;
		player[posI][posJ] = 20;
		player[posI][posJ + 1] = 20;
		cout << char(220) << char(220);
	}
}

void shipC(int& key, int& posI, int& posJ, int player[10][10], int& count, int& countC, int& size)
{
	if (key == 'C' || key == 'c' && posI >= 0 && posI < size && posJ >= 0 && posJ < 8 && countC != 0
		&& player[posI][posJ] != 10 && player[posI + 1][posJ] != 10 && player[posI - 1][posJ] != 10 && player[posI][posJ + 1] != 10 && player[posI][posJ - 1] != 10
		&& player[posI + 1][posJ - 1] != 10 && player[posI + 1][posJ + 1] != 10 && player[posI - 1][posJ + 1] != 10 && player[posI - 1][posJ - 1] != 10
		&& player[posI][posJ] != 20 && player[posI + 1][posJ] != 20 && player[posI - 1][posJ] != 20 && player[posI][posJ + 1] != 20 && player[posI][posJ - 1] != 20
		&& player[posI + 1][posJ - 1] != 20 && player[posI + 1][posJ + 1] != 20 && player[posI - 1][posJ + 1] != 20 && player[posI - 1][posJ - 1] != 20
		&& player[posI][posJ] != 30 && player[posI + 1][posJ] != 30 && player[posI - 1][posJ] != 30 && player[posI][posJ + 1] != 30 && player[posI][posJ - 1] != 30
		&& player[posI + 1][posJ - 1] != 30 && player[posI + 1][posJ + 1] != 30 && player[posI - 1][posJ + 1] != 30 && player[posI - 1][posJ - 1] != 30
		&& player[posI][posJ] != 40 && player[posI + 1][posJ] != 40 && player[posI - 1][posJ] != 40 && player[posI][posJ + 1] != 40 && player[posI][posJ - 1] != 40
		&& player[posI + 1][posJ - 1] != 40 && player[posI + 1][posJ + 1] != 40 && player[posI - 1][posJ + 1] != 40 && player[posI - 1][posJ - 1] != 40
		&& player[posI][posJ + 3] != 10 && player[posI + 1][posJ + 3] != 10 && player[posI - 1][posJ + 3] != 10
		&& player[posI][posJ + 3] != 10 && player[posI + 1][posJ + 3] != 20 && player[posI - 1][posJ + 3] != 20
		&& player[posI][posJ + 3] != 30 && player[posI + 1][posJ + 3] != 30 && player[posI - 1][posJ + 3] != 30
		&& player[posI][posJ + 3] != 40 && player[posI + 1][posJ + 3] != 40 && player[posI - 1][posJ + 3] != 40
		&& player[posI + 2][posJ + 1] != 10 && player[posI + 2][posJ - 1] != 10
		&& player[posI + 2][posJ + 1] != 20 && player[posI + 2][posJ - 1] != 20
		&& player[posI + 2][posJ + 1] != 30 && player[posI + 2][posJ - 1] != 30
		&& player[posI + 2][posJ + 1] != 40 && player[posI + 2][posJ - 1] != 40) {
		count--;
		countC--;
		player[posI][posJ] = 30;
		player[posI][posJ + 1] = 30;
		player[posI][posJ + 2] = 30;
		cout << char(220) << char(220) << char(220);
	}
}

void shipV(int& key, int& posI, int& posJ, int player[10][10], int& count, int& countV, int& size)
{
	if ((key == 'V' || key == 'v') && posI < 8 && countV != 0
		&& player[posI][posJ] != 10 && player[posI + 1][posJ] != 10 && player[posI - 1][posJ] != 10 && player[posI][posJ + 1] != 10 && player[posI][posJ - 1] != 10
		&& player[posI + 1][posJ - 1] != 10 && player[posI + 1][posJ + 1] != 10 && player[posI - 1][posJ + 1] != 10 && player[posI - 1][posJ - 1] != 10
		&& player[posI][posJ] != 20 && player[posI + 1][posJ] != 20 && player[posI - 1][posJ] != 20 && player[posI][posJ + 1] != 20 && player[posI][posJ - 1] != 20
		&& player[posI + 1][posJ - 1] != 20 && player[posI + 1][posJ + 1] != 20 && player[posI - 1][posJ + 1] != 20 && player[posI - 1][posJ - 1] != 20
		&& player[posI][posJ] != 30 && player[posI + 1][posJ] != 30 && player[posI - 1][posJ] != 30 && player[posI][posJ + 1] != 30 && player[posI][posJ - 1] != 30
		&& player[posI + 1][posJ - 1] != 30 && player[posI + 1][posJ + 1] != 30 && player[posI - 1][posJ + 1] != 30 && player[posI - 1][posJ - 1] != 30
		&& player[posI][posJ] != 40 && player[posI + 1][posJ] != 40 && player[posI - 1][posJ] != 40 && player[posI][posJ + 1] != 40 && player[posI][posJ - 1] != 40
		&& player[posI + 1][posJ - 1] != 40 && player[posI + 1][posJ + 1] != 40 && player[posI - 1][posJ + 1] != 40 && player[posI - 1][posJ - 1] != 40
		&& player[posI + 3][posJ] != 10 && player[posI + 3][posJ + 1] != 10 && player[posI + 3][posJ - 1] != 10
		&& player[posI + 3][posJ] != 20 && player[posI + 3][posJ + 1] != 20 && player[posI + 3][posJ - 1] != 20
		&& player[posI + 3][posJ] != 30 && player[posI + 3][posJ + 1] != 30 && player[posI + 3][posJ - 1] != 30
		&& player[posI + 3][posJ] != 40 && player[posI + 3][posJ + 1] != 40 && player[posI + 3][posJ - 1] != 40
		&& player[posI + 2][posJ] != 10 && player[posI + 2][posJ + 1] != 10 && player[posI + 2][posJ - 1] != 10
		&& player[posI + 2][posJ] != 20 && player[posI + 2][posJ + 1] != 20 && player[posI + 2][posJ - 1] != 20
		&& player[posI + 2][posJ] != 30 && player[posI + 2][posJ + 1] != 30 && player[posI + 2][posJ - 1] != 30
		&& player[posI + 2][posJ] != 40 && player[posI + 2][posJ + 1] != 40 && player[posI + 2][posJ - 1] != 40) {
		count--;
		countV--;
		player[posI][posJ] = 40;
		player[posI + 1][posJ] = 40;
		player[posI + 2][posJ] = 40;
		cout << char(219);
	}
}

void makePlayerArea(int player[10][10], int size, char& key, int& count, int& countZ, int& countX, int& countC, int& countV)
{
	//----------------------------
	int posI = size - 5;
	int posJ = size - 5;
	//----------------------------
	while (true) {
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		for (int i = 0; i < size * 2 + 3; i++)
		{
			if (i == 0)
				cout << char(201);
			else if (i == size * 2 + 2)
				cout << char(187);
			else
				cout << char(205);
		}
		cout << endl << char(186) << "x" << char(186);
		for (int i = 0; i < size; i++)
		{
			cout << i << char(186);
		}
		cout << endl;
		for (int i = 0; i < size; i++)
		{
			cout << char(186) << i;
			for (int j = 0; j < size; j++)
			{
				cout << char(186);
				if (posI == i && posJ == j)
					cout << char(178);
				else if (player[i][j] == 0)
					cout << char(176);
				else if (player[i][j] == 10 || player[i][j] == 20 || player[i][j] == 30 || player[i][j] == 40)
					cout << char(219);
			}
			cout << char(186) << endl;
		}
		for (int i = 0; i < size * 2 + 3; i++)
		{
			if (i == 0)
				cout << char(200);
			else if (i == size * 2 + 2)
				cout << char(188);
			else
				cout << char(205);
		}
		cout << endl << posI << "x" << posJ << endl;
		//----------------------------
		cout << "Place Your Ships: \n";
		cout << "1-  " << char(220) << "\t\tPress <Z> - " << countZ << " -\n";														// -1-  -10-
		cout << "2-  " << char(220) << char(220) << "\t\tPress <X> - " << countX << " -\n";											// -2-	-20-
		cout << "3-  " << char(220) << char(220) << char(220) << "  \tPress <C> - " << countC << " -\n";							// -3-	-30-
		cout << "\n5-  " << char(219) << "\t\tPress <V> - " << countV << " -\n    " << char(219) << "\n    " << char(219) << endl;	// -4-  -40-
		cout << "You can place 10 different ships. Let's Press Buttons:  ";
		cout << "<Z> ";
		cout << "<X> ";
		cout << "<C> ";
		cout << "<V> !\n Choosen: ";
		cout << "\t\tYour Remaining Ship Choice: " << count << endl;

		int	key = _getch();

		if (key == 'w' && posI > 0 && player[posI - 1][posJ] == 0)
			posI--;
		else if (key == 's' && posJ <= size - 1 && player[posI + 1][posJ] == 0)
			posI++;
		else if (key == 'a' && posJ > 0 && player[posI][posJ - 1] == 0)
			posJ--;
		else if (key == 'd' && posJ < size - 1 && player[posI][posJ + 1] == 0)
			posJ++;
		//----------------------------
		shipZ(key, posI, posJ, player, count, countZ, size);
		shipX(key, posI, posJ, player, count, countX, size);
		shipC(key, posI, posJ, player, count, countC, size);
		shipV(key, posI, posJ, player, count, countV, size);
		//----------------------------
		if (count == 0)
			break;
	}
	if (count == 0)
		system("cls");
}

void avtoPlayerArea(int player[10][10], int size, int shipsize, int shipcount)
{
	int PosI, PosJ;
	int movement;
	int count = 0;
	while (count < shipcount)
	{
		PosI = rand() % size;
		PosJ = rand() % size;
		int tempI = PosI;
		int tempJ = PosJ;
		int destination = 1;
		movement = rand() % 4;
		for (int i = 0; i < shipsize; i++)
		{
			if (PosI < 0 || PosI >= size || PosJ < 0 || PosJ >= size)
			{
				destination = 0;
			}
			if (player[PosI][PosJ] == 2 || player[PosI][PosJ + 1] == 2 || player[PosI][PosJ - 1] == 2 ||
				player[PosI + 1][PosJ] == 2 || player[PosI + 1][PosJ + 1] == 2 || player[PosI + 1][PosJ - 1] == 2 ||
				player[PosI - 1][PosJ] == 2 || player[PosI - 1][PosJ + 1] == 2 || player[PosI - 1][PosJ - 1] == 2) {
				destination = 0;
			}
			if (movement == 0)
				PosI++;
			else if (movement == 1)
				PosI--;
			else if (movement == 2)
				PosJ++;
			else if (movement == 3)
				PosJ--;
		}
		if (destination == 1)
		{
			PosI = tempI;
			PosJ = tempJ;
			for (int i = 0; i < shipsize; i++)
			{
				player[PosI][PosJ] = 2;
				if (movement == 0)
				{
					PosI++;
				}
				else if (movement == 1)
				{
					PosI--;
				}
				else if (movement == 2)
				{
					PosJ++;
				}
				else if (movement == 3)
				{
					PosJ--;
				}
			}
			count++;
		}
	}
}

void printPlayerBoard(int player[10][10], int size)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	cout << endl << "\t\t\tPLAYER\'S AREA" << endl;
	for (int i = 0; i < size * 2 + 3; i++)
	{
		if (i == 0)
			cout << "\t\t" << char(201);
		else if (i == size * 2 + 2)
			cout << char(187);
		else
			cout << char(205);
	}
	cout << endl << "\t\t" << char(186) << "x" << char(186);
	for (int i = 0; i < size; i++)
	{
		cout << i << char(186);
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "\t\t" << char(186) << i;
		for (int j = 0; j < size; j++)
		{
			cout << char(186);
			if (player[i][j] == 0)
				cout << char(176);
			else if (player[i][j] == 10 || player[i][j] == 20 || player[i][j] == 30 || player[i][j] == 40) {
				cout << char(219);
			}
			else if (player[i][j] == -1) {
				SetConsoleTextAttribute(h, 12);
				cout << char(248);
				SetConsoleTextAttribute(h, 11);
			}
			else if (player[i][j] == -2) {
				SetConsoleTextAttribute(h, 9);
				cout << '*';
				SetConsoleTextAttribute(h, 11);
			}
			else if (player[i][j] == 2) {
				cout << char(219);
			}
		}
		cout << char(186) << endl;
	}
	for (int i = 0; i < size * 2 + 3; i++)
	{
		if (i == 0)
			cout << "\t\t" << char(200);
		else if (i == size * 2 + 2)
			cout << char(188);
		else
			cout << char(205);
	}
}

void randomizeComputerArea(int computer[10][10], int& size, int shipsize, int shipcount)
{
	int PosI, PosJ;
	int movement;
	int count = 0;
	while (count < shipcount)
	{
		PosI = rand() % size;
		PosJ = rand() % size;
		int tempI = PosI;
		int tempJ = PosJ;
		int destination = 1;
		movement = rand() % 4;
		for (int i = 0; i < shipsize; i++)
		{
			if (PosI < 0 || PosI >= size || PosJ < 0 || PosJ >= size)
			{
				destination = 0;
			}
			if (computer[PosI][PosJ] == 2 || computer[PosI][PosJ + 1] == 2 || computer[PosI][PosJ - 1] == 2 ||
				computer[PosI + 1][PosJ] == 2 || computer[PosI + 1][PosJ + 1] == 2 || computer[PosI + 1][PosJ - 1] == 2 ||
				computer[PosI - 1][PosJ] == 2 || computer[PosI - 1][PosJ + 1] == 2 || computer[PosI - 1][PosJ - 1] == 2) {
				destination = 0;
			}
			if (movement == 0)
				PosI++;
			else if (movement == 1)
				PosI--;
			else if (movement == 2)
				PosJ++;
			else if (movement == 3)
				PosJ--;
		}
		if (destination == 1)
		{
			PosI = tempI;
			PosJ = tempJ;
			for (int i = 0; i < shipsize; i++)
			{
				computer[PosI][PosJ] = 2;
				if (movement == 0)
				{
					PosI++;
				}
				else if (movement == 1)
				{
					PosI--;
				}
				else if (movement == 2)
				{
					PosJ++;
				}
				else if (movement == 3)
				{
					PosJ--;
				}
			}
			count++;
		}
	}
}

void print_attact_CoumputerArea(int computer[10][10], int player[10][10], int& size, int& compI, int& compJ, int& beat, int& score)
{

	cout << endl << "\t\t      ENEMY\'S AREA" << endl;
	for (int i = 0; i < size * 2 + 3; i++)
	{
		if (i == 0)
			cout << "\t\t" << char(201);
		else if (i == size * 2 + 2)
			cout << char(187);
		else
			cout << char(205);
	}
	cout << endl << "\t\t" << char(186) << "x" << char(186);
	for (int i = 0; i < size; i++)
	{
		cout << i << char(186);
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "\t\t" << char(186) << i;
		for (int j = 0; j < 10; j++)
		{
			cout << char(186);
			if (i == compI && j == compJ)
				cout << char(197);
			else if (computer[i][j] == 0)
				cout << char(176);
			else if (computer[i][j] == -1) {
				SetConsoleTextAttribute(h, 12);
				cout << char(248);
				SetConsoleTextAttribute(h, 11);
			}
			else if (computer[i][j] == -2) {
				SetConsoleTextAttribute(h, 9);
				cout << '*';
				SetConsoleTextAttribute(h, 11);
			}
			else
				cout << char(176);
		}
		cout << char(186) << endl;
	}
	for (int i = 0; i < size * 2 + 3; i++)
	{
		if (i == 0)
			cout << "\t\t" << char(200);
		else if (i == size * 2 + 2)
			cout << char(188);
		else
			cout << char(205);
	}

	int code = _getch();

	if (code == 'w' && compI > 0 && compI < size) {
		compI--;
	}
	else if (code == 's' && compI >= 0 && compI < size - 1) {
		compI++;
	}
	else if (code == 'a' && compJ < size && compJ > 0) {
		compJ--;
	}
	else if (code == 'd' && compJ >= 0 && compJ < size - 1) {
		compJ++;
	}
	else if (code == 32) {
		beat++;
		if (computer[compI][compJ] == 2) {
			computer[compI][compJ] = -1;	//vurulan gemi
			score += 10;
		}
		else if (computer[compI][compJ] != -1)
			computer[compI][compJ] = -2;     //vurulan bos erazi
	}
}

void rand_attactPlayerArea(int player[10][10], int size, int& beat)
{
	int beatI = rand() % size;
	int beatJ = rand() % size;


	if (beat == 1) {
		beat--;
		if ((player[beatI][beatJ] == 10 || player[beatI][beatJ] == 20 || player[beatI][beatJ] == 30 || player[beatI][beatJ] == 40 || player[beatI][beatJ] == 2) && player[beatI][beatJ] != -2)
			player[beatI][beatJ] = -1;
		else if (player[beatI][beatJ] != -1 && player[beatI][beatJ] == 0)
			player[beatI][beatJ] = -2;
	}
}

void checkGame(int computer[10][10], int player[10][10], int size, int& CcountHit, int PcountHit, int& score)
{

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (computer[i][j] == -1)
			{
				CcountHit++;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (player[i][j] == -1)
			{
				PcountHit++;
			}
		}
	}


	if (score == 200)
	{
		cout << "\t\t\t\t\t\t\tYou Won! Congrutulation!!!" << endl;
		Sleep(1500);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t1-Menu";
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t2-Exit";
		int key = _getch();
		if (key == '1') {
			system("cls");
			main();
		}
		else if (key == '2')
			exit(0);

	}
}

void playTime(int player[10][10], int computer[10][10], int size, int count, int& beat)
{
	system("cls");
	int CcountHit = 0;
	int PcountHit = 0;
	int compI = 5;
	int compJ = 5;
	int score = 0;
	int load = 0;
	while (load < 101)
	{
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tThe BattleShip Game Is Starting!\n\t\t\t\t\t\tLOADING... " << load << "%\n\n\n";
		load += rand() % 20;
		cout << "\t\tXXXXX    XXXX   XXXXXX  XXXXXX  XX      XXXXXX    XXXXX  XX  XX  XX  XXXXX\n";
		cout << "\t\tXX  XX  XX  XX    XX      XX    XX      XX       XX      XX  XX  XX  XX  XX\n";
		cout << "\t\tXX  XX  XX  XX    XX      XX    XX      XX       XX      XX  XX  XX  XX  XX\n";
		cout << "\t\tXXXXX   XX  XX    XX      XX    XX      XXXX      XXXX   XXXXXX  XX  XXXXX\n";
		cout << "\t\tXX  XX  XXXXXX    XX      XX    XX      XX           XX  XX  XX  XX  XX\n";
		cout << "\t\tXX  XX  XX  XX    XX      XX    XX      XX           XX  XX  XX  XX  XX\n";
		cout << "\t\tXXXXX   XX  XX    XX      XX    XXXXXX  XXXXXX   XXXXX   XX  XX  XX  XX\n";
		Sleep(150);
		system("cls");
	}

	randomizeComputerArea(computer, size, 1, 4);
	randomizeComputerArea(computer, size, 3, 2);
	randomizeComputerArea(computer, size, 2, 3);
	randomizeComputerArea(computer, size, 4, 1);
	while (true) {
		printPlayerBoard(player, size);
		SetConsoleTextAttribute(h, 14);
		cout << endl << "\t\t\t\t\t\t\tPress Button <SPACE> to Hit Enemy's Ships!\n";
		cout << endl << "\t\t\t\t\t\t\tYour Score: " << score << endl;
		SetConsoleTextAttribute(h, 11);
		print_attact_CoumputerArea(computer, player, size, compI, compJ, beat, score);
		rand_attactPlayerArea(player, size, beat);
		if (score == 200)
			system("cls");
		checkGame(computer, player, size, CcountHit, PcountHit, score);
	}
}

void main()
{
	SetConsoleTextAttribute(h, 11);
	srand(time(0));
	const int size = 10;
	int player[size][size] = {};
	int computer[size][size] = {};
	int count = 10, countZ = 4, countX = 3, countC = 2, countV = 1;
	int beat = 0;
	menu();
	char key = _getch();
	if (key == '1') {
		system("cls");
		cout << "\n\n\t\t\tXXXXX    XXXX   XXXXXX  XXXXXX  XX      XXXXXX    XXXXX  XX  XX  XX  XXXXX\n";
		cout << "\t\t\tXX  XX  XX  XX    XX      XX    XX      XX       XX      XX  XX  XX  XX  XX\n";
		cout << "\t\t\tXX  XX  XX  XX    XX      XX    XX      XX       XX      XX  XX  XX  XX  XX\n";
		cout << "\t\t\tXXXXX   XX  XX    XX      XX    XX      XXXX      XXXX   XXXXXX  XX  XXXXX\n";
		cout << "\t\t\tXX  XX  XXXXXX    XX      XX    XX      XX           XX  XX  XX  XX  XX\n";
		cout << "\t\t\tXX  XX  XX  XX    XX      XX    XX      XX           XX  XX  XX  XX  XX\n";
		cout << "\t\t\tXXXXX   XX  XX    XX      XX    XXXXXX  XXXXXX   XXXXX   XX  XX  XX  XX\n";
		cout << "\n\n\n\n\t\t\t\t\t\tStart Game";
		cout << "\n\n\t\t\t\t\t\t  -> 1. Manually\n\n";
		cout << "\t\t\t\t\t\t  -> 2. Avtomatic\n";
		key = _getch();
		if (key == '1')
		{
			system("cls");
			makePlayerArea(player, size, key, count, countZ, countX, countC, countV);
			playTime(player, computer, size, count, beat);
		}
		else if (key == '2')
		{
			avtoPlayerArea(player, 10, 1, 4);
			avtoPlayerArea(player, 10, 2, 3);
			avtoPlayerArea(player, 10, 3, 2);
			avtoPlayerArea(player, 10, 4, 1);
			playTime(player, computer, size, count, beat);
		}
		system("pause");
	}
	else if (key == '2') {
		system("cls");
		FILE* file = fopen("RULES.txt", "r");
		char str[5000];
		while (feof(file) == 0)
		{
			Sleep(10);
			fgets(str, 1000, file);
			cout << str;
		}
		cout << endl << endl;
	}
	else if (key == '3')
		exit(0);
}
