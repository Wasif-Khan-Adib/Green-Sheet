#include<stdio.h>
int main()
{
    int n1,u1;
    scanf("%d %d",&n1,&u1);
    float p1;
    scanf("%f",&p1);
    int n2,u2;
    scanf("%d %d",&n2,&u2);
    float p2;
    scanf("%f",&p2);

    float mulfp = u1*p1;
    float mulsp = u2*p2;

    float sum = mulfp + mulsp;

    printf("VALOR A PAGAR: R$ %.2f\n",sum);

    return 0;

}
