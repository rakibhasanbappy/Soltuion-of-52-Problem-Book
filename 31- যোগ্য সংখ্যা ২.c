#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int ara[5]={6,28,496,8128,33550336};
        int num,j=0;
        scanf("%d",&num);
        for(int i=0;i<5;i++)
        {
            for(int d=1;d<num;d++)
            {
                if(d==ara[i])
                    printf("%d\n",ara[i]);

            }

        }

        if(T)
            printf("\n");
    }

    return 0;
}
