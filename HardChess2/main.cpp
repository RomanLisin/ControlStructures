﻿//HardChess2
#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	int n; // определяет размер как одной клетки, так и всей доски
	cout << "Введите размер доски: "; cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			//cout << (i/n % 2 == j/n % 2 ? "+ ": "  ");   // выражение снизу аналагично этому, делением на n замедляем 
			cout << (i / n & 1 ^ j / n & 1 ? "* " : "  "); // чередование , лог.умножением на 1 вычисляем чётность, если 0 - чётное, 1-нечёт, лог.XOR сравниваем, если совпадают 0, нет 1
		}
		cout << endl;
	}
	/*
	--------------------------------
		~ NOT
		| OR
		& AND
		^ XOR
		<< SHL (Shift left)
		>> SHR (Shift right)
	--------------------------------
		~=  NOT Assign
		|=   OR Assign
		&=  AND Assign
		^=  XOR Assign
		<<= 
		>>=
	--------------------------------
	*/
}