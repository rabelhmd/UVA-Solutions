#include<stdio.h>
#include<math.h>

int main()
{
     int a,b,i,root,count;
     while(scanf("%d %d",&a,&b)==2)
     {
         if(a==0 && b==0)
            break;
            count=0;
         for(i=a; i<=b; i++)
         {
             root=sqrt(i);
             if(root*root==i)
                {
                    count++;
                }
         }
         printf("%d\n",count);
     }
     return 0;
}
