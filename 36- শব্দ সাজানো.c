#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d",&n);
    char s[n][10000];
    for(int i=0;i<n;i++)
    {

        scanf(" %[^\n]",s[i]);

    }
    char t[10000];

    for(int j=0;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(strcmp(s[j],s[k])>0)
            {
                strcpy(t,s[j]);
                strcpy(s[j],s[k]);
                strcpy(s[k],t);
            }

        }

    }

    for(int i=0;i<n;i++)
    {

        printf("%s\n",s[i]);

    }


}
