#include <iostream>
#include <cmath>
using namespace std;
void main(){//������������ ��������� ����������� �����, ����� ����� ����� +-1
	const float pi = 3.1415926;//��������� t ��-��� ������
	int x = 1;
	double t;
	t = (asin(16/(pi*pi)*x)-pi/8)/(pi/4);
	cout << "Answer: " << t << endl;
}