#include <iostream>

void isExist(char* a, char* b, char* c) {
	
	bool isExist = false;
	
	for (int i = 0; i < 10; i++) {
		if (a[i] == 'M' || b[i] == 'M' || c[i] == 'M') {
			isExist = true;
			break;
		}
	}
	if (isExist){ std::cout << "M�� �����մϴ�"; }
	else { std::cout << "M�� �������� �ʽ��ϴ�"; }
	
}
int main() {
	
	char a[10];
	char b[10];
	char c[10];

	std::cin >> a >> b >> c;
	isExist(a, b, c);
	return 0;
}