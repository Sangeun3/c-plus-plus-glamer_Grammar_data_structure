#include <iostream>



void test(int n) {
	std::cout << "test";
	std::cout << "test";
	std::cout << "test";

	n++;
	std::cout << n;
}
int main()
{
	//SWAP

	//�� ���� ������ ���� ��ȯ�ϴ� �۾�

	int a = 10;
	int b = 5;

	int temp = a;
	a = b;
	b = temp;

	//����ü

	//������ ������ ��
	//Ÿ���� �����߾���?

	//����ü�� �������� ���� Ÿ�Ե��� ���
	//�ϳ��� ���ο� Ÿ���� �����ϴ� ����

	struct ABC
	{
		int num;
		char ch; 
	};

	ABC abc;
	abc.num = 100;
	abc.ch = 'A';

	ABC abc2;
	abc2.num = 100;
	abc2.ch = 'A';

	ABC abc3;
	abc3.num = 100;
	abc3.ch = 'A';

	//�������� ���� ���·� �׷�ȭ�� �� ���
	//Ư����Ȳ���� �ҽ��ڵ带 �����ϰ� ǥ��
	//�ڷᱸ�� �˰��򿡼� ���� ����Ѵ�.
	
	 
	//Counting ���� <¦�� ���� ����>
	int arr[5] = { 1,2,3,4,5 };

	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}

	if (count > 0)
	{
		std::cout << "¦���� �����Ѵ�.";
	}

	else
	{
		std::cout << "¦���� �������� �ʴ´�";
	}
	int n=5;
	//if �ȿ� �Լ� ȣ�� ������ �α�
	if (true)
	{
		test(n);
	}
	else
	{
		test(n);
	}

	//call by value



}