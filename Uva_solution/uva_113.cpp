#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,p, res=0;
    while(scanf("%lf%lf", &n, &p)==2)
    {
        res=pow(p,(1/n));
        printf("%.0lf\n", res);
    }
    return 0;
}
