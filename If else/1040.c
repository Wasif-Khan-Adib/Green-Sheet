#include <stdio.h>
int main()
{
    double N1,N2,N3,N4,avg,exam,final_avg;

    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    avg = (N1*2 + N2*3 + N3*4 + N4*1) / 10.0;

    printf("Media: %.1lf\n",avg);

    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");

        scanf("%lf",&exam);

        printf("Nota do exame: %.1lf\n", exam);

        final_avg = (avg + exam) / 2.0;

        if (final_avg >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n",final_avg);
    }

    return 0;
}

