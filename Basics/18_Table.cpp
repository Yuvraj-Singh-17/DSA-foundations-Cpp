# include <iostream>
using namespace std; 

int main ()
{
    int n , i ; 
    cout << "Table of : " ;
    cin >> n ;
    for (i = 1 ; i <=10 ; i=i+1)
    cout << n << " X " << i << " = " << n*i << "\n" ;
}