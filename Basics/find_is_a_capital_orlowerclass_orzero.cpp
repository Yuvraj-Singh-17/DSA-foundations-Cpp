# include <iostream>
using namespace std ;
int main ()
{
    char b ; 
    cout << "Put your alphabet : "; 
    cin >> b ; 
    if (  b >= 'a' && b <= 'z' )
    cout << "It is lowerclass character \n"; 
    else if (b >= 'A' && b <= 'Z' )
    cout << "It is a Upper class character \n" ; 
    else if ( b == 0 )
    cout << "It is zero \n";
    else 
    cout <<  "Input is integer please put a alphabet or O \n";
    return 0 ; 
}