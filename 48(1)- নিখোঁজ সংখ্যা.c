#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        scanf("%d",&n);
        int a[100001];
        for(int i=1;i<=n;i++)
        {
            a[i] = 0;
        }
        int x;
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&x);
            a[x] = 1;

        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
                printf("%d\n",i);
                break;
            }
        }


    }
    return 0;


}
