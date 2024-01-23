//ControlStructures
#include<iostream>
using namespace std;

//Comments are code that is ignored by the compiler.
//There are:
// Line comment
/* and
* Block comment
*/

void main() 
{
	setlocale(LC_ALL, "");

	cout << "Hello controls" << endl;
	int temperature;
	cout << "Enter air temperature: "; cin >> temperature;
	/*if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else //в противном случае (иначе)
	{
		cout << "На улице холодно" << endl;
	
	}*/

	if (temperature > 60)
	{
		cout << "You are on another planet" << endl;

	}
	else if (temperature > 35)
	{
		cout << "Very hot" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Hot" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Warm" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Chilly" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Cold" << endl;
	}
	else if (temperature > -20)
	{
		cout << "Freezing" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Severe frost" << endl;
	}
	else
	{
		cout << "Fucking frost" << endl;
	}
}