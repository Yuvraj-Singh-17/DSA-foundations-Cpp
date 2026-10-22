#include <iostream>
using namespace std ; 
int main()
{
    int  N  ; 
    cout << "Put your no : ";
    cin >> N ; 
    int factorial = 1 ; 
    int I = 1 ; 
    while ( I <= N )
    { 
        factorial = factorial * I ;
        I = I + 1 ; 
    }
    cout << factorial << "\n"; 
    return 0 ; 
}   