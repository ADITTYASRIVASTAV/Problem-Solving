// #include <iostream>
// using namespace std;

// int trib(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     if (n == 2) return 1;
//     return trib(n - 1) + trib(n - 2) + trib(n - 3);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << trib(n) << endl;

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
    if (n == 2) {
        cout << 1 << endl;
        return 0;
    }

    int a = 0;
    int b = 1;
    int c = 1;
    int result = 0;

    for (int i = 3; i <= n; i++) {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }

    cout << result << endl;

    return 0;
}