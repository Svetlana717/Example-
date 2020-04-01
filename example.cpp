#include "TXLib.h"
#include <iostream>
using namespace std;

void toTwenty(int *itNumber);

int main()
{
    int seventeen = 17;
    int *number = &seventeen;

    std::cout << *number << "\n";

    toTwenty(number);

    if (number)
        std::cout << *number << "\n";
    else
        std::cout << " number is null";

    return 0;
}

void toTwenty(int *itNumber)
{
    *itNumber = 20;
}
