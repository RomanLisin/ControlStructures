#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define RHOMBUS
//#define PLUSMINUSSQUARE
//#define CHESS
//#define CHESS_EXTAND 
#define TRIANGLE_PASCAL
//#define TRIANGLE_PASCAL_2

#define INPUT cout << "Введите размер фигуры: "; cin >> n;
#define INPUT_DESK cout << "Введите размер доски: "; cin >> n;

long long factorial(int n) {
	if (n == 0 || n == 1) return 1;
	long long result = 1;
	for (int i = 2; i <= n; ++i) {
		result *= i;
	}
	return result;
}

void main() {
	setlocale(LC_ALL, "");

	int n;

#ifdef SQUARE
	INPUT
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++) cout << "* ";
		cout << endl;
	}

#endif // SQUARE

#ifdef TRIANGLE1
	INPUT
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE1

#ifdef TRIANGLE2
	INPUT
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}

#endif // TRIANGLE2

#ifdef TRIANGLE3
	INPUT
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE3

#ifdef TRIANGLE4
	INPUT
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE4

#ifdef RHOMBUS
	INPUT
	for (int i = 0; i < n; i++) {
		for (int j = i; j <= n; j++) cout << (j == n ? "/" : " ");
		for (int j = 0; j <= 2 * i; j++) cout << (j == 2 * i ? "\\" : " ");
		cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i; j++) cout << (j == i ? "\\" : " ");
		for (int j = 2 * i; j <= 2 * n; j++)cout << (j == 2 * n ? "/" : " ");
		cout << endl;
	}
#endif // RHOMBUS

#ifdef PLUSMINUSSQUARE
	INPUT
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUSMINUSSQUARE

#ifdef CHESS

	INPUT_DESK
	n += 1;
	setlocale(LC_ALL, "C"); // кодировка по умолчанию defolt
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++) {
			if (i == 0 && j == 0)cout << (char)218;
			else if (i == 0)  cout << (j != n ? string(2, (char)196) : string(1, (char)191));
			else if (j != 0 && j != n && i != n) cout << (i % 2 == j % 2 ? string(2, (char)219) : "  "); // 219 - long , 223 - short
			else if (i == n && j == 0) cout << (char)192;
			else if (i == n) cout << (j != n ? string(2, (char)196) : string(1, (char)217));
			else cout << (char)179;
		}
		cout << endl;
	}
	setlocale(LC_ALL, "");
	cout << endl << "Введите любую клавишу для продолжения....";

	char key = _getch();

#endif // CHESS

#ifdef CHESS_EXTAND
	INPUT_DESK
	cout << endl;

	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int q = 0; q < n; q++)
			{
				for (int j = 0; j < n; j++) cout << (q % 2 == k % 2 ? "* " : "  ");
			}
			cout << endl;

		}
	}
	cout << endl << "Для продолжения введите любую клавишу....";
	char key = _getch();

#endif // CHESS_EXTAND

#ifdef TRIANGLE_PASCAL
	INPUT
	long long Ck = 1;
	long long Cm = 1;
	long long Ck_m = 1;
	long long C = 1;
	int Cwide;
	int wide = 0;
	int f0 = 1;
	int f1 = 1;
	int f2 = 1;

	for (int i = 0; i <= n; i++) {
		f0 = f1;
		f1 = f2;
		f2 = f0 + f1;
	}
	do{
		f1 /= 10;
		wide++;
	} while (f1 != 0);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)std::cout << " ";
		for (int j = 0; j <= i; j++)
		{
			Ck = 1;
			Cm = 1;
			Ck_m = 1;
			C = 1;
			Cwide = 0;
			for (int k = 1; k <= j; k++)Ck *= k;
			for (int m = 1; m <= i; m++)Cm*= m;
			for (int km = 1; km <= (i - j); km++)Ck_m *= km;
			C= Cm / (Ck * Ck_m);
			while (C != 0) {
				C /= 10;
				Cwide++;
			}
			std::cout << Cm / (Ck * Ck_m);
			for (int s = 0; s <= ((wide - Cwide)); s++)std::cout << " ";
		}	
		std::cout << endl;
	}
#endif // TRIANGLE_PASCAL

	

#ifdef TRIANGLE_PASCAL_2
	INPUT

		int wide = 0;
	long long f0 = 1, f1 = 1, f2 = 1;

	for (int i = 0; i <= n; ++i) {
		f0 = f1;
		f1 = f2;
		f2 = f0 + f1;
	}

	// Оптимизация: вычисляем wide заранее, используя log10
	while (f1 != 0) {
		f1 /= 10;
		wide++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			long long C = factorial(i) / (factorial(j) * factorial(i - j));
			cout << C;
			int Cwide = 0;
			// Вычисляем количество цифр в C
			while (C != 0) {
				C /= 10;
				Cwide++;
			}
			// Выводим пробелы после C
			for (int s = 0; s <= (wide - Cwide); s++) {
				cout << " ";
			}
		}
		cout << endl;
	}
#endif // TRIANGLE_PASCAL_2

}