#include<stdio.h>

int main()
{
    int n,i,t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}

