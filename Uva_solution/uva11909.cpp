#include <bits/stdc++.h>
using namespace std;

#define pi 3.14159265358979323846264338
int main()
{
    int l,w,h,theta;
    while(scanf("%d %d %d %d",&l,&w,&h,&theta)==4){
        double neg=l*tan(theta*pi/180.0);
        double ans;
        if(neg > h){
            ans=0.5*h*h*l*w/neg;// (double)(h)
        }else{
            ans=l*w*((h)-(neg*0.5));
        }
        printf("%.3lf mL\n", ans);
    }
    return 0;
}
