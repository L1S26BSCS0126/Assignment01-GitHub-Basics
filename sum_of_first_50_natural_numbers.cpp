//  Program : Sum of first 50 natural numbers
//  Name : Umber Fatimi
//  Reg No : L1S26BSCS0126
//  Assignemnt : 01 - Getting started with github
#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    int sum = 0;
    // print sum of first 50 natural numnbers
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum: " << sum;
    return 0;
}