#include <iostream>
//LV05 ����Լ��� ���� ������ ����
//����Լ� : �ڱ� �ڽ��� ȣ���ϴ� �Լ����ٴ�
//�ڵ� ��Ȱ���ؼ� �Լ� ȣ��
void ABC()
{

}

void test(int x)
{
	/*std::cout << x;
	ABC();*/
	//������ ȣ��Ǵ� �Լ���
	//�����ؾ� �ϴ°� �޼����̴�.
	
	if (x == 3)
	{
		return;
	}
	
	test(x + 1);
	std::cout << x;
}

int arr[5] = { 5,7,1,2,3 };

void arrtest(int x)
{
	if (x == 5)
	{
		return;
	}
	std::cout << arr[x];
	arrtest(x + 1);
}
int main()
{
	test(0);
	std::cout << std::endl;
	arrtest(0);
	return 0;
 }