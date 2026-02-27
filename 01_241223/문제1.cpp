#include <iostream>
#include <vector>
#include <algorithm>

struct Set {
	int num;
	char ch;
};

int main()
{
	int n;
	Set arr[100];
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i].num >> arr[i].ch;
	}

	for (int i = 1; i < n; i++)
	{
		int j = i - 1;
		while (j >= 0)
		{
			if (arr[i].num < arr[j].num)
			{
				int t;
				t = arr[i].num;
				arr[i].num = arr[j].num;
				arr[j].num = t;

				char temp;
				temp = arr[i].ch;
				arr[i].ch = arr[j].ch;
				arr[j].ch = temp;
				j--;
				continue;
			}

			if (arr[i].num == arr[j].num && arr[j].ch > arr[i].ch  )
			{
					char temp;
					temp = arr[i].ch;
					arr[i].ch = arr[j].ch;
					arr[j].ch = temp;
					j--;
					continue;
			}
			j--;
			continue;
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i].num << " " <<  arr[i].ch << "\n";
	}
}