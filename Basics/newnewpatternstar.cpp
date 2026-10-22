# include <iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout << " Put your no . : ";
    cin >> n ; 
    int i = 1 ; 
   while ( i <= n )
   {
        int j = 1 ;
        while ( j <= i - 1 )
        {
            cout << " " ; 
            j = j + 1 ;
        }

        int star = n - i + 1 ;
        while ( star )
        {
            cout << "*";
            star = star - 1 ;
        }
        cout << "\n" ;
        i = i + 1 ;
    }   
    return 0 ;
}