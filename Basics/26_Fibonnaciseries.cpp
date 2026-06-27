# include <iostream>
using namespace std ; 
int main()
{
    int Last=0 , Pre=1 , Current=1 , Pos , i ; 
    cout << "Put your required no. position : " ;
    cin >> Pos ; 
    if (Pos==1)
    cout << "0" ;
    else if (Pos==2 || Pos==3)
    cout << "The number on your given position is 1\n " ;
    else
    {
        for (i=1 ; i<Pos-2 ; i=i+1 )
        {
           
          Last = Pre ;
          Pre = Current ; 
          Current = Pre + Last ;
        }
     cout << "The number on your given position is " << Current << "\n"; 
     return 0 ; 
    }
}