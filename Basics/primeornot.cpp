# include <iostream>
using namespace std ; 

int main ()
{
    int n ; 
    cout << "Put your no . : " ; 
    cin >> n ; 
    int i = 2 ; 
    // its for n equal to zero or negative
    if ( n == 0 || n < 0 )
    {
        cout << "Not a prime no. "; 
        return 0 ; 
    }

    while ( i < n ) 
    {
        if ( n % i == 0 )
        {
           cout << "Not a prime no . \n" ; 
           return 0 ; 
        }
        i = i + 1 ; 
    }

    cout << "This is a PRIME NO . \n"; 
    return 0 ; 
}
