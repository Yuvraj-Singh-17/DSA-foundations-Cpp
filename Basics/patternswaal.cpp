# include <iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout << " Put your no . : "; 
    cin >> n ; 
    int i = 1 ; 
    char ch = 'D' ; 
    while ( i <= n )
    {
        int j = 1 ; 
        while ( j <= i )
        {
            cout << char (ch + j - 1) << " " ;
            j = j + 1 ; 
        }
        cout << endl ; 
        i = i + 1 ; 
        ch = ch - 1 ; 
    }
    return 0 ; 
}