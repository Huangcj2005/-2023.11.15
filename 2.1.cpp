#include<iostream>
using namespace std;
int main() {                 //����һ���ַ������ΪСд��ת��Ϊ��д�����������������ַ���ASCII��ֵ��
	char a;
	cout << "������һ����ĸ��";
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		cout << "���д��ĸΪ��" << static_cast<char>(a - 32);
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "������ĸ��ASCII��Ϊ��" << a + 1;
	}
	return 0;
}