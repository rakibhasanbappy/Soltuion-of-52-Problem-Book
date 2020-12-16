#include<stdio.h>
int main()
{

    int t;
    int a,b,c,x,s;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {

        scanf("%d %d %d",&a,&b,&c);
        int s = a;
        if(b<s && b<c)
        {
            x = a;
            a = b;
            b = x;
        }
        else if(c<s && c<b)
        {
            x = a;
            a = c;
            c = x;
        }
        if(c<b)
        {
            x=b;
            b=c;
            c=x;
        }
        printf("Case %d: %d %d %d\n",i+1,a,b,c);

    }
    return 0;


}
