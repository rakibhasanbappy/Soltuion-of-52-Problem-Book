#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    char s[1002];
    char v[1002];
    char c[1002];
    for(int i=0;i<t;i++)
    {
        scanf(" %[^\n]",s);
        int k=0;
        int l=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
            {
                v[k] = s[j];
                k++;
            }
            else
            {
                if(s[j]==' ')
                    continue;
                c[l] = s[j];
                l++;
            }


        }
        printf("%s\n",v);
        printf("%s\n",c);

    }

    return 0;


}
