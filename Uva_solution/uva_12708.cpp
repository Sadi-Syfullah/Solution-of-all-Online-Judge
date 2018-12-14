#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    long long int x,res=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x%2!=0){
            x--;
        }
        res=x/2;
        printf("%lld\n",res);
    }
    return 0;
}
