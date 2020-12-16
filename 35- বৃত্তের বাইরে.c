#include<stdio.h>
#include<math.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        double xc,yc,x,y,r;
        scanf("%lf%lf%lf%lf%lf",&xc,&yc,&r,&x,&y);

        double z = sqrt((pow((x-xc),2)+pow((y-yc),2)));

        if(z>r)
            printf("The point is not inside the circle\n");
        else
            printf("The point is inside the circle\n");
    }
    return 0;
}
