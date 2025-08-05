#include <iostream>

int main() {
	//2중 while 문

	int y = 0;
	while (y < 3) {
		int x = 0;
		while (x < 3)
		{
	
			x++;
		}
		
		y++;
	}


	//버블 정렬, 선택 정렬
	int arr2[6] = { 5,3,6,2,1,8 };

	for (size_t y = 0; y < 6; y++)
	{
		for (size_t x = 0; x < 5 - y; x++) {
			if (arr2[x] > arr2[x + 1]) {
				int temp;
				temp = arr2[x];
				arr2[x] = arr2[x + 1];
				arr2[x + 1] = temp;
			}
		}
	}

	int arr[7] = { 7,6,3,5,4,2,1 };

	for (int y = 0; y < 7; y++) {  // y < 6
		for (int x = 0; x < 6 - y; x++) {
			if (arr[x] > arr[x + 1]) {
				int temp = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = temp;
			}
		}
	}

	//선택 정렬
	for (int y = 0; y < 6; y++) {
		for (int x = y + 1; x < 6; x++) {
			if (arr[y] < arr[x])
			{
				int temp = arr[y];
				arr[y] = arr[x];
				arr[x] = temp;
			}
		}
	}



	//여러문장 저장하기

	char vect[2][5] = { "ABCD", "BBQ" };

	/*std::cin >> vect[0];
	std::cin >> vect[1];*/
	std::cout << vect[0]; // = &vect[0][0]
	std::cout << vect[1]; // = &vect[1][0]

	return 0;
}