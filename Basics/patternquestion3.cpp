# include <iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout << "Put your no . : " ; 
    cin >> n ;
    int i = 1 ; 
    
    while ( i <= n )
    {
        int j = n-i ;
        while ( j < n )
        {
            cout << " * " ; 
            j = j + 1 ; 
        }
        cout << "\n";
        i = i + 1 ; 
    }
    return 0 ; 
}