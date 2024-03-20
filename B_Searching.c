#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int x;
    scanf("%d",&x);

    int is_found = 0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            is_found = 1;
            printf("%d\n",i);
            break;
        }
    }

    // puro array searching sesh
    if(is_found==0)     // x is not found yet
        printf("-1\n");

}