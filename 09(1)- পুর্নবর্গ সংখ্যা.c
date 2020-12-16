#include<stdio.h>
#include<math.h>
int main()
{

    int t;
    double x,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {

        scanf("%lf",&n);
        x = sqrt(n);
        if(ceil(x)==floor(x))
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;

}
