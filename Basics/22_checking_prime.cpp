#include <iostream>
using namespace std;
int main()
{
    int num , i ;
    cout << "Put your number : ";
    cin >> num ; 
    if (num==0 || num==1)
    cout << " Not prime\n ";
    else if (num==2)
    cout << "Prime\n "; 
    else
    {
      for ( i=2 ; i<num ; i++)
      {
        if (num%i==0)
        {
         cout << "Not prime\n" ;
         return 0 ;
        }
      }
     cout << "Prime\n";
     return 0 ;
    }
}