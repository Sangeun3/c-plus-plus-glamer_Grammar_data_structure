#include <iostream>
//  해결 전략: used 배열 만들기
// 데이터를 담은 vect[6] 배열 외에, int used[6] = { 0 };
// 이라는 배열을 하나 더 만듭니다. 
// (0은 미사용, 1은 사용됨)
int main()
{
	int a[6];
	for (int i = 0; i < 6; i++)
	{
		std::cin >> a[i];
	}

	char str[6];
	for (int i = 0; i < 6; i++)
	{
		std::cin >> str[i];
	}

	int min = -99;
	int mink = 0;
	bool used[6] = { 0 };
	int max = 99;
	int maxk;
	for (int i = 0; i < 6; i++)
	{
		if (str[i] == 'm')
		{
			min = 99;
			for (int k = 0; k < 6; k++)
			{
				if (min > a[k] && used[k] == 0) {
					min = a[k]; 
					mink = k;
				}
			}
			used[mink] = 1;
			std::cout << a[mink];
		}
		if (str[i] == 'x')
		{
			max = -99;
			for (int k = 0; k < 6; k++)
			{
				if (max < a[k] && used[k] == 0) {
					max = a[k];
					maxk = k;
				}
			}
			used[maxk] = 1;
			std::cout << a[maxk];
		}
	}
}