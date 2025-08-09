#include <iostream>

//해시 함수
int hashFunction(char ch)
{
	return ch * 2 + 1 / 2 * 0.7;
}

//패턴 찾기 (함수 이용)
char vect[10] = "BTABCQABC";
char patten[4] = "ABC";
int isPatten(int idx)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (patten[i] != vect[idx + i]) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	//패턴 찾기 (함수 이용)
	int result = 0;
	for (size_t i = 0; i < 7; i++)
	{
		result = isPatten(i);
		if (result == 1)
		{
			break;
		}
	}

	if (result == 1)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "노발견";
	}
	//DAT(Direct Adressing Table)
	//- Hash Table


	// 값 자체를 index로 활용해서
	// 사용하겠다.

	int bucket[256] = {};

	char str[7] = "ADBFAD";
	for (size_t i = 0; i < 6; i++)
	{
		bucket[str[i]]++;
	}

	for (size_t i = 0; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			std::cout << char(i) << ":"<<bucket[i] <<"개\n";
		}
	}
	
	int idx = hashFunction('A');
	bucket[idx] += 1;

	//DAT 정렬
	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			for (int j = 0; j < bucket[i]; j++)
			{
				std::cout << (char)i;
			}
		}
	}

	
	

}