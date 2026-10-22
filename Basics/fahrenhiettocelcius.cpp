# include <iostream>
using namespace std ; 
int main ()
{
    // C = (F-32)*(5/9)
    double F , C ; 
    cout << "PUT FAHRENHEIT : "; 
    cin >> F ; 
    C = (F * 5 -32*5)/9  ; 
    cout << C << endl ; 
    return 0 ; 
}