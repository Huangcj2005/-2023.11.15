#include<iostream>
using namespace std;
int main()
{                //���������
	char a;
	int b, c;
	float sum;
	cout << "������һ��������";
	cin >> b;
	cout << "������һ���������";
	cin >> a;
	cout << "������һ��������";
	cin >> c;
	switch (a)
	{
	case '+': {
		sum = b + c;
		cout << "���Ϊ��" << sum;
		break;
	}
	case '-': {
		sum = b - c;
		cout << "���Ϊ��" << sum;
		break;
	}
	case '*': {
		sum = b * c;
		cout << "���Ϊ��" << sum;
		break;
	}
	case '/': {
		if (c != 0) {
			sum = static_cast<float>(b) / static_cast<float>(c);
			cout << "���Ϊ��" << sum;
		}
		else cout << "��������Ϊ0";
		break;
	}
	case '%': {
		if (c != 0) {
			sum = b % c;
			cout << "���Ϊ��" << sum;
		}
		else cout << "��������Ϊ0";
		break;
	}
	default: {
		cout << "��������Ϸ�";
	}
	}
	return 0;
}