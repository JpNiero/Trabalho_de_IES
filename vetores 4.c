#include <stdio.h>
#define MAX 100

void ler_vetor (double vet[], int tamanho){
    int i;
    printf ("Digite os elementos do vetor:\n");
    for (i=0; i<tamanho; i++){
        scanf ("%lf", &vet[i]);
    }
}

void print_vetor (double vet[], int tamanho){
    int i;
    for (i=0; i<tamanho; i++){
        printf ("Posicao %d = %.2lf\n", i, vet[i]);
    }
}

int main()
{
    int tamanho;
    double vet[MAX];
    printf ("Digite a quantidade de valores que deseja inserir: ");
    scanf ("%d", &tamanho);
    ler_vetor (vet, tamanho);
    print_vetor (vet, tamanho);

    return 0;
}

