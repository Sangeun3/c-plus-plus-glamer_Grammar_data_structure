#include <iostream>

int main()
{
	//if���� ���� ��

	int x;
	std::cin >> x;

	// x>=3
	// x<=6
	if (x >= 3)
	{
		if (x <= 6)
		{

		}
	}

	if (x >= 3 && x <= 6)
	{
		std::cout << "���Դϴ�.";
	}

	if (x >= 3 || x == 6)
	{
		std::cout << "���Դϴ�.";
	}

	//���� ���� ���� �� ���� ��ȣ�� ����.
	if ((x <= 3 && x <= 6) || (x >= 7 && x <= 12))
	{
			std::cout << "���Դϴ�.";
	}

	int max = 0;
	std::cin >> max;

	//for�� �����ϱ�
	//�ʱⰪ ; ���ǽ� ; ������
	for (int i = 0; i < max; i++)
	{
		if (i == 5)
		{
			std::cout << "5��°\n";
		}
		std::cout << "�ȳ��ϼ���\n";
	}

	return 0;
}