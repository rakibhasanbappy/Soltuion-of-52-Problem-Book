#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[51];
        scanf(" %[^\n]",s);
        int l = strlen(s);
        for(int i=0;i<l;i++)
        {
            if(s[i]=='R')
                s[i]=s[i+1];
            else if(s[i]=='L')
                s[i]=s[i-1];
        }
        printf("%s\n",s);

    }
    return 0;


}
