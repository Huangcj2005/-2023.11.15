#include<iostream>
using namespace std;
int main() {                 //����x������ʽ��ֵ
	float x, y;
	cout << "������x��ֵ��";
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - x * 2;
		cout << "y=" << y;
	}
	else if (x >= 1 && x < 5) {
		y = 1 + 2 / (4 * x);
		cout << "y=" << y;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << "y=" << y;
	}
	else
		cout << "�������x���ڶ�������";
	return 0;
}