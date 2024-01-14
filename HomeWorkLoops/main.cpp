#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define POW
#define ASCII_TABLE
//#define ASCII_TWO
//#define FIBONACCI_LIMIT
//#define NUMBER_MEMBERS_FIBONACCI
//#define PRIME_NUMBERS

void main() {
	setlocale(LC_ALL, "");
#ifdef POW
	//POW
	int base;
	int pow;
	long long result = 1;


	cout << "POW\n";
	cout << "Input osnovanie of numbers: ";
	cin >> base;
	cout << "Input pow: ";
	cin >> pow;

	for (int i = 0; i < pow; i++) result *= base;
	cout << "The number " << base << " on pow " << pow << " = " << result << endl;
#endif // POW

#ifdef ASCII_TABLE
	setlocale(LC_ALL, "C");
	const int numRows = 30;
	int numCols = 255 / numRows + 1; // Количество столбцов на один больше, чем кол-во полностью заполненных записями
	cout << "ASCII table" << endl;
	int currentValue;
	for (int row = 0; row < numRows; row++) {
		for (int col = 0; col < numCols; col++) {
			currentValue = col * numRows + row;
			if (currentValue <= 255)
			{
				cout << "\t" << currentValue;
				if (currentValue < 30);
				else cout << "\t" << (char)currentValue;

			}
		}
		cout << endl;
	}
#endif // ASCII_TABLE 

#ifdef ASCII_TWO
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C"); //включаем кодировку по умолчанию
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL,"");
	cout << "Конец";

#endif // ASCII_TWO


#ifdef FIBONACCI_LIMIT
	// F(n) = F(n - 1) + F(n - 2)  Fibonacci formula 

	int fn = 0, f0 = 0, f1 = 1, limFibonacci;

	cout << "Input limit number fibonacci sequence greater than two: ";
	cin >> limFibonacci;

	cout << f0 << " " << f1 << " ";
	for (; fn < (limFibonacci - f0);)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		cout << fn << " ";
	}
	cout << endl;
#endif // FIBONACCI_LIMIT

#ifdef NUMBER_MEMBERS_FIBONACCI

	// F(n) = F(n - 1) + F(n - 2)  Fibonacci formula 

	int fn = 0, f0 = 0, f1 = 1, limFibonacci;

	cout << "Input members number fibonacci sequence greater than two: ";
	cin >> limFibonacci;

	cout << f0 << " " << f1 << " ";
	for (int i = 1; i < (limFibonacci - 1); i++)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		cout << fn << " ";
	}
	cout << endl;
#endif // NUMBER_MEMBERS_FIBONACCI

#ifdef PRIME_NUMBERS
	int limPrimeNum, j, nextNum = 1;

	cout << "Input prime numbers sequenc limit: ";
	cin >> limPrimeNum;

	if (limPrimeNum == 0)
	{
		system("cls");
		cout << "Input any non-negative integer other than zero: ";
		cin >> limPrimeNum;
	}
	if (limPrimeNum == 1) cout << "1 ";
	else
	{
		cout << "1 ";
		for (nextNum = 2; nextNum < limPrimeNum; nextNum++)
		{
			for (j = 2; j < nextNum; j++)
			{
				if (nextNum % j);
				else j = nextNum;
				if (j == (nextNum - 1)) cout << nextNum << " ";
			}
		}
	}
#endif // PRIME_NUMBERS
}