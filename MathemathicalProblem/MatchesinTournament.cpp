#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;

    while (n > 1)
   {
        int matches = n / 2;

        total = total + matches;

        n = (n + 1) / 2;

    }

    cout << total << endl;

    return 0;
}