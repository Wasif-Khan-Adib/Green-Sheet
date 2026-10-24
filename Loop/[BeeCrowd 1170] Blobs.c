#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float x;
    for(int i = 0; i<n ; i++)
    {
        scanf("%f",&x);

        int days = 0;

        for(; x > 1; x=x/2) //initialization part e kisu likhi ni, cz x ageer loop ei input niyesi...
      {

        days++;

      }

        printf("%d dias\n",days);

    }

    return 0;
}
