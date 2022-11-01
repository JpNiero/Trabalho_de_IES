#include <stdio.h>

int main()
{
    int numero, fatorial = 1;
    printf ("Qual numero voce deseja obter o fatorial: \n");
    scanf ("%d", &numero);
    
    for ( ; numero>1; numero--){
        fatorial*=numero;
    }
    
    printf ("Fatorial = %d\n", fatorial);

    return 0;
}