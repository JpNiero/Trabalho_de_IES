#include <stdio.h>

void contas(int a, int c, char b){
        if(b=='+')
            printf("O RESULTADO DA SOMA É: %d\n",a+c);
        if(b=='-')
            printf("O RESULTADO DA SUBTRAÇÃO É: %d\n",a-c);
        if(b=='*')
            printf("O RESULTADO DA MULTIPLICAÇÃO É: %d\n",a*c);
        if(b=='/')
            printf("O RESULTADO DA DIVISÃO É: %d\n",a/c);
        if(b !='+' || b !='-' || b !='*' || b !='/')
            printf("CARACTER DIGITADO FOI INVALIDO\n");
}

int main()
{
    int a,c; char b;
    printf("DIGITE DOIS NUMEROS E UM DOS SINAIS DE OPERAÇÃO SENDO ELES: +,-,*,/\n");
    scanf("%d %c %d",&a, &b, &c);
    contas(a,c,b);

    return 0;
}

