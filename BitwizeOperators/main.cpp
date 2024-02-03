#include<iostream>
using namespace std;

void main() {
	int x;
	int y;

	setlocale(LC_ALL, "");
	cout << "Введите первую переменную: "; cin >> x;
	cout << "Введите вторую переменную: "; cin >> y;

	cout << "x = "<<x << "\t" <<"y = "<< y << endl;

	x ^= y;
	y = x ^ y;
	x ^= y;

	cout << "x = "<<x << "\t" <<"y = "<< y << endl;
	
}