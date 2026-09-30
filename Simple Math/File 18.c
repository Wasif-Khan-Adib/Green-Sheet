#include<stdio.h>
int main()
{
    int d;
    float l;
    scanf("%d %f",&d,&l);
    float mod = d / l;
    printf("%.3f km/l\n",mod);
    return 0;
}
