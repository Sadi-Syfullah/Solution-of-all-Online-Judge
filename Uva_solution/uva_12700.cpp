#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,cases=1;
    cin>>n;
    while(n--){
        int match=0,i=0;
        cin>>match;
            char str[11];
            scanf("%s",str);
            int a=0,b=0,t=0,w=0;
            for(i=0;i<match;i++){
                if(str[i]=='A')
                    a++;
                else if(str[i]=='B')
                    b++;
                else if(str[i]=='T')
                    t++;
                else if(str[i]=='W')
                    w++;
            }
            if((b+a==match)&& b!=0)
                printf("Case %d: BANGLAWASH\n",cases);
            else if((w+a==match) && w!=0)
                printf("Case %d: WHITEWASH\n",cases);
            else if(a==match)
                printf("Case %d: ABANDONED\n",cases);
            else if(b>w)
                printf("Case %d: BANGLADESH %d - %d\n",cases,b,w);
            else if(b<w)
                 printf("Case %d: WWW %d - %d\n",cases,w,b);
            else if(b==w)
                printf("Case %d: DRAW %d %d\n",cases,b,t);
            cases++;
    }
    return 0;
}
