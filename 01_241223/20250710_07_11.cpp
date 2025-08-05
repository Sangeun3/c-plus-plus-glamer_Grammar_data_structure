#include <iostream>
int input;
int arr[3][3];

void process() {
	
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			arr[y][x] = input;
			input++;
		}
	}
}
void output() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			std::cout << arr[y][x] << " ";
		}
		std::cout << "\n";
	}
}
int main()
{
	
	std::cin >> input;
	process();
	output();
	
	return 0;
}