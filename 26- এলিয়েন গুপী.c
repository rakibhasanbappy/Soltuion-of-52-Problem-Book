#include<stdio.h>
int main()
{

    int t;
    double x;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {

        scanf("%lf",&x);
        int c=0;
        while(x>=1.00)
        {

            c++;
            x=x/2;

        }
        printf("%d days\n",c);


    }
    return 0;


}
