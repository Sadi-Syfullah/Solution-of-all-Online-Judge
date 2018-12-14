#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,a,count=0;
    while(scanf("%lld",&a)==1)

    {
        count++;
        if(a<=0)
            break;
        for(i=1; ; i++)
        {


            j= pow(2,i);
            if(a ==1)
            {
               printf("Case %lld: 0\n",count);
               break;
            }
            else if(j>=a)
            {
                printf("Case %lld: %lld\n",count,i);
                break;
            }
        }
    }
return 0;
}
