#include<iostream>
#include<conio.h>
using namespace std;

void main() {

	char key;
	cout << R"(The following keys are used to control the shooter: 

	forward	 - w
	back	 - s
	left	 - a
	right	 - d
	jump	 - space
	fire	 - enter
	exit	 - esc

	Let's go!!!

)";

	do
	{
		key = _getch();
		if (key == 'w') cout << "\tforward\n";
		else if (key == 's') cout << "\tback\n";
		else if (key == 'a') cout << "\tleft\n";
		else if (key == 'd') cout << "\tright\n";
		else if ((int)key == 32) cout << "\tjump\n";
		else if ((int)key == 13) cout << "\tfire\n";


	} while ((int)key != 27); // 27 - Ecscape
	system("cls");
	
}
