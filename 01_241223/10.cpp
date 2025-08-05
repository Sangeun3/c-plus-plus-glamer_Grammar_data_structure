#include <iostream>
using namespace std;

int digit_sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    int maxSum = -1;  // �ڸ��� ���� �ִ밪�� ������ ����(�ʱⰪ -1)
    int answer = -1;  // �ڸ��� ���� �ִ��� ���� �ڿ����� ������ ����(�ʱⰪ -1)

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        int ds = digit_sum(num); // num�� �ڸ��� ��

        // �ڸ��� ���� �� ũ�ٸ� ����
        if (ds > maxSum) {
            maxSum = ds;
            answer = num;
        }
        // �ڸ��� ���� ���ٸ� �� ū ���ڸ� ����
        else if (ds == maxSum && num > answer) {
            answer = num;
        }
    }

    cout << answer << endl;  // "�ڸ��� ���� �ִ�"�� �ڿ��� ���
    return 0;
}
