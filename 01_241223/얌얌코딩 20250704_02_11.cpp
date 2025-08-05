#include <iostream>

int main() {
	int num;
	std::cin >> num;
	if (num > 0) {
		std::cout << "###\n###\n###";
	}
	else if(num < 0){
		std::cout << "$$$\n$$$";
	}
	else {}
}