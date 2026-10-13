/*
Program: Sum of the First 50 Natural Numbers
Name: Minahil Yasir
Registration number: L1f25bscs0612
*/
#include <iostream>
using namespace std;

int main() 
{
    int sum = 0;

    for (int i = 1; i <= 50; i++)
    {
        sum += i;
    }

    cout << "Sum of first 50 natural numbers: "<< sum << endl;

    return 0;
}
