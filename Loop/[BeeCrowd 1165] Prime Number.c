#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n ; i++)
    {
        int flag = 1;

        for ( int j = 2; j*j <= a[i]; j++)
        {
            if(a[i]%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d eh primo\n",a[i]);
        }
        else
        {
            printf("%d nao eh primo\n",a[i]);
        }
    }
    return 0;
}
