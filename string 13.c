#include <stdio.h>
#include <string.h>
#include <math.h>

//função refatorada com loop
int converte2decimal(char c[], int x){
    int i, s=0, t = strlen(c)-1, j, k;
    for(i=0; i<strlen(c); i++, t--){        //roda enquanto a variavel auxiliar for menor que o tamanho da string
        for(j=48, k=0; j<58; j++, k++){     //48 = 0 e 57 = 9, na tabela ascii, roda enquanto estiver entre esses valores
            if(c[i] == j) s+= k * pow(x,t); //caso o caractere do indice seja igual a o numero na tabela ascii,
        }                                   //recebe esse número multiplicando a base elevado a posicao do numero
    }
    return s;
}

//função teste com switch case
/*int converteBase(char c[], int x){
    int i, s=0, t = strlen(c)-1;
    for(i=0; i<strlen(c); i++, t--){
        switch(c[i]){
            case 48: s+= 0 * pow(x, t); break;
            case 49: s+= 1 * pow(x, t); break;
            case 50: s+= 2 * pow(x, t); break;
            case 51: s+= 3 * pow(x, t); break;
            case 52: s+= 4 * pow(x, t); break;
            case 53: s+= 5 * pow(x, t); break;
            case 54: s+= 6 * pow(x, t); break;
            case 55: s+= 7 * pow(x, t); break;
            case 56: s+= 8 * pow(x, t); break;
            case 57: s+= 9 * pow(x, t); break;
        }
    }
    return s;
}*/

int main()
{
    char s[10];
    int x;
    
    printf("Digite seu numero: ");
    scanf("%[^\n]%*c", s);
    printf("Digite em qual base ele esta: ");
    scanf("%d", &x);
    printf("Seu numero na base 10: %d\n", converte2decimal(s, x));
    
    return 0;
}

