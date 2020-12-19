#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c=1;
        char s[100000];
        scanf(" %[^\n]",s);
        int l = strlen(s);
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ' && s[i-1]!=' ')
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
