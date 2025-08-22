#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

	int avg = (a + b + c + d) / 4;
	if (a > avg)
	{
		std::cout << a << ">" << avg << std::endl;
	}
	else if (a < avg)
	{
		std::cout << a << "<" << avg << std::endl;
	}
	else if (a == avg)
	{
		std::cout << a << "==" << avg << std::endl;
	}


	if (b > avg)
	{
		std::cout << b << ">" << avg << std::endl;
	}
	else if (b < avg)
	{
		std::cout << b << "<" << avg << std::endl;
	}
	else if (b == avg)
	{
		std::cout << b << "==" << avg << std::endl;
	}


	if (c > avg)
	{
		std::cout << c << ">" << avg << std::endl;
	}
	else if (c < avg)
	{
		std::cout << c << "<" << avg << std::endl;
	}
	else if (c == avg)
	{
		std::cout << c << "==" << avg << std::endl;
	}

	if (d > avg)
	{
		std::cout << d << ">" << avg << std::endl;
	}
	else if (d < avg)
	{
		std::cout << d << "<" << avg << std::endl;
	}
	else if (d == avg)
	{
		std::cout << d << "==" << avg << std::endl;
	}

}