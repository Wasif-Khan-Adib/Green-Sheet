#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i<=n ; i++)
    {
        if(i==n)
        {
            printf("Ho!");
        }
        else
        {
            printf("Ho ");
        }
    }
    printf("\n");

    return 0;
}
