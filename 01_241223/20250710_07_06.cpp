#include <iostream>

int main()
{
	int n;
	for (int i = 0; i < 4; i++) {
		std::cin >> n;
		if (n < 20)
		{
			std::cout << "�� ū ���� �Է��ϼ���";
		}
		else if (n > 20)
		{
			std::cout << "�� ���� ���� �Է��ϼ���";
		}
		else {
			std::cout << "�����Դϴ�.";
		}
	}
	return 0;
}