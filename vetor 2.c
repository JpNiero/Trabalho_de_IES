#include <stdio.h>

void leVetor(int v[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
} 

void ordena(int v[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i] < v[j]){
                troca(&v[i], &v[j]);
            }
        }
    }
}

void printaVetor(int v[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
    int v[10];
    
    leVetor(v, 10);
    ordena(v, 10);
    printaVetor(v, 10);

    return 0;
}
