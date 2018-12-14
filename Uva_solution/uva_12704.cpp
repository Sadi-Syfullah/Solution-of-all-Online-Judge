#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--){
        float x=0,y=0,r,mn=0,mx=0;
        scanf("%f %f %f",&x,&y,&r);
        double dis=sqrt(x*x+y*y);
        mn=r-dis;
        mx=r+dis;
        printf("%.2f %.2f\n",mn,mx);
    }
    return 0;
}
