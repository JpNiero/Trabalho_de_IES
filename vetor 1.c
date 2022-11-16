#include <stdio.h>

void leVetor(int v[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}

int achaMenor(int v[], int n){
    int menor = v[0];
    for(int i=0; i<n; i++){
        if(v[i] < menor) menor = v[i];
    }
    return menor;
}


int achaMaior(int v[], int n){
    int maior = v[0];
    for(int i=0; i<n; i++){
        if(v[i] > maior) maior = v[i];
    }
    return maior;
}


int main()
{
    int v[10];
    
    leVetor(v, 10);
    
    printf("Menor: %d\nMaior: %d\n", achaMenor(v, 10), achaMaior(v, 10));

    return 0;
}
