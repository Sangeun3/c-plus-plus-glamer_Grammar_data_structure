#include <iostream>
using namespace std;

int cnt[50002];

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {  // 1
		
		for (int j = i; j <= n; j = i + j) { // 1 2 3 4 5 6 7 8
			cnt[j]++;
		}
		cout << cnt[i] << " ";
	}

	// cnt  0 | 0 0 0 0 0 0 0 0
	// cnt  0 | 1 2 3 4 5 6 7 8
}