#include <iostream>

class Test {
public: 
	int a;
	int b;

	Test()
		:a(0)
		,b(0)
	
	{
		/*a = 0;
		b = 0;*/
	}

	Test(int n1, int n2)
		:a(n1)
		, b(n2)
	{

	}

	~Test()
	{
		a = 0;
		b = 0;
	}
};

int main() {

	Test t;
	Test t2(10,20);
}