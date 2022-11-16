#include <stdio.h>

int main(){
    int a,b,i,c;
        printf("DIGITE A QUANTIDA DE ALUNOS DA SALA\n");
            scanf("%d",&c);
            for(i=0;i<c;i++){
                printf("DIGITE DOIS VALORES ENTRE 0 E 10\n");
                        scanf("%d %d", &a, &b);
                    if(a<50)
                        printf("A MEDIA DO ALUNO É: %d\n",(a+b)/2);
                    if(a>=50)
                        printf(" ");
            }
                            
        

    return 0;
}

