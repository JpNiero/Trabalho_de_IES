#include <stdio.h>
#include <string.h>

int confereString(char str[]){
    if(strcmp("SIM", str)==0) 
        return 1;
    if(strcmp("NAO", str)==0)
        return 0;
    else
        printf("string não válida\n");
}

int main()
{
    char str[5];
    int x;
    
    printf("digite a string\n");
    scanf("%[^\n]%*c", str);

    x = confereString(str);

    if(x<2)                                     //conferir se x é 0 ou 1
        printf("Retorno: %d\n", x);
    

    return 0;
}



