#include <stdio.h>

float calcularSoma(float x, float y){
    return x+y;
}

float calcularSubtracao(float x, float y){
    return x-y;
}

float calcularMultiplicacao(float x, float y){
    return x*y;
}

int main()
{
    float x, y;
    
    printf("Qual os numeros das operações?\n");
    scanf("%f %f", &x, &y);
    printf("Soma: %g\n", calcularSoma(x,y));
    printf("Subtração: %g\n", calcularSubtracao(x,y));
    printf("Multiplicação: %g\n", calcularMultiplicacao(x,y));

    return 0;
}

