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

	//포인터변수에는 *을 찍어서 해당 주소값의
	//변수 위치로 이동도 할 수 있고, 또한
	//배열처럼 사용도 가능하다.
}

int main() {

	//포인터로 값 주고 받기
	// --> return 값을 여러 개 두는 것처럼 보인다.

	int h = 0;
	int k = 0;
	kfc(&h, &k);

	int arr[5] = { 1,2,3,4,5 }; 

	ArrayTest(arr);

	int max = 0;
	int maxIdx = -1; // 인덱스는 사용하지x값초기화 
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