#include <iostream>


char flag, a, b, c;

void input()
{
	std::cin >> a >> b >> c;
}

void process()
{
	if (a == 'A' && b == 'B' && c == 'C')
	{
		flag = 1;
	}
}

void output()
{
	if (flag == 1) { std::cout << "ABC�� ã�Ҵ�"; }
	else { std::cout << "��ã�Ҵ�"; }
}
int main()
{
	input();
	process();
	output();
	
 return 0;
}