// #include <iostream>
// using namespace std;

// int main() {
//     int a, d, n;
//     cin >> a >> d >> n;

//     int sum = 0;
//     int term = a;

//     for (int i = 0; i < n; i++) {
//         sum = sum + term;
//         term = term + d;
//     }

//     cout << sum << endl;

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    long long a, d, n;
    cin >> a >> d >> n;

    long long sum = n * (2 * a + (n - 1) * d) / 2;

    cout << sum << endl;

    return 0;
}