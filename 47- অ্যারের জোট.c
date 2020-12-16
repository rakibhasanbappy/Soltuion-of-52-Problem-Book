#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n1,n2;
        scanf("%d",&n1);
        int a1[n1];
        for(int i=0;i<n1;i++)
        {
            scanf("%d",&a1[i]);

        }

        scanf("%d",&n2);
        int a2[n2];
        for(int i=0;i<n2;i++)
        {
            scanf("%d",&a2[i]);
        }


        for(int i=0;i<n2;i++)
        {
            a1[n1] = a2[i];
            n1++;
        }
        int t;
        for(int i=0;i<n1-1;i++)
        {
            for(int j=i+1;j<n1;j++)
            {
                if(a1[i]>a1[j])
                {
                    t=a1[i];
                    a1[i]=a1[j];
                    a1[j]=t;
                }

            }

        }

        printf("%d",a1[0]);
        for(int i=1;i<n1;i++)
        {
            printf(" %d",a1[i]);
        }
        printf("\n");


    }
}
