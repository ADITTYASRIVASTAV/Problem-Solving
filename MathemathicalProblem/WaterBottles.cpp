#include <iostream>
using namespace std;

int main() {
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;

    int totalDrunk = 0;
    int empty = 0;
    int full = numBottles;


    while (full > 0) 
    {

        totalDrunk += full;
        empty += full;
        full = 0;

        if (empty >= numExchange)
         {
            full = empty / numExchange;
            empty = empty % numExchange;
        }

    }
    

    cout << totalDrunk << endl;

    return 0;
}