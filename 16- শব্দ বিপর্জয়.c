#include<stdio.h>

void f_reverse(char s1[])
{
    int m;
    for(m = strlen(s1)-1;m>=0;m--)
        printf("%c",s1[m]);

}


int main()
{
    int t,j,k;
    scanf("%d",&t);

    char s[1000];
    char word[1000];

    for(int i=0;i<t;i++)
    {

        scanf(" %[^\n]",s);

        for(j=0,k=0;j<strlen(s);j++)
        {

            if(s[j]!=' ')
            {

                word[k] = s[j];
                k++;
            }
            else if(k>0)
            {
                word[k]='\0';
                f_reverse(word);
                printf(" ");
                k=0;
            }

        }

        if(k>0)
        {

            word[k]='\0';
            f_reverse(word);
            printf("\n");

        }


    }

    return 0;


}
