#include<stdio.h>
int main()
{

    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("Case %d:",i+1);
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
            {
                printf(" ");
                printf("%d",j);
            }
        }
        printf("\n");

    }
    return 0;


}
