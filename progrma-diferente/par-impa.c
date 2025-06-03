#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    system("chcp 65001");

    int i, soma[3], ponto[3];
    char nome[3][20];
    
    for(i = 0; i < 3; i ++){
        printf("Aluno %d: \n", i + 1);
        scanf(" %s", nome[i]);
        for(int j = 0; j < 3; j++){
            printf("Nota %d: \n", j + 1);
            scanf(" %d", &ponto[j]);
            
        }
        
    }
    system("cls");

    for(i = 0; i < 3; i ++){
        printf("Aluno %d %s - Nota final: %d\n ", i + 1, nome[i], soma[i]);
                                     
    }

    printf("Hello world\n");
    /*for(i = 0; i < 3; i ++){
        if(resposta[i] == gab[i]){
            printf("Questão %d esta certa (gabarito %c)\n", i + 1, gab[i], questoes[i]);
        } else{
            printf("Questão %d esta errada (gabarito %c)\n", i + 1, gab[i], questoes[i]);
        }
    }*/
    return 0;
}