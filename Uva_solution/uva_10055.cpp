#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,out=0;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a>=b)
            out=a-b;
        else
            out=b-a;

        cout<<out<<endl;
    }
    return 0;
}
