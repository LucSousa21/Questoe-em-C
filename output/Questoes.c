//2 simulado

#include <stdio.h>
#include <ctype.h>   // Para tolower()
#include <locale.h>  // Para suportar caracteres especiais

#define TOTAL_QUESTOES 100
#define NOTA_MINIMA 65

int main() {
    // Ativa suporte a acentos e caracteres especiais conforme o sistema
    setlocale(LC_ALL, "");

    int i, nota = 0;
    char resposta[TOTAL_QUESTOES];
    char gabarito[TOTAL_QUESTOES] = {
        
        'a','d','a','c','d','e','e','d','d','b',
        'a','e','a','c','d','b','c','c','c','a',
        'b','b','c','x','d','a','b','b','d','b',
        'e','c','a','a','b','d','e','e','d','a',
        'b','d','c','e','a','c','b','c','a','a',
        'd','b','d','d','a','c','b','c','c','b',
        'd','e','c','d','b','c','c','d','e','e',
        'd','e','a','b','b','d','d','b','c','c',
        'e','a','b','a','b','c','d','a','c','c',
        'b','e','c','b','c','d','b','d','b','d'


        
    };

    printf("Digite as respostas do aluno (A, B, C, D ou E):\n");

    // Coleta de respostas com validação
    for (i = 0; i < TOTAL_QUESTOES; i++) {
        char entrada;
        do {
            printf("Questão %02d: ", i + 1);
            scanf(" %c", &entrada);
            entrada = tolower(entrada);  // Aceita maiúsculas também
            if (entrada < 'a' || entrada > 'e') {
                printf("Entrada inválida. Digite uma letra de A a E.\n");
            }
        } while (entrada < 'a' || entrada > 'e');
        resposta[i] = entrada;
    }

    // Correção
    printf("\n--- Correção ---\n");
    for (i = 0; i < TOTAL_QUESTOES; i++) {
        if (resposta[i] == gabarito[i]) {
            printf("Questão %02d: Correta (%c)\n", i + 1, resposta[i]);
            nota++;
        } else {
            printf("Questão %02d: Errada  (%c) - Correta: %c\n", i + 1, resposta[i], gabarito[i]);
        }
    }

    // Resultado final
    printf("\n--- Resultado Final ---\n");
    printf("Total de acertos: %d\n", nota);
    if (nota >= NOTA_MINIMA) {
        printf("Parabéns, você passou!\n");
    } else {
        printf("Infelizmente, você não passou.\n");
    }

    return 0;
}

//3 simulado

/*#include <stdio.h>
#include <ctype.h>   // Para tolower()
#include <locale.h>  // Para suportar caracteres especiais

#define TOTAL_QUESTOES 100
#define NOTA_MINIMA 58

int main() {
    // Ativa suporte a acentos e caracteres especiais conforme o sistema
    setlocale(LC_ALL, "");

    int i, nota = 0;
    char resposta[TOTAL_QUESTOES];
    char gabarito[TOTAL_QUESTOES] = {
        'a','d','a','c','d','e','e','d','d','b',
        'a','e','a','c','d','b','c','c','c','a',
        'b','b','c','x','d','a','b','b','d','b',
        'e','c','a','a','b','d','e','e','d','a',
        'b','d','c','e','a','c','b','c','a','a',
        'd','b','d','d','a','c','b','c','c','b',
        'd','e','c','d','b','c','c','d','e','e',
        'd','e','a','b','b','d','d','b','c','c',
        'e','a','b','a','b','c','d','a','c','c',
        'b','e','c','b','c','d','b','d','b','d',
    };

    printf("Digite as respostas do aluno (A, B, C, D ou E):\n");

    // Coleta de respostas com validação
    for (i = 0; i < TOTAL_QUESTOES; i++) {
        char entrada;
        do {
            printf("Questão %02d: ", i + 1);
            scanf(" %c", &entrada);
            entrada = tolower(entrada);  // Aceita maiúsculas também
            if (entrada < 'a' || entrada > 'e') {
                printf("Entrada inválida. Digite uma letra de A a E.\n");
            }
        } while (entrada < 'a' || entrada > 'e');
        resposta[i] = entrada;
    }

    // Correção
    printf("\n--- Correção ---\n");
    for (i = 0; i < TOTAL_QUESTOES; i++) {
        if (resposta[i] == gabarito[i]) {
            printf("Questão %02d: Correta (%c)\n", i + 1, resposta[i]);
            nota++;
        } else {
            printf("Questão %02d: Errada  (%c) - Correta: %c\n", i + 1, resposta[i], gabarito[i]);
        }
    }

    // Resultado final
    printf("\n--- Resultado Final ---\n");
    printf("Total de acertos: %d\n", nota);
    if (nota >= NOTA_MINIMA) {
        printf("Parabéns, você passou!\n");
    } else {
        printf("Infelizmente, você não passou.\n");
    }

    return 0;
}*/


// 4 simulado

/*#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    int i;
    int nota = 0; 
    char resposta[100];
    char gabarito[100] = {
        'b','d','a','e','c','c','e','d','a','e',
        'a','d','b','d','a','c','a','e','b','b',
        'b','e','b','c','d','d','d','b','a','c',
        'd','d','d','d','e','a','d','d','d','d',
        'b','a','c','a','d','c','a','a','a','c',
        'd','c','a','e','e','e','b','d','a','b',
        'e','a','d','a','c','e','a','e','c','e',
        'd','d','e','b','d','c','a','e','a','d',
        'a','d','e','c','c','c','a','d','b','d',
        'c','e','c','e','x','x','x','x','x','x',
    };

    // Coletar respostas do aluno
    for (i = 0; i < 100; i++) {
        printf("Questão %d\n", i + 1);
        printf("A B C D E: ");
        scanf(" %c", &resposta[i]);
        system("pause");
    }

    system("cls");
    
    printf("\tRespostas do aluno:\n");
    for (i = 0; i < 100; i++) {
        printf("Questão %d: %c\n", i + 1, resposta[i]);
    }

    // Corrigir a prova
    printf("\tCorreção do Gabarito:\n");
    for (i = 0; i < 100; i++) {
        if (resposta[i] == gabarito[i]) {
            printf("Questão %d: Correta (%c)\n", i + 1, resposta[i]);
            nota++;
        } else {
            printf("Questão %d: Errada (%c) - Correta: %c\n", i + 1, resposta[i], gabarito[i]);
        }
    }

    // Exibir nota final
    printf("\tResultado Final:\n");
    if (nota >= 58) {
        printf("Você acertou %d questões. Parabéns, você passou!\n", nota);
    } else {
        printf("Você acertou %d questões. Infelizmente, não passou.\n", nota);
    }

    return 0;
}*/


