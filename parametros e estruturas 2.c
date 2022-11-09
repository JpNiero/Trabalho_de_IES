#include <stdio.h>


int calculaDivisao(float x, float y, float *resultado){
    if(y!=0){
        *resultado = x/y;
        return 1;
    }else
        return 0;
}


int main()
{
    float x, y, resultado;
 
    printf("Qual os números da operação?\n");
    scanf("%f %f", &x, &y);
    calculaDivisao(x, y, &resultado);
    printf("Quociente: %g\n", resultado);


    return 0;
}

