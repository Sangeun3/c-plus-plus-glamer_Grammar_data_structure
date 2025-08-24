#include <iostream>
//몇 번째 행운
//문제 설명
//
//재귀 함수를 이용해 문자 조합 트리를 생성합니다.
//
//트리 규칙 : 각 레벨마다 가지(Branch)가 4개이고, 알파벳 'A', 'B', 'C', 'D'로 분기합니다.
//
//루트(레벨 0)에서 시작하여 레벨 3까지 내려가면 길이가 3인 문자열이 만들어집니다.
//
//예 : "AAA", "AAB", "AAC", …
//
//사전 순서대로(= DFS 순서대로) 생성되는 문자열 중, 입력받은 문자열이 몇 번째로 생성되는지를 출력하세요.
//
//입력 형식
//
//한 줄 : 길이 3 문자열(문자 집합 : 'A', 'B', 'C', 'D')
//
//출력 형식

//한 줄 : 입력 문자열이 생성되는 순서(1부터 시작) + "번째"

//입력 예제
//AAD
//
//출력 예제
//4번째

char ABCD[4] = { 'A','B','C','D' };
char path[4] = {};
int i = 0;

void func(int level, char* inputPath)
{
	
	
	if (level == 3)
	{
		i++;
		if (strcmp(path, inputPath) == 0)
		{
			std::cout << i << "번째";
			return;
		}
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		path[level] = ABCD[i];
		func(level + 1, inputPath);
		path[level] = ABCD[i];
	}

}

int main()
{
	char inputPath[4];
	std::cin >> inputPath;
	func(0, inputPath);

}