#include <iostream>

int main()
{
	//���ڿ� ���ڿ�
	//���ڴ� �� ���ڸ� #���Ѵ�. 'A'
	//���ڿ��� �� ���� �̻��� ���Ѵ�.

	//���ڿ��� ���� ���ڷ� �����Ǿ� �ֱ� ���̤�����
	//char�� �ƴ� char �迭�� ������ ������ ��

	char str[5] = "ABCD"; // A|B|C|D|\0 �� �ڴ� ��
	//"ABCDE"�� �� ���ڱ��� 6�� �迭�� ������ �Ѵ�

	char chs[3] = { 'A','B','C' }; //�ι��� ���� �ȵ�


	//���ڿ��� ���� ���ϱ�
	int len = 0;
	for (int i = 0; i < 5; i++) {
		if (str[i] == '\0') {
			len = i;
		}
	}
	std::cout << "���ڿ��� ���� " << len;
	std::cout << str << std::endl;
	std::cout << &str[0]; // str�� ���� �ǹ�

	std::cout << chs;//���� ��� ���� ���� ������
	//�����Ⱚ�� ȭ�鿡 ����



	int arr[3][3] = {};
	int a = 1;
	//2�� for���� Ȱ��
	for (int y = 0; y < 3; y++) {
		for (int x = 2 - y; x <= 2; x++) {
			arr[y][x] = a;
			a++;
		}
	}

	return 0;
}