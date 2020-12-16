#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,n;
        scanf("%lld%lld%lld",&a,&b,&c);
        for(long long int i=a;i<=b;i++)
        {
            if(i%c==0)
            {
                n=i;
                break;
            }
        }
        for(long long int i=n;i<=b;i+=c)
        {
            printf("%lld\n",i);
        }
        printf("\n");


    }
    return 0;


}
