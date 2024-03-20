#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[105];
        scanf("%s",&s);

        if(strlen(s) > 10)
        {
            printf("%c",s[0]);
            printf("%d",strlen(s)-2);
            printf("%c\n",s[strlen(s)-1]);
        }
        else
        {
            printf("%s\n",s);
        }
    } 
}