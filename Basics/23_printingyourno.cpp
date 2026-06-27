# include <iostream>
using namespace std ; 
int main()
{
    int n,i,t; 
    cout << "Your first no. of printing : " ;
    cin >> n ; 
    cout << "Your last no. of printing : " ;
    cin >> i ; 
    for (t=n ; t<=i ; t=t+1 )
    {
        cout << t << "  "; 
    }
    cout << "\n" ; 
    return 0 ; 
}