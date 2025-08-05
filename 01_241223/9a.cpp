#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++) {
			
			if (i % j == 0) cnt++;
		}
		cout << cnt << " ";
	}

	return 0;
}