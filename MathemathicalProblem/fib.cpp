// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << fib(n) << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int a = 0;
    int b = 1;
    int result = 0;

    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    cout << result << endl;

    return 0;
}