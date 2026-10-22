# include <iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout << "Put your no . : "; 
    cin >> n ; 
    int i = 1 ; 
    while ( i <= n )
    {
        int j = 1 ;
        while ( j <= n - i )
        {
            cout << " ";
            j = j + 1 ;
        }
        int m = 1;
        j = 1 ;
        while ( j <= i )
        {
            cout << m ; 
            m = m + 1 ; 
            j = j + 1 ;
        }
        int third_num = i - 1 ; 
        while ( third_num )
        {
            cout << third_num ; 
            third_num = third_num - 1 ; 
        }
        cout << "\n";
        i = i + 1 ; 
    }
    return 0 ; 
}