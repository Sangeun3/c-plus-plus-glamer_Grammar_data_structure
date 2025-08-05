#include <iostream>
using namespace std;

int main() {
int main() {
    long long N;
    cin >> N;

    long long sum = 0;
    long long start = 1;  // ���� ���� ���۰� (1, 10, 100, ...)
    int digit = 1;        // ���� �ڸ��� (1�ڸ�, 2�ڸ�, ...)

    while (start <= N) {
        long long end = start * 10 - 1; // ��: start=1 -> end=9, start=10 -> end=99
        if (end > N) end = N;          // N���� �Ѿ�� N���� ����

        // ���� �ȿ� ��� �ִ� ���� ����
        long long countRange = end - start + 1;
        // �ش� ������ ��� ���� 'digit' �ڸ����̹Ƿ�
        sum += countRange * digit;

        // ���� �������� �Ѿ��
        digit++;
        start *= 10;
    }

    cout << sum << "\n";
    return 0;
}
