#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,n,ans,i,speed;

   cin>>test;

    for(int i=1; i<=test; i++){
        cin>>n;
        ans = 0;

        for(int i = 0; i<n; i++){
            scanf("%d",&speed);
            ans = max(ans,speed);
        }

        printf("Case %d: %d\n",i,ans);
    }

    return 0;
}
