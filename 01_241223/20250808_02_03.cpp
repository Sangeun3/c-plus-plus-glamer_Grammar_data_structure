#include <iostream>
int ReturnOffset(int idx, int Target, int* arr, int *offset)
{
	for (int i = idx; i < 8; i++)
	{
		if (arr[i] == Target) {
			break;
		}
		else {
			(*offset)++;
		}
	}
	return *offset;
}
int main()
{
	int arr[8] = { 5,9,4,6,1,5,8,9 };
	int idx, Target;
	std::cin >> idx >> Target;
	int offset = 0;
	 

	std::cout << ReturnOffset(idx, Target, arr, &offset);

	return 0;
}