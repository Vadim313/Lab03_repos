// Lab_03_3.cpp
// ������� �����
// ����������� ������ No 3.3
// ������������, ������ �������� �������.
// ������ 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// ������������ � ����� ����
	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = (pow(R,2) + R * x) / (-R+8);
		else
			if (-R < x && x <= R)
				y = -sqrt(pow(R,2)+pow(x,2));
			else
				if (R < x && x <= 5)
					y = (2*x - 2*R)/(5-R);
				else
					y = 3;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}