#include <iostream>

void kfc(int* a, int* b) {
	*a = 100;
	*b = 200;
}

void ArrayTest(int* pArr) {
	std::cout << *pArr;
	std::cout << *(pArr + 1 /* * int size */);
	std::cout << *(pArr + 2 /* * int size */);
	std::cout << *(pArr + 3 /* * int size */);
	std::cout << *(pArr + 4 /* * int size */);

	std::cout << pArr[0];
	std::cout << pArr[1];
	std::cout << pArr[2];
	std::cout << pArr[3];
	std::cout << pArr[4];

	//�����ͺ������� *�� �� �ش� �ּҰ���
	//���� ��ġ�� �̵��� �� �� �ְ�, ����
	//�迭ó�� ��뵵 �����ϴ�.
}

int main() {

	//�����ͷ� �� �ְ� �ޱ�
	// --> return ���� ���� �� �δ� ��ó�� ���δ�.

	int h = 0;
	int k = 0;
	kfc(&h, &k);

	int arr[5] = { 1,2,3,4,5 }; 

	ArrayTest(arr);

	int max = 0;
	int maxIdx = -1; // �ε����� �������x���ʱ�ȭ 
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxIdx = i;
		}
	}

	int map[3][3] = {};
	max = 0;
	int dy = -1;
	int dx = -1;
	for (int y = 0; y < 3; y++)
	{ 
		for (int x = 0; x < 3; x++)
		{
			if (map[y][x] > max) {
				max = map[y][x];
				dy = y;
				dx = x;
			}
		}

	}
}