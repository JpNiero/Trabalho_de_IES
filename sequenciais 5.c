#include <stdio.h>
#include <math.h>

int main(){

    int numero1, numero2;

    printf("Insira dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("Soma = %d\n", numero1+numero2);
    printf("Produto do primeiro pelo segundo ao quadrado: %g\n", numero1 * pow(numero2, 2));
    printf("Primeiro numero ao quadrado: %g\n", pow(numero1, 2));
    printf("Raiz da soma dos quadrados: %g\n", sqrt(pow(numero1, 2) + pow(numero2, 2)));
    printf("Seno da diferença do primeiro pro segundo: %g\n", sin(numero1-numero2));
    printf("Modulo do primeiro numero: %u\n", numero1);

    return 0;
}