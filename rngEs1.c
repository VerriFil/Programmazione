#include <stdio.h>
#include <stdlib.h>

int rnd_int(int a, int b)
{
    return a + rand() % (b - a + 1);
}

int main()
{
    /*  r:N->N
        r1 fisso SEED
        r2=f(r1)
        r3=f(r2)
        rn=f(rn-1)*/
    //rand utilizza lo stesso seme, quindi ogni sequenza è uguale,
    //srand cambia il seme ogni volta, permettendo a rand di
    //essere casuale
    //inizializzazione della stringa
    char s[37] = "https://meet.google.com/xxx-xxxx-xxx";
    int i, n;

    //altro medoto consentito per l'inizializzazione
    //strcpy(s, "https://meet.google.com/xxx-xxxx-xxx")
    //min+rand()%(max-min+1)

    srand(time(NULL));
    for (i = 24; i < 37; i++)
    {
        if (i == 36)
            s[i] = '\0';
        else
        {
            if (s[i] == 'x')
                s[i] = rnd_int(97, 122);
        }
    }

    printf("%s\n", s);

    return 0;
}
