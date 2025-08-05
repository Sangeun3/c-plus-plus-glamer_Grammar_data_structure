#include <iostream>

int sum(int a, int b) {

	return a + b;

}

void test()
{
	return;
	std::cout << "Gee"; //실행되지 않음
}


int main() {

	//return
	int num = sum(3, 5);
	

	//2차원 배열의 연습 - 숫자 채우기
	int arr[3][3];
	num = 1;
	
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			arr[y][x] = num;
			num++;
		}

	}

	num = 1;

	for (int x = 2; x >= 0; x--) {
		for (int y = 0; y < 3; y++)
		{
			arr[y][x] = num;
			num++;
			
		}
	}

	for (int y = 0; y < 3; y++) {
	
		for (int x = 0; x < 3; x++)
		{
			std::cout << arr[y][x];

		}
	}
	

	//글자 바꿔서 출력하기
	int arr2[3][3] =
	{ 0, 2, 0,
	  1, 0, 1,
	  1, 1, 1 };

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++) {
			if (arr2[y][x] == 0) {
				std::cout << "□ ";
			}
			else if (arr2[y][x] == 1) {
				std::cout << "■ ";
			}
			else if (arr2[y][x] == 2) {
				std::cout << "* ";
			}
		}
		std::cout << "\n";
	}

	return 0;
 }