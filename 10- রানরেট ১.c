#include<stdio.h>
int main()
{

    int t;
    double tr,cr,lb;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {

        scanf("%lf%lf%lf",&tr,&cr,&lb);

        double co = (300-lb)/6.0;
        double crr = cr/co;

        double rr;

        if(cr>(tr+1))
            rr = 0;
        else
            rr = (tr+1)-cr;

        double lo = lb/6.0;

        double rrr = rr/lo;

        printf("%0.2lf %0.2lf\n",crr,rrr);


    }
    return 0;


}
