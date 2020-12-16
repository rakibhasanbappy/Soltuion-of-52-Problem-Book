#include<stdio.h>
int main()
{

    int i,t,a;
    char s[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        a= strlen(s);
        if(s[a-1]%2==0)
            printf("even\n");
        else
            printf("odd\n");

    }

    return 0;


}
