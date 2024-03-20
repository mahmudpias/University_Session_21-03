#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    char t[20];
    scanf("%s",&s);
    scanf("%s",&t);

    strcat(s," ");
    strcat(s,t);
    printf("%s",s);
}