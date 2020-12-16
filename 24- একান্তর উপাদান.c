#include<stdio.h>
int main()
{

    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

        printf("%d",a[0]);
        for(int k=2;k<n;k+=2)
        {
            printf(" %d",a[k]);
        }
        printf("\n");



    }
    return 0;



}
