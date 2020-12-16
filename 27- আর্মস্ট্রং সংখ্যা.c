#include<stdio.h>
int main()
{

    int t;
    int x,x1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        int m = x;
        int n=0;
        while(x!=0)
        {
            x1 = x%10;
            n = n+(x1*x1*x1);
            x = x/10;

        }
        if(n == m)
            printf("%d is an armstrong number!\n",m);
        else
            printf("%d is not an armstrong number!\n",m);

    }

    return 0;

}
