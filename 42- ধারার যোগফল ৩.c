#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=n;i>=0;i--)
        {
            if(i==0)
                printf("1");
            else if(i==1)
            {
                printf("2 + ");
            }
            else
                printf("2^%d + ",i);

        }
        printf("\n");


    }
    return 0;


}
