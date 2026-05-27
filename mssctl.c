#include <stdio.h>

int main() 
{
    float temperatura;
    int energia;
    int comunicacao;
    int opcao;

    temperatura = 0;
    energia = 0;
    comunicacao = 0;

    do
    {
        printf("\n=====================================\n");
        printf("   MISSION CONTROL C SYSTEM\n");
        printf("=====================================\n");

        printf("1 - Inserir dados da missao\n");
        printf("2 - Visualizar status\n");
        printf("3 - Executar analise\n");
        printf("4 - Encerrar sistema\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:

                printf("\n--- INSERIR DADOS ---\n");

                printf("Digite a temperatura da nave: ");
                scanf("%f", &temperatura);

                printf("Digite o nivel de energia (0 a 100): ");
                scanf("%d", &energia);

                printf("Digite o status da comunicacao (1 = OK / 0 = FALHA): ");
                scanf("%d", &comunicacao);

                printf("\nDados cadastrados com sucesso!\n");

                break;

            case 2:

                printf("\n--- STATUS DA MISSAO ---\n");

                printf("Temperatura: %.2f\n", temperatura);

                printf("Energia: %d%%\n", energia);

                if(comunicacao == 1)
                {
                    printf("Comunicacao: OPERANDO\n");
                }
                else
                {
                    printf("Comunicacao: FALHA\n");
                }

                break;

            case 3:

                printf("\n--- ANALISE DA MISSAO ---\n");

                if(temperatura > 80)
                {
                    printf("ALERTA: Superaquecimento detectado!\n");
                }
                else
                {
                    printf("Temperatura em nivel seguro.\n");
                }

                if(energia < 20)
                {
                    printf("ALERTA: Economia de energia ativada!\n");
                }
                else
                {
                    printf("Energia em nivel adequado.\n");
                }

                if(comunicacao == 0)
                {
                    printf("ALERTA: Falha de comunicacao!\n");
                }
                else
                {
                    printf("Comunicacao funcionando normalmente.\n");
                }

                if(
                    temperatura > 80 ||
                    energia < 20 ||
                    comunicacao == 0
                )
                {
                    printf("\nSTATUS DA MISSAO: EM RISCO\n");
                }
                else
                {
                    printf("\nSTATUS DA MISSAO: ESTAVEL\n");
                }

                break;

            case 4:

                printf("\nEncerrando sistema...\n");

                break;

            default:

                printf("\nOpcao invalida!\n");

        }

    } while(opcao != 4);

    return 0;
}