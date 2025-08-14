#include <iostream>

int main()
{
	struct Data
	{
		int x;
		int y;
		int z;
	};

	Data a;
	Data b;

	std::cin >> a.x >> a.y >> a.z;
	std::cin >> b.x >> b.y >> b.z;

	std::cout << a.x + b.x << std::endl;
	std::cout << a.y + b.y << std::endl;
	std::cout << a.z + b.z << std::endl;
}