#include <iostream>

int g = 200;

void BBQ()
{
	std::cout << "BBQ";
	std::cout << "BBQ";
	std::cout << "BBQ";
	g = 300;

	//n= 200;/
	// ���� ������ �ܺ��Լ������� ����� �� ����.
}
int main()
{
	//���� t Ȱ���ϱ�

	//3���� -> 7������ ���� 
	int arr[5] = {};
	int num = 27;

	for (int i = 0; i < 5; i++) {
		arr[i] = num;
		num += 2;
	}

	//Ŭ���̾�Ʈ ������ ���� �ڵ�

	//char ������ ü��
	int n = 100;
	char ch = 'A'; //���� ����ǥ �� ������ �ڵ�� �ν��Ѵ�

	char str[4] = {'A', 'B', 'C', 'D'};

	//�Լ�

	// �ҽ��ڵ��� ���� ���� �Լ���� �Ѵ�.
	BBQ();
	BBQ();


	//���� ���� ���� ����

}