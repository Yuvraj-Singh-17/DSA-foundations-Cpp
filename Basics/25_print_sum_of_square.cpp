# include <iostream>
using namespace std ; 
int main()
{
    int n , i , t=0 ;
    cout << "Put your no : "; 
    cin >> n ;
    for (i=1 ; i<=n ; i=i+1)
    {
        t=t+i*i;
    }
    cout << "sum of sqaure till your number " <<  t  << "\n" ; 
    return 0 ; 
}