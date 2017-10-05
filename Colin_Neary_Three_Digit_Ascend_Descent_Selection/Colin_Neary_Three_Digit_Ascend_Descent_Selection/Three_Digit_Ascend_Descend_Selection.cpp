/*

Colin Neary - 10/4/17 Period-1

Three_Digit_Ascend_Descend_Selection : *

Determining order of digits

*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';

}
void main() {
	int x;
	cout << "Press any positive three digit number";
	cin >> x;
	int a = (x/100) % 10;
	int b = (x / 10) % 10;
	int c = x % 10;
	bool ascending = a!= b && b!= c;
	bool descending = ascending;
	if(a > b)
		ascending = false;
	else
		descending = false;
	if(b > c)
		ascending = false;
	else
		descending = false;
	if(ascending)
		cout << "Ascending \n";
	else if(descending)
		cout << "Descending \n";
	else
		cout << "Neither ";

	pause();
}