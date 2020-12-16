#include<stdio.h>
int main()
{
    int t;
    char s1[10000];
    char s2[2];
    int c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf(" %[^\n]",s1);
        scanf(" %[^\n]",s2);
        c=0;
        for(int j=0;s1[j]!='\0';j++)
        {

            if(s1[j]==s2[0])
                c++;


        }

        if(c>0)
            printf("Occurrence of '%c' in '%s' = %d\n",s2[0],s1,c);
        else
            printf("'%c' is not present\n",s2[0]);



    }

    return 0;


}
