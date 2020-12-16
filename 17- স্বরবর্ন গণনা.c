#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    char s[1000];
    for(int i=0;i<t;i++)
    {
        scanf(" %[^\n]",s);
        int c=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
                c++;


        }
        printf("Number of vowels = %d\n",c);

    }

    return 0;


}
