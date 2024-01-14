#include<iostream>
#include<conio.h>
using namespace std;
/*
while - цикл с предусловием;
do...while - цикл с постусловием;
for - цикл на заданное число итераций;
*/

#define Escape 27

//#define WHIL_1
//#define WHIL_2
#define DO_WHILE
//#define FOR
//#define FACTORIAL
//#define MULTIPLUCATION_TABLE
//#define PYTHAGORAS_TABLE

void main()
{
	setlocale(LC_ALL, "");

#if defined WHILE_1


	int i =0; //счЄтчик  цикла
	int n;   // количество итераций
	cout << "¬ведите количество итераций: "; cin >> n;

	while (i < n)
	{
		cout << ++i << "Hello" << endl;
		//i++;
	}
#endif // WHILE_1

#if defined WHIL_2

	int n;
	cout << "¬ведите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;

#endif // WHILE_2

#ifdef DO_WHILE

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);

#endif // DO_WHILE

#ifdef FOR
	int n;
	cout << "¬ведите количество итераций: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR

#ifdef FACTORIAL
	int n;
	int factorial = 1;
	std::cout << "¬ведите число дл€ вычислени€ факториала: "; std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	std::cout << endl;
	std::cout << n << "!" << " = " << factorial << endl;
#endif // FACTORIAL
	
#ifdef MULTIPLUCATION_TABLE
				int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << "*" << j << " = " << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLUCATION_TABLE

#ifndef PYTHAGORAS_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE


}

