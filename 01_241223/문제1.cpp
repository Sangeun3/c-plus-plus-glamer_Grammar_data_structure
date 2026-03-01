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
		int k = i;
		while (k != 0)
		{
			if (arr[k-1].num > arr[k].num)
			{
				int t;
				t = arr[k].num;
				arr[k].num = arr[k-1].num;
				arr[k-1].num = t;

				char temp;
				temp = arr[k].ch;
				arr[k].ch = arr[k-1].ch;
				arr[k-1].ch = temp;
				k--;
				continue;
			}

			if (arr[k].num == arr[k-1].num && arr[k-1].ch > arr[k].ch  )
			{
					char temp;
					temp = arr[k].ch;
					arr[k].ch = arr[k-1].ch;
					arr[k-1].ch = temp;
			}
			k--;
			continue;
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i].num << " " <<  arr[i].ch << "\n";
	}
}