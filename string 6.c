#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define MAX 100

int contaPalavra(char str[]){
    int count, i, aux = FALSE;
    
    for(i = count = 0; str[i]; i++){
        if(str[i] != ' ' && !aux) //Caso para não contabilizar espaços desnecessários
            aux = TRUE;
        if((str[i] == ' ' || str[i+1] == '\0') && aux){ //Toda vez que encontrar um espaço não desnecessário vai considerar como palavra
            aux = FALSE;
            count++;
        }
    }
    
    return count; //Não precisa incremetar +1 por conta do \0
}

int main(){
    char string[MAX];
    
    scanf("%[^\n]%*c", string);
    
    printf("%d\n", contaPalavra(string));
    
    return 0;
}

