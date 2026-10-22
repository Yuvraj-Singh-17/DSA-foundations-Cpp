#include <iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout << " Put your no . :";
    cin >> n ; 
    int i = 1 ; 
    char a = 'A';
    while (i <= n)
    { 
        int j = 1 ;
        while ( j <= n )
        {
            cout << a << " " ; 
            j = j + 1 ; 
        }
        cout << "\n";
        a = a + 1 ; 
        i = i + 1 ;
    }
    return 0 ;
}