#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a, x1, x2;
	cout << "������һ��a��";
	cin >> a;
	x1 = a;
	x2 = 0.5 * (x1 + a / x1);
	if (a > 0) {
		for (; abs(x2 - x1) > 0.00001;) {
			x1 = x2;
			x2 = 0.5 * (x1 + a / x1);
			cout << "1" << endl;
		}
		cout << "a��ƽ����Ϊ��" << x2;
	}
	else if (a == 0) {
		x2 = 0;
		cout << "a��ƽ����Ϊ��" << x2;
	}
	else cout << "�������ɿ�ƽ����";
	return 0;
}