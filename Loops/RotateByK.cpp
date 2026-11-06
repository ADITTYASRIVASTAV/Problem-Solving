#include <iostream>
#include <cmath>
using namespace std;

int RotateKtimes(int num, int k)
{
    int N = k;

    if (k < 0)
    {
        N = -N;
    }

    if(k==0)
    {
        return num;
    }

    int NofDigit = 0;

    int temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        NofDigit++;
    }

    if (NofDigit == 0)
    {
        return 0;
    }

    //  N is greater then  nofdigit; 
    if(k>NofDigit)
    {
       N = N % NofDigit;
    }
  

    if (N == 0)
    {
        return num;
    }

    // Left rotation
    if (k > 0)
    {
        int power = pow(10, NofDigit - N);

        int Lquotient = num / power;
        int Lremainder = num % power;

        int leftrotate = Lremainder * pow(10, N) + Lquotient;

        return leftrotate;
    }

    // Right rotation
    if (k < 0)
    {
        int power = pow(10, N);

        int Rquotient = num / power;
        int Rremainder = num % power;

        int rightrotate = Rremainder * pow(10, NofDigit - N) + Rquotient;

        return rightrotate;
    }

    return num;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    int K;
    cout << "Enter the value of K: ";
    cin >> K;

    int result = RotateKtimes(number, K);

    cout << "Rotated number = " << result << endl;

    return 0;
}