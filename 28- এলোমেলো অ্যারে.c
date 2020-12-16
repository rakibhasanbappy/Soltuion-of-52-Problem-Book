#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    int c = 0;
    if(a[1]>a[0])
        x = a[1]-a[0];
    else
        x = a[0] - a[1];

    for(int i=0;i<n-1;i++)
    {

        if(a[1]>a[0])
        {
            if((a[i+1]-a[i])!=x)
            {
                c = 1;
                break;
            }
        }


    }

    if(c == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;



}
