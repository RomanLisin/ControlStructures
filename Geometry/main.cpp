#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main() {

	int Vertical, Horizontal;
	Horizontal = 5;
	Vertical = 5;

	/*
	cout << "Input horizonal number: ";
	cin >> Horizontal;
	cout << "Input vertical number: ";
	cin >> Vertical;
	*/

	cout << "\n0)" << endl;
	for (int i = 0; i < Horizontal; i++)
	{
		for (int j = 0; j < Vertical; j++) cout << "*";
		cout << "\n";
	}

	cout << "\n1)" << endl;
	for (int i = 0; i < Horizontal; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "\n2)" << endl;
	for (int i = 0; i < Vertical; i++)
	{
		for (int j = 0; j < (Horizontal - i); j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "\n3)" << endl;
	for (int i = 0; i < Vertical; i++)
	{
		for (int j = 0; j < Horizontal; j++)
		{
			if (j < i) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}

	cout << "\n4)" << endl;
	for (int i = 0; i < Vertical; i++)
	{
		for (int j = 0; j < Horizontal; j++)
		{
			if ((j + 1) < (Horizontal - i)) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}

	cout << "\n5)" << endl;
	for (int i = 0; i < (Vertical * 2); i++)
	{
		for (int j = 0; j < (Horizontal * 2); j++)
		{
			if (j == (Horizontal - i - 1) && j < Horizontal) cout << "/";
			else if (j == (i - Vertical) && i >= Vertical) cout << "\\";
			else if (j == (Horizontal + i) && j >= Horizontal) cout << "\\";
			else if (j == (Horizontal * 2 - i + Vertical - 1) && i >= Vertical) cout << "/";
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}

	cout << "\n6)" << endl;
	Horizontal = 6;
	bool flag = 1;
	for (int i = 0; i < Vertical; i++)
	{
		flag = !flag;
		for (int j = 0; j < Horizontal; j++)
		{
			flag = !flag;
			if (flag)  cout << "-";
			else cout << "+";
		}
		cout << "\n";
	}
}