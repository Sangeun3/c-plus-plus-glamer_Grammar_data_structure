#include <iostream>

void FindABC(char* a, char* b, int* A, int* B, int* C) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'A') {
			(*A)++;
		}
		else if (a[i] == 'B') {
			(*B)++;
		}
		else if (a[i] == 'C') {
			(*C)++;
		}
	}

	for (int i = 0; b[i] != '\0'; i++) {
		if (b[i] == 'A') {
			(*A)++;
		}
		else if (b[i] == 'B') {
			(*B)++;
		}
		else if (b[i] == 'C') {
			(*C)++;
		}
	}


}

int main() {

	char a[256];
	char b[256];
	//int alen;
	//int blen;
	int A = 0;
	int B = 0;
	int C = 0;

	std::cin >> a;
	std::cin >> b;
	

	FindABC(a, b, &A, &B, &C);
	
	std::cout << "A:" << A << std::endl;
	std::cout << "B:" << B << std::endl;
	std::cout << "C:" << C << std::endl;

	return 0;
}