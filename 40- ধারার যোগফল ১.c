#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        int a,b;
        int s=1,power=1;
        scanf("%d%d",&a,&b);
        for(int i=1;i<=b;i++)
        {
            power = power*a;
            s = s+power;

        }
        printf("Result = %d\n",s);

    }
    return 0;


}
