#include<iostream>
using namespace std;
int main() {
	//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո������ַ��������ַ��ĸ���
	char content;
	int letter = 0, kongge = 0, number = 0, qtzf = 0;
	cout << "������һ���ַ���";
	while ((content = getchar()) && (content != '\n')) {
		if ((content >= 'a' && content <= 'z') || (content >= 'A' && content <= 'Z')) {
			letter += 1;
		}
		else if (content >= '0' && content <= '9') {
			number += 1;
		}
		else if (content == ' ') {
			kongge += 1;
		}
		else qtzf += 1;
	}
	cout << "���ֵ�����Ϊ��" << number << endl;
	cout << "��ĸ������Ϊ��" << letter << endl;
	cout << "�ո������Ϊ��" << kongge << endl;
	cout << "�����ַ�������Ϊ��" << qtzf << endl;
	return 0;
}