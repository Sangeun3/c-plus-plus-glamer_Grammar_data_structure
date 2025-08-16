#include <iostream>

int arr[4] = { 1,4,7,3, };
void print(int idx, int max)
{
	std::cout << arr[idx] << " ";
	if (idx == max)
	{
		return;
	}
	print(idx + 1, max);
	std::cout << arr[idx] << " ";
}
int main()
{
	int idx;
	std::cin >> idx;
	int i = 0;
	print(i, idx);
}