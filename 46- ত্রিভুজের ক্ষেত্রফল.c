#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        double s = (a+b+c)/2.0;
        double sum = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %0.3lf\n",sum);

    }
    return 0;


}
