#include<iostream>
using namespace std;

int main() {
	int n, i, a, max, min;
	cin >> n;
	cin >> a;
	max = a;
	min = a;

	for (i = 1; i < n; i++) {
		cin >> a;
		if (max < a) max = a;
		if (min > a) min = a;
	}
	cout << max - min;
	return 0;
}