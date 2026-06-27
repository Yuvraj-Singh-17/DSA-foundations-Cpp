#include <iostream>
using namespace std ; 
int main()
{
    int sum=0 , i , num ;
    cout << "Put your number : ";
    cin >> num ; 
    for (i=1 ; i<=num ; i=i+1)
    {
        sum=sum+i;
    }
    cout << "This is the sum of natural no. till your input is -- " << sum << "\n" ;
    return 0 ; 
}