#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;


    int temp = n;
    int count = 0;
    while (temp > 0)
     {
        count++;
        temp = temp / 10;
    }


    temp = n;
    int sum = 0;

    while (temp > 0)
     {
        int digit = temp % 10;

        int power = 1;

        for (int i = 0; i < count; i++)
     {
            power = power * digit;

        }
        sum = sum + power;
        temp = temp / 10;
    }


    if (sum == n)
     {
        cout << "true" << endl;
    }

     else
      {
        cout << "false" << endl;
    }

    return 0;
}