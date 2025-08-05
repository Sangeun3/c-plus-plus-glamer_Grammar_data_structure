#include<iostream>
using namespace std;

int main() {
	int N, sum = 1;
	bool 약수;

	cin >> N;
	cout << "1 + ";

	for (int k = 2; k < N; k++) {
		약수 = 1;
		for (int i = 3; i < N; i++) {
			if (k % i == 0) {
				약수 = 0;
				break;
			}
		}
		if (약수 == 1) {
			cout << k << " + ";
			sum += k;
		}
	}
	cout << " = " << sum;
	return 0;
}