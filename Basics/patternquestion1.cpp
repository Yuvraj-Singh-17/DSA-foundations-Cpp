# include <iostream>
using namespace std ; 
int main ()
{
    int  n,  i=1  ; 
    cout << "Pattern is of nxn , Put n : "; 
    cin >> n ; 
    while ( i <= n )
    {
        int j = n ; 
        while (j > 0)
        {   
            cout << j << " " ;
            j = j - 1  ; 
        }
        cout << endl ; 
        i = i + 1 ;
    }
    return 0 ; 
}