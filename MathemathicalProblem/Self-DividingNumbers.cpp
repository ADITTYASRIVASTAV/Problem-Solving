#include <iostream>
using namespace std;

bool isSelfDividing(int n) {
    int temp = n;
    while (temp > 0)
     {
        int digit = temp % 10;
        if (digit == 0) return false;
        if (n % digit != 0) return false;
        temp = temp / 10;
    }
    return true;
}

int main()
 {
    
    int left, right;
    cin >> left >> right;

    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

