# include <iostream>
using namespace std ; 
int main ()
{
    int N ; 
    cin >> N ; 
    int i = 1 ;
    int j = 1 ;
    while ( i <= N )
    {
        
        while ( j <= N*i )
        {
            cout << j << " " ; 
            j = j + 1 ; 
        }
        cout << "\n" ;
        i = i + 1 ; 
        
    }
    return 0 ; 
}