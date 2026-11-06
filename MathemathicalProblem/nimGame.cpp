#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 4 != 0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}