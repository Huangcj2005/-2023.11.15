#include<iostream>
using namespace std;
int max(int a, int b, int c) {
	c = a > b ? a : b;
	return(c);
}
int main() {
	int a, b, c, gongbei;
	int gongyue = 0;
	cout << "����������������";
	cin >> a >> b;
	c = max(a, b);
	for (int i = c; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			gongyue = i;
		}
		if (gongyue != 0) {
			break;
		}
	}
	gongbei = a * b / gongyue;
	cout << "���Լ��Ϊ��" << gongyue << endl;
	cout << "��С������Ϊ��" << gongbei;
	return 0;
}