#include<stdio.h>
#include<math.h>
int main()
{

    int t,n,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {

        scanf("%d",&n);
        x = sqrt(n);
        int y = pow(x,2);
        if(y==n)
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;

}
