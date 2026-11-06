#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum = evenSum + i;
        } else {
            oddSum = oddSum + i;
        }
    }

    cout << "Even Sum = " << evenSum << endl;
    cout << "Odd Sum = " << oddSum << endl;

    return 0;
}