#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int x,y,T,i,sum,Case=1;
    scanf("%d",&T);
    if(T>0)
    {
        while(T--)
        {
            scanf("%d%d",&x,&y);
            sum=0;
            for(i=x; i<=y; i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            printf("Case %d: %d\n",Case++,sum);
        }
    }
    return 0;
}
