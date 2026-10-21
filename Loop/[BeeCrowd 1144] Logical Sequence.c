#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for ( int i = 1; i <= n; i++)
    {
        int sq = i * i;
        int qb = i * i * i;

        printf("%d %d %d\n",i,sq,qb);;
        printf("%d %d %d\n",i,sq+1,qb+1);
    }
    return 0;
}
