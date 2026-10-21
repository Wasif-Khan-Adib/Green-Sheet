#include<stdio.h>
int main()
{
    for(int i = 0;i <= 10; i++)
    {
        for(int j = 1 ;j<=3 ; j++)
        {
            double I = i * 0.2;
            double J = I + j;

            if( i == 0 || i== 5 || i==10)
            {
                printf("I=%.0f J=%.0f\n",I,J);
            }
            else
            {
                printf("I=%.1f J=%.1f\n",I,J);
            }
        }
    }
    return 0;
}
