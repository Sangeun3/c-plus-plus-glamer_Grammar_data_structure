#include <iostream>
#include <string>
//��ȣ �ص��ϱ�
int main()
{
	std::string a[4] = { "key", "door", "open","pass" };
	std::string b;
	std::cin >> b;
	bool isSame = 0;

	for (int i = 0; i < 4; i++)
	{
		if (a[i] == b) {
			isSame = 1;
			std::cout << "��ȣ����";
		}
	}
	if (isSame == 0)
	{
		std::cout << "��ȣƲ��";
	}
}