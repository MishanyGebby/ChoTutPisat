#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n ;
    int x,y,l ;
    for(int i=0;i<n;i++)
    {
        cin>>y ;
        if(i==0)
        {
            l=y ;
            x=1 ;
        }
        else if(l!=y)
        {
            cout<<x<<" "<<l<<" " ;
            x=1 ;
            l=y ;
        }
        else
        x++ ;

    }
    cout<<x<<" "<<l ;
}