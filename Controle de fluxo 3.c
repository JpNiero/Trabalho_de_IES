#include <stdio.h>

float inflaciona(float custo){
    return custo + custo*(0.1+(custo >= 100)/10.0); //Se o valor for igual ou maior que 100, a condição retorna 1 e divide por 10
}

int main(){
    float custo;

    printf("Insira o custo do produto:\n");
    scanf("%f", &custo);

    printf("%.2f\n", inflaciona(custo));

    return 0;
}