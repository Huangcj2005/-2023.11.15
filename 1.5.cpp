#include<iostream>
#include<iomanip>
using namespace std;
int main() {                //���϶�ת���϶�
	float h, s;
	cout << "�����뻪�϶ȣ�";
	cin >> h;
	s = (h - 32) / 1.8;
	cout << fixed;
	cout << "��Ӧ�����϶�Ϊ��" << setprecision(2) << s;
	return 0;
}