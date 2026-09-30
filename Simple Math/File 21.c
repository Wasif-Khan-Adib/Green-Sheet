#include<stdio.h>
int main()
{
    int age , days, month, year;
    scanf("%d",&age);

    year = age / 365 ;
    age = age % 365;

    month = age/30;
    days = age % 30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);

    return 0;
}
