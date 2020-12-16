#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        char s1[128],s2[128];
        scanf("%s",&s1);
        scanf("%s",&s2);
        int l1= strlen(s1);
        int l2= strlen(s2);

        for(int i=0;i<l1;i++)
        {

            if(s2[0]==s1[i])
            {
                int j;
                for(j=1;j<l2;j++)
                {
                    if(s2[j]!=s1[i+j])
                        break;

                }
                if(j==l2)
                {
                    printf("%d\n",i);
                    break;
                }


            }


        }


    }
    return 0;


}
