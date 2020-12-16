#include<stdio.h>
#include<string.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1001];
        char s1[1001];
        int i,j;
        scanf(" %[^\n]",s);
        int l = strlen(s);
        for(i=l-1,j=0;i>=0;i--)
        {
            s1[j] = s[i];
            j++;
        }
        s1[j] = '\0';

        if(strcmp(s,s1)==0)
            printf("Yes! It is Palindrome!\n");
        else
            printf("Sorry! It is not Palindrome!\n");
    }

    return 0;


}

