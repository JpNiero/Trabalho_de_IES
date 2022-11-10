#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavra[100], i;
    scanf ("%[^\n]%*c", palavra);
    
    for (i=0; i<strlen(palavra); i++){
        if (isspace(palavra[i])) //se retornar um valor diferente de 0, então temos um espaço em branco, dessa forma, pulamos uma linha
            printf ("\n");
        else
            printf ("%c", palavra[i]);
    }
    
    return 0;
}


