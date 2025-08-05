#include <iostream>

int main() {
	int arr[4][4] = { {3,4,1,6},
					  {3,5,3,6},
		              {0,0,0,0},
		              {5,4,6,0} };
	int yMax = -1; 
	int yMin = -1; 
	int xMax = -1;
	int xMin = -1;

	int max = -9999999;
	int min = 9999999;

	for (int i = 0; i < 4; i++) {
		std::cin >> arr[2][i];
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (max < arr[y][x]) {
				max = arr[y][x];
				yMax = y;
				xMax = x;
			}
			if (min > arr[y][x]) {
				min = arr[y][x];
				yMin = y;
				xMin = x;
			}
		}
	}

	std::cout << "MAX = " << max << "(" << yMax << "," << xMax << ")\n";
	std::cout << "Min = " << min << "(" << yMin << "," << xMin << ")\n";


}