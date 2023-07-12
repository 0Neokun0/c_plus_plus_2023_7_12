/*
How function call works
*/
#include <iostream>
using namespace std;

void func2(int &x, int y, int z) // z = 20 y =10 x = alias for result which is 30
{
    x += y + z; 
}

int func1(int a, int b)  // a = 10, b = 20 
{
    int result{}; // result = 10
    result = a + b;
    func2(result, a, b);
    return result;
}

int main()
{
    // Start from below
    int x{10}; // x = 10
    int y{20}; // y = 20
    int z{}; // z = 0
    z = func1(x, y);
    cout << z << endl;

    return 0;
}