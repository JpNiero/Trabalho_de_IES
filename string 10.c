#include <stdio.h>
#include <string.h>

void removeCaractere(char c[], char x){
    int i;
    for(i=0; i<strlen(c); i++){
        if(c[i] == x){
            c[i] = ' ';
        }
    }
}

int main()
{
    char c[30], x;
    
    printf("Digite sua string\n");
    scanf("%[^\n]%*c", c);
    printf("Digite o caractere que voce deseja remover da string\n");
    scanf("%c", &x);
    removeCaractere(c, x);
    printf("sua string ficou: %s", c);

    return 0;
}


