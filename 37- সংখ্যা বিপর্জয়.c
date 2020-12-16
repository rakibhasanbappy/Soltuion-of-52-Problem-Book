#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        long long int n,x=0;
        scanf("%lld",&n);
        while(n!=0)
        {
            x = x*10;
            x = x+(n%10);
            n = n/10;

        }
        printf("%lld\n",x);


    }
    return 0;


}
