#include <iostream>
//�� ��° ���
//���� ����
//
//��� �Լ��� �̿��� ���� ���� Ʈ���� �����մϴ�.
//
//Ʈ�� ��Ģ : �� �������� ����(Branch)�� 4���̰�, ���ĺ� 'A', 'B', 'C', 'D'�� �б��մϴ�.
//
//��Ʈ(���� 0)���� �����Ͽ� ���� 3���� �������� ���̰� 3�� ���ڿ��� ��������ϴ�.
//
//�� : "AAA", "AAB", "AAC", ��
//
//���� �������(= DFS �������) �����Ǵ� ���ڿ� ��, �Է¹��� ���ڿ��� �� ��°�� �����Ǵ����� ����ϼ���.
//
//�Է� ����
//
//�� �� : ���� 3 ���ڿ�(���� ���� : 'A', 'B', 'C', 'D')
//
//��� ����

//�� �� : �Է� ���ڿ��� �����Ǵ� ����(1���� ����) + "��°"

//�Է� ����
//AAD
//
//��� ����
//4��°

char ABCD[4] = { 'A','B','C','D' };
char path[4] = {};
int i = 0;

void func(int level, char* inputPath)
{
	
	
	if (level == 3)
	{
		i++;
		if (strcmp(path, inputPath) == 0)
		{
			std::cout << i << "��°";
			return;
		}
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		path[level] = ABCD[i];
		func(level + 1, inputPath);
		path[level] = ABCD[i];
	}

}

int main()
{
	char inputPath[4];
	std::cin >> inputPath;
	func(0, inputPath);

}