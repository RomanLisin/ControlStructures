//Arrays
#include<iostream>
using namespace std;
#define NWL cout<<endl

void main() {

	setlocale(LC_ALL, "");
	
	//const int n = 5;
	//int arr[n] = { 3,5,8 };
	//arr[1] = 1024; // Обращение к элементу массива на запись
	//arr[3] = 3072; // Обращение к элементу массива на запись
	//cout << arr[1] << endl; // Обращение к элементу массива на чтение
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << "\t";
	//}
	//cout << endl;
	
	const int N=6;
	int a[N];
	int sum = 0;
	int Max;
	int Min;
	
	for (int i = 0; i < N; i++) {
		cout << "Введите значение элемента " << i+1 << ": ";
		cin >> a[i];
		NWL;
	}
	Max = Min = a[0];
	for (int i = 0; i < N; i++) {
		cout << a[i] << "\t"; // вывод в прямом порядке
		if (Max < a[i]) Max = a[i];   // подсчёт максимального элемента
		if (Min > a[i]) Min = a[i];   // подсчёт минимального элемента
	}
	NWL; NWL;

	for(int i = N-1; i>= 0; i--) {
		cout << a[i] << "\t";   // вывод в обратном порядке
		sum += a[i];
	}
	NWL; NWL;

	cout << "Сумма всех элементов равна: " << sum; NWL; NWL;
	cout << "Среднеарифметическое всех элементов массива равно: " << (float)sum / N; NWL; NWL;
	cout << "Максимальное значение: " << Max << endl; NWL;
	cout << "Минимальное значение: " << Min << endl;


	
}