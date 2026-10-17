#include <iostream>
using namespace std ;
int main()
{
    int i , n  ; 
    cout << "This programm print odd numbers till your choosen no. \n" << "Enter your no. : " ;
    cin >> n ;
    if (n==0)
    cout << "Put a valid no. " ;
    for (int i=1 ; i<=n ; i=i+2 )
    cout << i << "\n" ;
    return 0 ;

}