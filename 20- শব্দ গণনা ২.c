#include<stdio.h>
int main()
{

    int t,i,j,c;
    scanf("%d",&t);
    getchar();
    char a[10000];
    for(i=0;i<t;i++)
    {
        scanf("%[^\n]%*c",a);
        c = 1;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]==' ' && a[j+1]!=' ')
                c++;

        }

        printf("Count = %d\n",c);

    }
    return 0;


}
