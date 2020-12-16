#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        for(long long int i=1;i<=c;i++)
        {
            if(i%a==0 && i%b==0)
                printf("%lld\n",i);

        }
        if(t>0)
            printf("\n");


    }
    return 0;


}
