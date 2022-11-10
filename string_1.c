#include <stdio.h>
#include <string.h>
#include <ctype.h>

int operacoes_string (char palavra[]){ //realiza as operações desejadas com a string lida
    int tamanho, i, conta_pontuacao = 0, conta_numeros = 0, conta_minusculas = 0;
    
    tamanho = strlen(palavra);
    printf ("Tamanho da string: %d\n", tamanho); //printa a quantidade de caracteres da string
    for (i=0; i<tamanho; i++){
        if (ispunct(palavra[i]))
            conta_pontuacao++;
        
        if (isdigit(palavra[i]))
            conta_numeros++;
            
        if (islower(palavra[i]))
            conta_minusculas++;
    }
    printf ("A string tem %d caracteres de pontuacao\n", conta_pontuacao); 
    printf ("A string tem %d numeros\n", conta_numeros);
    printf ("Tem %d caracteres minusculos\n", conta_minusculas);
    
}

int main()
{
    char palavra[80];
    scanf ("%[^\n]%*c", palavra);
    operacoes_string (palavra);

    return 0;
}

