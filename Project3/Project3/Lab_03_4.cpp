// Lab_03_4.cpp
// ������������
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 2
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if ( (y<= 0 && x<=0) && (pow(x,2)+pow(y,2)<=pow(R,2)) ||  )
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}