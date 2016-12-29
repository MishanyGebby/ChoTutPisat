#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    if (y==0)
        return x;
    return gcd(y,x%y);
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
        swap(n,m);
    --n;
    --m;
    cout<<n+m-gcd(n,m);
    return 0;
}