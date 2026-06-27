# include <iostream>
using namespace std ;
int main()
{
    int fac , i , n ;
    cout << "Put your number  :  ";
    cin >> n ;
    fac=1 ;
    if (n==0)
    {
    cout << "Factorial of this number is 1 ";
    return 0 ; 
    }
    for(i=1 ; i<=n ; i=i+1)
    {
        fac=fac*i;
    }
    cout << "Factorial of your number is " << fac << "\n" ; 
    return 0 ;
}