#include <iostream>
using namespace std;
int main()
{
    int a , n , i ;
    cin >> a ;
    if (a%2==0)
    n=a;
    else
    n=a-1;
    for (i=2 ; i<=n ; i=i+2)
    {
        cout << i << " " ;
    }
    return 0;
}