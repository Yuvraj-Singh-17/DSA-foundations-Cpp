# include <iostream>
using namespace std ; 
int main()
{
    int n , q , i , z ;
    cout << "Enter the No. : ";
    cin >> n ; 
    cout << " Enter the Power : " ;
    cin >> z ; 
    q = n ;
    for (i=1 ; i<z ; i=i+1 )
    {
        n=n*q;
    }
    cout << "Power of this number is  " << n << "\n" ; 
    return  0 ;
}