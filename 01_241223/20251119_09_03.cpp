#include <iostream>

int main()
{
	struct robot
	{
		int a;
		int b;
		std::string t;
	};

	robot robert;
	
	std::cin >> robert.a >> robert.b >> robert.t;
	robot* p = &robert;

	std::cout << "robert a+b: " << p->a + p->b << "\n";
	std::cout << "robert t: " << p->t;
}