#include <iostream>

long long multMod(long long A, long long B, long long C)
{
	long long ret = 1;
	A %= C;
	while (B > 0)
	{
		if (B % 2 == 1)
		{
			ret = (A * ret) % C;
		}
		A = (A * A) % C;
		B = B / 2;
		
	}
	return ret;
}


int main()
{
	
	long long A, B, C;

	std::cin >> A >> B >> C;

	std::cout << multMod(A,B,C);
}