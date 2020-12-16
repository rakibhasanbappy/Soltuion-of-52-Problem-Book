#include<stdio.h>
int main()
{

    for(int j=1000;j>0;j--)
    {

        printf("%d\t",j);
        if(j%5==1)
        {
            printf("\n");
        }
    }

    return 0;


}
