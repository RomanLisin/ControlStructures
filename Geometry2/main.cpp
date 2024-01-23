#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define RHOMBUS
//#define PLUSMINUSSQUARE
//#define CHESS
//#define CHESS_EXTAND 
//#define CHESS_EXTAND_TWO_FOR_PARITY
//#difine CHESS_EXTAND_TWO_FOR_MULTIPLICITY
//#define TRIANGLE_PASCAL
//#define TRIANGLE_PASCAL_FACTORIAL
#define TRIANGLE_PASCAL_3_BEST

#define INPUT cout << "Enter figure size: "; cin >> n;
#define INPUT_DESK cout << "Enter board size: "; cin >> n;

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
	setlocale(LC_ALL, "C"); // default encoding
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
	cout << endl << "To continue enter any key....";

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
				for (int j = 0; j < n; j++)
					cout << (q % 2 == k % 2 ? "* " : "  ");
			}
			cout << endl;

		}
	}
	cout << endl << "To continue enter any key....";
	char key = _getch();

#endif // CHESS_EXTAND

#ifdef CHESS_EXTAND_TWO_FOR_PARITY
	INPUT_DESK
		cout << endl;
	int r = 1;

	for (int i = 1; i <= n * n; i++) // go to the down
	{
		for (int j = 1; j <= n * n; j++) // go to the right
		{
			cout << (r % 2 == j % 2 ? "* " : "  ");
			if (!(j % n)) r++; // if the square ends on the right
			r++;
		}
		if (!(i % n)) r++; // if the square ends on the down
		cout << endl;
	}
#endif // CHESS_EXTAND_TWO_FOR_PARITY

#ifdef CHESS_EXTAND_TWO_FOR_MULTIPLICITY
	INPUT_DESK
		cout << endl;
	/*
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << (((i/ n) % 2 == (j / n) % 2) ? "* " : "  ");
		}
		cout << endl;
	}
	*/

	for (int i = 0; i < n * n; i++) {
		for (int j = 0; j < n * n; j++)

			cout << (((i / n + j / n) % 2) ? "  " : "* ");

		cout << endl;
	}
#endif // CHESS_EXTAND_TWO_FOR_MULTIPLICITY



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
	do {
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
			for (int m = 1; m <= i; m++)Cm *= m;
			for (int km = 1; km <= (i - j); km++)Ck_m *= km;
			C = Cm / (Ck * Ck_m);
			while (C != 0) {
				C /= 10;
				Cwide++; // Calculate the digits number
			}
			std::cout << Cm / (Ck * Ck_m);
			for (int s = 0; s <= ((wide - Cwide)); s++)std::cout << " ";
		}
		std::cout << endl;
	}
#endif // TRIANGLE_PASCAL



#ifdef TRIANGLE_PASCAL_FACTORIAL
	INPUT

		int wide = 0;
	long long f0 = 1, f1 = 1, f2 = 1;

	for (int i = 0; i <= n; ++i) {
		f0 = f1;
		f1 = f2;
		f2 = f0 + f1;
	}

	// optimizaation: calculate the width advance 
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
			// calculate the number of digits in C
			while (C != 0) {
				C /= 10;
				Cwide++;
			}
			// print spaces after C
			for (int s = 0; s <= (wide - Cwide); s++) {
				cout << " ";
			}
		}
		cout << endl;
	}
#endif // TRIANGLE_PASCAL_FACTORIAL


#ifdef TRIANLE_PASCAL_3_BEST
	INPUT
	//  Use coefficients from binomial distribution.

	for (int i = 0; i < n; i++) {
		int coef = 1; //  coefficient for calculating binomial coefficients.
		for (int j = 0; j <= i; j++) {
			cout << coef << " "; 
			// Updating the coefficient for the next element in the row.
			coef = coef * (i - j) / (j + 1);
		}
		cout << endl;
	}
#endif // TRIANLE_PASCAL_3_BEST


}