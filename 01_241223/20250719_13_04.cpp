#include <iostream>
void KFC(int* AtoZ, int* atoz) {
	char arr[11];
	std::cin >> arr;
	for (int i = 0; i < 10; i++) {
		if ('A' <= arr[i] && arr[i] <= 'Z') {
			(*AtoZ)++;
		}
		else if ('a' <= arr[i] && arr[i] <= 'z') {
			(*atoz)++;
		}
	}
}
int main() {
	int AtoZ_Counting = 0;
	int atoz_Counting = 0;
	KFC(&AtoZ_Counting, &atoz_Counting);
	std::cout << "�빮��" << AtoZ_Counting << "��\n";
	std::cout << "�ҹ���" << atoz_Counting << "��";

}