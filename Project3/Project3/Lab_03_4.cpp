// Lab_03_4.cpp
// ГалаганВадим
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ( (y<= 0 && x<=0) && (pow(x,2)+pow(y,2)<=pow(R,2)) ||  )
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}