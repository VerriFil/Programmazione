#include <stdio.h>
#include <stdlib.h>

 //////////////////////////////////////////////////////////finire

typedef struct
{
    int num; //se num>0 segno +,  se num<0 sengo -
    int den;
} Frazione;

Frazione fraz(int n, int d)
{
    Frazione f;
    f.num = n;
    f.den = d;
    return f;
}

int main()
{
    Frazione f1, f2;
    int n, d;

    printf("Inserisci numeratore e denominatore:\n");
    scanf("%d%d\n", &n, &d);

    f1 = fraz(n, d);
    f2 = fraz(7, 6);

    printf("%d/%d\n", f1.num, f1.den);
    printf("%d/%d\n", f2.num, f2.den);

    return 0;
}
