#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x;
    cin >> x;

    long long rev = 0;
    long long temp = x;

    if (temp < 0) {
        temp = -temp;
    }

    while (temp > 0)
     {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if (x < 0) {
        rev = -rev;
    }

    if (rev > INT_MAX || rev < INT_MIN)
     {
        cout << 0 << endl;
    }
     else
      {
        cout << (int)rev << endl;
    }

    return 0;
}