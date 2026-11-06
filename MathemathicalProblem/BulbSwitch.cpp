#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> bulbs(n + 1, false);

    for (int i = 1; i <= n; i++)
     {
        for (int j = i; j <= n; j = j + i)
         {
            bulbs[j] = !bulbs[j];
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (bulbs[i])
         {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}