#include<iostream>
using namespace std;
int main() {                    //��Բ׶���
	const double PI = 3.14;
	double r, h, V;
	cout << "������Բ׶�ײ��İ뾶��";
	cin >> r;
	cout << "������Բ׶�ĸߣ�";
	cin >> h;
	V = PI * r * r * h * 1.0 / 3;
	cout << "Բ׶�����Ϊ��" << V;
	return 0;
}