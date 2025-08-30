#include <iostream>
// 다량의 ABC 세종류의 카드를 가지고 있다.
// 이 중 3장의 카드를 뽑을 때 모든 조합을 출력하라
// 단 같은 카드를 연속 2장 뽑으면 안된다.

char path[5] = "";
int arr[5] = { 5,7,1,2,3 };
int visited[5] = {};

void test(int x)
{
	// 무한정 호출되ㅣ는 함수를
	// 방지해야 하는게 급선무이다.
	
	//진입했다가 특정 구간에서 return 해주는 경우
	/*if (path[0] =='A') 
	{
		return;
	}*/
//	if (x >= 2 && path[x - 2] == path[x - 1])
//		return;

	if (x == 3)
	{
		std::cout << path << std::endl;
		return;
	}
	 
	for (size_t i = 0; i < 4; i++)
	{
		//아예 진입을 안하는 경우
		/*if (x == 0 && ('A' + i) == 'A')
		{
			continue;
		}*/
		if (visited[i] == 1)
		{
			continue;
		}
		visited[i] = 1;
		path[x] = 'A' + i;
		test(x + 1);
		path[x] = 0;
		visited[i] = 0;
	}
	
}

int main()
{
	test(0);

	return 0;
}