#include<stdio.h>
int main()
{
    int x,y;
    while(scanf(" %d %d",&x,&y) != EOF)
    {
        long long factx = 1;
        long long facty = 1;

        for(int i = 1; i<=x ; i++)
        {
            factx = factx * i;
        }

        for(int i = 1; i<=y ; i++)
        {
            facty = facty * i;
        }

        printf("%lld\n",factx + facty);

    }
    return 0;
}
