#include<iostream>
using namespace std;
int main() {                  //���������ε������ߣ����ܳ������жϸ��������Ƿ�Ϊ����������
	int a, b, c, C;
	cout << "�����������ε����߱߳���";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		C = a + b + c;
		cout << "�������ε��ܳ�Ϊ��" << C;
		if (a == b || a == c || b == c) {
			cout << "�Ҹ�������Ϊ����������";
		}
	}
	else cout << "��������������޷����������";
	return 0;
}