#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n,s=0,x,sum=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            s = s+i;
        }
        for(int i=1;i<n;i++)
        {
            scanf("%d",&x);
            sum = sum+x;

        }
        printf("%d\n",s-sum);

    }
    return 0;


}
