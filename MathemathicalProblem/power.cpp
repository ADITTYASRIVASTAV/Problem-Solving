#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;

    double result = 1.0;
    long long power = n;

    if (power < 0) {
        power = -power;
    }

    for (long long i = 0; i < power; i++) {
        result = result * x;
    }

    if (n < 0) {
        result = (1.0 * result *result) / result;
    }

    cout << result << endl;

    return 0;
}






// #include <iostream>
// using namespace std;

// int main() {
//     double x;
//     int n;
//     cin >> x >> n;

//     long long N = n;
//     if (N < 0) {
//         x = 1.0 / x;
//         N = -N;
//     }

//     double result = 1.0;
//     double base = x;

//     while (N > 0) {
//         if (N % 2 == 1) {
//             result = result * base;
//         }
//         base = base * base;
//         N = N / 2;
//     }

//     cout << result << endl;

//     return 0;
// }