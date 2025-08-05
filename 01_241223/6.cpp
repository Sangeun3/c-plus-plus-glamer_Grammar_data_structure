#include<iostream>
using namespace std;

int main() {

	char a[51];
	int res = 0, cnt = 0;
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			res = res * 10 + (a[i] - '0');
		}
	}
	cout << res << endl;
	for (int i = 1; i <= res; i++) {
		if (res % i == 0) cnt++;
	}
	cout << cnt;
	return 0;
}