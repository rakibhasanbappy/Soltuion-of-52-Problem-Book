#include<stdio.h>
int main()
{
    long long int a,b,s,t,t1,m,n;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld %lld",&a,&b);
        m = a;
        n = b;
        while(b!=0)
        {
            t1 = b;
            b = a%b;
            a = t1;
        }
        s = (m*n)/a;
        printf("LCM = %lld\n",s);
    }
    return 0;


}
