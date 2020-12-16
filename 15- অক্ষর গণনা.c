#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s[1000];
    int count[26];
    scanf("%d",&t);


    for(int i=t;i>0;i--)
    {

        scanf(" %[^\n]",s);

        for(int l=0;l<26;l++)
        {
            count[l]=0;
        }

        for(int j=0;j<strlen(s);j++)
        {
            //if(s[j]>='a' && s[j]<='z')
                count[s[j]-'a']++;
        }


        for(int k=0;k<26;k++)
        {

            if(count[k]!=0)
                printf("%c = %d\n",k+'a',count[k]);

        }
        if(i>1)
            printf("\n");

    }

    return 0;

}
