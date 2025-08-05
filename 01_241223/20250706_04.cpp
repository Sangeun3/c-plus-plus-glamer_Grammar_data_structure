#include <iostream>

int main()
{
//배열은 변수 여러 개를 한 번에 만들 수 있다

	int arr[4];

	arr[0] = 1;
	arr[1] = 2;

	std::cout << arr[0];

	arr[1] = 10;
	std::cout << arr[1];
	int sum = 0;
	int arrr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		std::cout << arrr[i];
		sum += arrr[i];
	}
	std::cout << sum;

	int vext[7] = {}; //모든 값이 0으로 초기화

	//0번부터 7번 인덱스까지 존재한다? 6번
	vext[0] = 7;
	vext[1] = 7;
	vext[2] = 7;
	vext[3] = 7;
	vext[4] = 7;
	vext[5] = 7;
	vext[6] = 7; 

	for (int i = 0; i < 7; i++) {
		vext[i] = 1;
	}

	
	return 0;
}