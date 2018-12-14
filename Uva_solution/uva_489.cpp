#include<bits/stdc++.h>
#define MAX 200
int main()
{
    int round,i,j,k,len1,len2,error,correct;
    char ch[MAX], des[MAX];
    while(scanf("%d",&round)==1)
    {
        if(round==-1)
        {
            break;
        }
        scanf("%s",&ch);
        getchar();
        scanf("%s",&des);
        //printf("%s %s\n",ch,des);
        len1=strlen(ch);
        len2=strlen(des);
        error=0;
        correct=0;
        for(i=0; i<len2; i++)
        {
             int tag=0;
            for(j=0; j<len1; j++)
            {
                if(ch[j]==des[i])
                {
                      correct++;
                      tag=1;
                      ch[j]=1;
                }
            }
            if(tag==0)
            {
                error++;
            }
            if(error==7 || correct==len1)
            {
                break;
            }
        }
        printf("Round %d\n",round);
        if(error==7 )
        {

            printf("You lose.\n");
        }
        else if(correct==len1)
        {
            printf("You win.\n");
        }
        else{

            printf("You chickened out.\n");
        }
    }

}

