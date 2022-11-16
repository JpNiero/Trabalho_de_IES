#include <stdio.h>

void leVetor(float v[], int n){
    for(int i=0; i<n; i++){
        scanf("%f", &v[i]);
    }
}

float media(float v[], int n){
    int soma = 0;
    for(int i=0; i<n; i++){
        soma+=v[i];
    }
    return soma/ (float) n;     //(float) define o tipo que o proximo elemento deve ser considerado para operação
}                               //utilizado pra ter um retorno de uma nota com numeros decimais apos a virgula

int main()
{
    float v[5];
    
    leVetor(v, 5);
    printf("Nota: %.2f\n", media(v, 5));

    return 0;
}
