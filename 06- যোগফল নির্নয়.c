#include<stdio.h>
int main()
{

    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {

        scanf("%d",&n);
        int f = n/10000;
        int l = n%10;
        printf("Sum = %d\n",f+l);


    }
    return 0;

}
