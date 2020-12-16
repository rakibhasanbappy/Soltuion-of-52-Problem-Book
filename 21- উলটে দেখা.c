#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    char s[1002];
    char c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf(" %[^\n]",s);
        int l = strlen(s);
        int m=l-1;
        for(int j=0;j<l/2;j++)
        {
            c = s[j];
            s[j] = s[m];
            s[m] = c;

            m--;
        }
        printf("%s\n",s);

    }

    return 0;




}
