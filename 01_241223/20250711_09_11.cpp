#include <iostream>
struct Person {
	int age;
	int height;
};

Person a;
Person b;

void Input() {

	std::cin >> a.age >> a.height >> b.age >> b.height;

}

void Output() {
	std::cout << (a.age + b.age) / 2 << " ";
	std::cout << (a.height + b.height) / 2;
}

int main() {
	
	Input();
	Output();


	return 0;
}