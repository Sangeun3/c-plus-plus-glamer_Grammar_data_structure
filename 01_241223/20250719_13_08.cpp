#include <iostream>

struct profile {
	char name[7];
	int age;
	int weight;
};


int main() {
	profile int1, int2;
	std::cin >> int1.name;
	std::cin >> int1.age;
	std::cin >> int1.weight;
	std::cin >> int2.name;
	std::cin >> int2.age;
	std::cin >> int2.weight;

	std::cout << int1.name << '&' << int2.name << std::endl;
	std::cout << "Æò±Õ" << (int1.age + int2.age) / 2 << "¼¼" << std::endl;
	std::cout << "Æò±Õ" << (int1.weight + int2.weight) / 2 << "KG";
}