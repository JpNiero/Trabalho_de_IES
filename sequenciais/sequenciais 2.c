#include <stdio.h>

void calcularTabuada(int n, int i){

    if(i<=10){
        printf("%d ", n*i);
        calcularTabuada(n, i+1);
    }
}

int main(){

    int i;
    

    for(i=1; i<10; i++){
        printf("Tabuada do %d:\n", i);
        calcularTabuada(i, 0);
        printf("\n");
    }
    return 0;
}