#include<stdio.h>


long long int fact(int n)
{
    long long int p=1;
    for(long long int i=n;i>0;i--)
    {
        p=p*i;

    }
    return p;

}

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {


        long long int n;
        double sum=0.0;
        scanf("%lld",&n);
        for(long long int i=1;i<=n;i++)
        {

            double s = ((double)i)/fact(i);
            sum = sum +s;


        }
        printf("%.4lf\n",sum);


    }

}
