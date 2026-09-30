#include<stdio.h>
int main()
{
    int x,y;
    float a;
    scanf("%d %d",&x,&y);
    scanf("%f",&a);
    float mul = y*a;
    printf("NUMBER = %d\n",x);
    printf("SALARY = U$ %.2f\n",mul);
    return 0;
}
