#include <stdio.h>

double calcular_potencia (int base, int expoente){
    if (expoente>0){
        return base * calcular_potencia(base, expoente-1);
    }
    else
    return 1;
}

int main()
{
    double base;
    int expoente;
    printf ("Digite a base:\n");
    scanf ("%lf", &base);
    printf ("Digite o expoente:\n");
    scanf ("%d", &expoente);
    printf ("%.2lf elevado a %d eh igual a %.2lf\n", base, expoente, calcular_potencia (base, expoente));

    return 0;
}