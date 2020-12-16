#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int m=0,n;
        scanf("%lld",&n);
        for(long long int i=1;i<n;i++)
        {
            if(n%i==0)
                m = m+i;
        }

        if(m==n)
            printf("YES, %d is a perfect number!\n",n);
        else
            printf("NO, %d is not a perfect number!\n",n);



    }
    return 0;


}
