//Arrays
#include<iostream>
using namespace std;
#define NWL cout<<endl

void main() {

	setlocale(LC_ALL, "");
	
	//const int n = 5;
	//int arr[n] = { 3,5,8 };
	//arr[1] = 1024; // ��������� � �������� ������� �� ������
	//arr[3] = 3072; // ��������� � �������� ������� �� ������
	//cout << arr[1] << endl; // ��������� � �������� ������� �� ������
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
		cout << "������� �������� �������� " << i+1 << ": ";
		cin >> a[i];
		NWL;
	}
	Max = Min = a[0];
	for (int i = 0; i < N; i++) {
		cout << a[i] << "\t"; // ����� � ������ �������
		if (Max < a[i]) Max = a[i];   // ������� ������������� ��������
		if (Min > a[i]) Min = a[i];   // ������� ������������ ��������
	}
	NWL; NWL;

	for(int i = N-1; i>= 0; i--) {
		cout << a[i] << "\t";   // ����� � �������� �������
		sum += a[i];
	}
	NWL; NWL;

	cout << "����� ���� ��������� �����: " << sum; NWL; NWL;
	cout << "�������������������� ���� ��������� ������� �����: " << (float)sum / N; NWL; NWL;
	cout << "������������ ��������: " << Max << endl; NWL;
	cout << "����������� ��������: " << Min << endl;


	
}