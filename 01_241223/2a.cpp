#include <iostream>
using namespace std;

int main() {
	int A, B, sum = 0;
	cin >> A >> B; 
	for (int i = A; i <= B; i++) {
		if (i != A) {
			cout << '+' << i;
		}
		else {
			cout << i;
		}
		sum += i;
		
	}
	cout << " = ";
	cout << sum;
}