#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i<=n ;i++)
    {
        if(n==1)
        {
            printf("January\n");
            break;
        }
        else if (n==2)
        {
            printf("February\n");
            break;
        }
        else if (n==3)
        {
            printf("March\n");
            break;
        }
        else if (n==4)
        {
            printf("April\n");
            break;
        }
        else if (n==5)
        {
            printf("May\n");
            break;
        }
        else if (n==6)
        {
            printf("June\n");
            break;
        }
        else if (n==7)
        {
            printf("July\n");
            break;
        }
        else if (n==8)
        {
            printf("August\n");
            break;
        }
        else if (n==9)
        {
            printf("September\n");
            break;
        }
        else if (n==10)
        {
            printf("October\n");
            break;
        }
        else if (n==11)
        {
            printf("November\n");
            break;
        }
        else
        {
            printf("December\n");
            break;
        }
    }
    return 0;
}
