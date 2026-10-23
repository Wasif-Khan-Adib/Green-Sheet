#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        if(a<b)
        {
            long long int tmp = a;
            a = b;
            b = tmp;
        }

    long long int diff = a - b;
    printf("%lld\n",diff);
    }
    return 0;
}
