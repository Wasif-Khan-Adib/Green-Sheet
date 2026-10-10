#include <stdio.h>

int main() {
    int d1, h1, m1, s1, d2, h2, m2, s2;

    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf(" Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int start = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    int end   = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;
    int diff  = end - start;

    int days = diff / 86400;
    diff = diff % 86400; // obosisto sec ber kore diff er moddhe store korlam

    int hours = diff / 3600;
    diff = diff % 3600; // obosisto hour ber kore diff er moddhe store korlam

    int min = diff / 60; // hour ke 60 diye vag kore min e anlam
    int sec = diff % 60; // obosisto jai pore thaklo ,tai second

    printf("%d dia(s)\n",days);
    printf("%d hora(s)\n",hours);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);

    return 0;
    }
