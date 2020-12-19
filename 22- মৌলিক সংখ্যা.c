#include<stdio.h>
#include<math.h>

int ara[100000];

void sieve()
{
    int i,j;
    for(i=2;i<=100000;i++)
    {
        ara[i] = 1;
    }
    for(i=2;i<=sqrt(100000);i++)
    {
        if(ara[i]==1)
        {
            for(j=2;i*j<=100000;j++)
            {
                ara[i*j] = 0;
            }
        }
    }


}

int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int a,b,c=0;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(i<2)
                continue;
            else if(i==2)
                c++;
            else if(ara[i]==1)
                c++;
        }
        printf("%d\n",c);

    }
    return 0;
}
