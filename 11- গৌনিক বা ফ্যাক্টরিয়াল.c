#include<stdio.h>
int main()
{

    int t,n;

    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int s = 1;
        scanf("%d",&n);
        while(n!=0)
        {
            s = s*n;
            n--;
        }
        printf("%lld\n",s);
    }

    return 0;

}
