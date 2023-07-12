/*
Recursion - Factorial 
*/
#include <iostream>
using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) {
    if (n == 1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    cout << factorial(3) << endl;
    cout << factorial(30) << endl;
    cout << factorial(40) << endl;

    return 0;
}