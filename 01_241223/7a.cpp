#include <iostream>
using namespace std;

int main() {
	char a[101];
	char b[101];
	int j = 0;
	cin >> a;

	//1. 101���� �����̸� �ѱ�� ����ܾ��̸� ����
	//2. �ƽ�Ű�ڵ�� �ҹ��� �����

	for (int i = 0; i < 101; i++) {
		if (a[i] != '\0') {
			b[j] = a[i];
			j++;
		}
	}
	b[j] = '\0';

	for (int i = 0; i <= j; i++) {
		if ('A' < b[i] && b[i] < 'Z') {
			b[i] = b[i] - 'a';
		}
	}
	cout << b;
}