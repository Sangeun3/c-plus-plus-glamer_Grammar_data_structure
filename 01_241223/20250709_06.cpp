#include <iostream>

int main()
{
	//ASCII �ڵ�
	//��ǻ�ʹ� ���ڸ� ������ �� ����
	//�޸𸮴� ���ڸ� ���� ����
	//�ƽ�Ű ��ȸ���� �ƽ�Ű ǥ�� ����

	//�ƽ�Ű�ڵ�� 128���� ���ڷ� �����Ǿ� �ִ�

	char ch = 'A';

	int ich = (int)ch;

	char zero = '0';
	zero = 0;

	for (char ch = 'A'; ch <= 'Z'; ch++) {
		std::cout << ch;
	}

	char ch2 = 'a';
	char Ach = ch2 - 32;

	if (ch <= 'A' && ch >= 'Z')
	{

	}
	else if (ch <= 'a' && ch <= 'z')
	{

	}
	//��ҹ��� �ٲٱ�

	//2�� for�� �����ϱ�

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << "Hello";
		}
	}

	return 0;
}