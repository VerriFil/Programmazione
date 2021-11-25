#include <stdio.h>

typedef struct
{
    int num;
    int den;
} Frazione;

int MCD(int a, int b)
{
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}

int valAssoluto(int n)
{
    if (n > 0)
        return n;
    else
        return -n;
}

void fraz(int n, int d, Frazione *pf) //con il *pf non serve restituire qualcosa
{
    int m = MCD(valAssoluto(n), valAssoluto(d));
    (*pf).num = n / m;
    (*pf).den = d / m;
}

int main()
{
    Frazione g;
    fraz(4, 6, &g); //non serve fare 'g=...' perchè usiamo i puntatori
    printf("%d / %d\n", g.num, g.den);

    return 0;
}
