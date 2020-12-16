#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[100];
    for(int i=0;i<t;i++)
    {

        scanf(" %[^\n]",s);
        for(int j=0;s[j]!='\0';j++)
        {
            printf("%d",s[j]-64);


        }
        printf("\n");


    }



}
