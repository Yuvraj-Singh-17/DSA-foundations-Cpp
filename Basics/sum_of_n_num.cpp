# include<iostream>
using namespace std ; 
int main ()
{
    int sum = 0 , i = 1 , n ;
    cout << "Put your no. : ";
    cin >> n ; 

    while ( i <= n )
    {
        sum = sum + i ; 
        i = i + 1 ; 
    }

    cout << sum << "\n"; 
    return 0 ; 
}