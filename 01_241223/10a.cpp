#include <iostream>
using namespace std;
int num[101];
int sum[101];
int digit_sum(int x);

int main() {
	int n;
	
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) { // 0
		cin >> num[i]; // num[0] = 125
		sum[i] = digit_sum(num[i]); // 
		if (max < sum[i]) max = sum[i];
	}
	cout << max;

}

int digit_sum(int x) { //157
	int sum = 0;
	int b = 10000000;
	for (int i = 0; i <= 7; i++) {  // 0 1 2 3 4 5 6 7
		if (i != 0) b % 10;
		
		int a = x / b;
		if (a != 0) sum += a;
	}
		return sum;
}