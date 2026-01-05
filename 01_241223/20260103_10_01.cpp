#include <iostream>

struct BBQ
{
	int a;
	int b;
};
int main()
{
	BBQ* bbq = new BBQ;
	std::cin >> bbq->a >> bbq->b;
	std::cout << (bbq->a) + 5 << " " << (bbq->b) + 5;
	delete bbq;
	return 0;
}