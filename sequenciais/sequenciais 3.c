#include <stdio.h>

int main(){
    int n;

    printf("Insira um numero decimal: ");
    scanf("%d", &n);
    printf("O número em octal é: %o\n", n);
    printf("O número em hexadecimal é: %X\n", n);
    return 0;
}