#include <iostream>
using namespace std;

int main() {
    int low, high;
    cin >> low >> high;

    int count = 0;

    for (int i = low; i <= high; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}