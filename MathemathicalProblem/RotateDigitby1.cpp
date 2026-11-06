// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int count = 0;
//     int temp = n;

//     while (temp > 0)
//      {
//         count++;
//         temp = temp / 10;
//     }

//     int power = 1;
//     for (int i = 1; i < count; i++)
//      {
//         power = power * 10;
//     }

//     int first = n / power;

//     int remaining = n % power;

//     int result = remaining * 10 + first;

//     cout << result << endl;

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    int temp = n;
    int count = 0;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    r = r % count;

    int power = 1;
    for (int i = 0; i < count - r; i++) {
        power = power * 10;
    }

    int rightPart = n % power;

    int leftPower = 1;
    for (int i = 0; i < r; i++) {
        leftPower = leftPower * 10;
    }

    int leftPart = n / power;

    int result = rightPart * leftPower + leftPart;

    cout << result << endl;

    return 0;
}