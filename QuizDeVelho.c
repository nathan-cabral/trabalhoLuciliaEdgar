#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int perguntar(char pergunta[], char correta)
{
    char resposta;

    printf("%s", pergunta);
    scanf(" %c", &resposta);

    if(resposta == correta || resposta == toupper(correta))
    {
        printf("\nRESPOSTA CORRETA!\n");
        return 3;
    }
    else
    {
        printf("\nRESPOSTA ERRADA!\n");
        printf("Resposta correta: LETRA %c\n", toupper(correta));
        return 0;
    }
}

void mostrar_resultado(int pontos)
{
    printf("\n========================");
    printf("\nPONTUACAO FINAL: %d", pontos);
    printf("\n========================\n");

    if(pontos >= 27)
    {
        printf("Excelente desempenho!\n");
    }
    else if(pontos >= 18)
    {
        printf("Bom desempenho!\n");
    }
    else if(pontos >= 9)
    {
        printf("Desempenho razoavel!\n");
    }
    else
    {
        printf("Precisa melhorar!\n");
    }
}

int main()
{

    char nome[40];
    int opcao, a=1;
    int pontos = 0;

    while(a!=0)
    {
        printf("**********\n");
        printf("Ola, qual seu nome? ");
        scanf("%39s", nome);

        system("cls");

        printf("Prazer em conhece-lo(a), %s!\n", nome);
        printf("Voce participara de um quiz de perguntas.\n\n");

        printf("1 - Decada de 60\n");
        printf("2 - Decada de 70\n");
        printf("3 - Decada de 80\n");
        printf("4 - Decada de 90\n");
        printf("0 - SAIR\n");

        printf("\nDigite a opcao: ");
        scanf("%d", &opcao);

        system("cls");

        switch(opcao)
        {
            case 1:
                pontos += perguntar(
                "1. Quem foi o presidente do Brasil que inaugurou Brasilia em 1960?\n"
                "A)Getulio Vargas\n"
                "B)Juscelino Kubitschek\n"
                "C)Janio Quadros\n"
                "D)Joao Goulart\n"
                "Sua resposta: ",
                'b');

                system("pause");
                system("cls");

                pontos += perguntar(
                "2. Qual destes artistas ficou muito famoso na Jovem Guarda?\n"
                "A)Roberto Carlos\n"
                "B)Tim Maia\n"
                "C)Renato Russo\n"
                "D)Raul Seixas\n"
                "Sua resposta: ",
                'a');

                system("pause");
                system("cls");

                pontos += perguntar(
                "3. Qual era o nome do movimento musical liderado por Roberto Carlos?\n"
                "A)Bossa Nova\n"
                "B)Tropicalia\n"
                "C)Jovem Guarda\n"
                "D)Samba Cancao\n"
                "Sua resposta: ",
                'c');

                system("pause");
                system("cls");

                pontos += perguntar(
                "4. Em 1969, qual acontecimento marcou o mundo?\n"
                "A)Construcao do Muro de Berlim\n"
                "B)O homem chegou a Lua\n"
                "C)Fim da Segunda Guerra\n"
                "D)Criacao da Internet\n"
                "Sua resposta: ",
                'b');

                system("pause");
                system("cls");

                pontos += perguntar(
                "5. Qual objeto era muito usado para ouvir musica?\n"
                "A)MP3 Player\n"
                "B)Disco de vinil\n"
                "C)Pen drive\n"
                "D)CD\n"
                "Sua resposta: ",
                'b');

                system("pause");
                system("cls");

                break;

            case 2:
                printf("\n");
                break;

            case 3:
                printf("\n");
                break;

            case 4:
                printf("\n");
                break;

            case 0:
                printf("Muito obrigado!\n");
                return 0;

            default:
                printf("Opcao invalida!\n");
                return 0;
        }

        mostrar_resultado(pontos);

        printf("\nObrigado por jogar, %s!\n", nome);

        printf("Deseja jogar novamente?\n");
        printf("Digite 1 para sim e 0 para nao: ");
        scanf("%d",&a);
        
    }
    return 0;
}
