#include <iostream>
// �ٷ��� ABC �������� ī�带 ������ �ִ�.
// �� �� 3���� ī�带 ���� �� ��� ������ ����϶�
// �� ���� ī�带 ���� 2�� ������ �ȵȴ�.

char path[5] = "";
int arr[5] = { 5,7,1,2,3 };
int visited[5] = {};

void test(int x)
{
	// ������ ȣ��ǤӴ� �Լ���
	// �����ؾ� �ϴ°� �޼����̴�.
	
	//�����ߴٰ� Ư�� �������� return ���ִ� ���
	/*if (path[0] =='A') 
	{
		return;
	}*/
//	if (x >= 2 && path[x - 2] == path[x - 1])
//		return;

	if (x == 3)
	{
		std::cout << path << std::endl;
		return;
	}
	 
	for (size_t i = 0; i < 4; i++)
	{
		//�ƿ� ������ ���ϴ� ���
		/*if (x == 0 && ('A' + i) == 'A')
		{
			continue;
		}*/
		if (visited[i] == 1)
		{
			continue;
		}
		visited[i] = 1;
		path[x] = 'A' + i;
		test(x + 1);
		path[x] = 0;
		visited[i] = 0;
	}
	
}

int main()
{
	test(0);

	return 0;
}