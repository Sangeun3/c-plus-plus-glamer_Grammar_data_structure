#include <iostream>
using namespace std;

int main() {
    char num[15];
    cin >> num;  // e.g., "0011223123456"

    // Convert the first two characters (year part) to an integer
    int year = (num[0] - '0') * 10 + (num[1] - '0');

    // We'll store the calculated age here:
    int age = 0;
    char gender;

    // Check the 7th digit (index 7)
    // (Use else if so we don't satisfy multiple conditions.)
    if (num[7] == '1') {
        // 1900 + year, male
        age = 120 - year;  // (Equivalent to 100 - year + 19 + 1)
        gender = 'M';
    }
    else if (num[7] == '2') {
        // 1900 + year, female
        age = 120 - year;
        gender = 'W';      // Or 'F', depending on your preference
    }
    else if (num[7] == '3') {
        // 2000 + year, male
        age = 20 - year;   // (Equivalent to 19 - year + 1)
        gender = 'M';
    }
    else if (num[7] == '4') {
        // 2000 + year, female
        age = 20 - year;
        gender = 'W';
    }

    // Print results
    // e.g., "25 M" or "25 W"
    cout << age << " " << gender << endl;

    return 0;
}
