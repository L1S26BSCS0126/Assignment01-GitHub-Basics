#include <iostream>
using namespace std;
int main()
{
    int n=50;
    int sum = 0;
    // print sum of first 50 natural numnbers
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout <<"sum: "<< sum;
    return 0;
}