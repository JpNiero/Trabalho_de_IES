#include <stdio.h>

int main(){
    int i;
    printf("OS VALORES ABAIXO REPRESENTAM OS 127 CARACTERES DA TABELA ASCII EM DECIMAL, HEXADECIMAL E SEU RESPECTIVO CARACTER\n");
    for(i=0;i<127;i++)
        printf("DECIMAL: %d     HEXADECIMAL: %x     CARACTER: %c \n",i,i,i);

    return 0;
}

