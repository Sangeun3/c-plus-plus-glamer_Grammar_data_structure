#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, sum = 0, i = 0;
	cin >> n;      
	int x = n; //15
	while (x != 0) {                  // x = 1
		x = n / 10;                   // 1
		if (x == 0) { (sum += n - round(pow(10, i)) + 1) * (1 + i); } //
		else {
			sum += 9 * round(pow(10, i)) * (1 + i);
			i++; // i = 1
		}
	}
	cout << sum;

	return 0;
}