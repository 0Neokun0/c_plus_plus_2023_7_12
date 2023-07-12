/*
Dereferencing 
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //Start from below
    int score{100};
    int *score_ptr {&score};

    cout << *score_ptr << endl;

    *score_ptr = 200;

    cout << *score_ptr << endl;
    cout << score << endl;

    string name {"Frank"};
    string *string_ptr{&name};

    cout << "Location of the name : " << &name << endl;
    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;

    return 0;
}