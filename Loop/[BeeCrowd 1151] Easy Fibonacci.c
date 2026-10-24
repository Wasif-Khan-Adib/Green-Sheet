#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0; i<n ;i++)
    {
         printf("%d",a);

         if(i<n-1)
         {
            printf(" ");
         }

        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
