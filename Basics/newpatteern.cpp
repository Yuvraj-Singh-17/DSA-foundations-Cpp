# include <iostream> 
using namespace std ; 
int main ()
{
    int n ; 
    cout << " put your no . : " ; 
    cin >> n ; 
    int i = 1 ; 
    while ( i <= n )
    {
        int start = n - i ;
        while ( start )
        {
            cout << " " ;
            start = start - 1 ;
        }
        
        int j = 1 ;
        while ( j <= i )
        {
            cout << "*" ;
            j = j + 1 ;
        }
        cout << "\n";
        i = i + 1;
    }  
    return 0 ;
}