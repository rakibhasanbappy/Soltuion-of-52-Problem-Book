#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,q,c,t=1;
        scanf("%d%d%d",&p,&q,&c);
        for(int i=1;i<=q;i++)
        {
            t=(t*p)%c;
        }
        printf("Result = %d\n",t);

    }
    return 0;


}
