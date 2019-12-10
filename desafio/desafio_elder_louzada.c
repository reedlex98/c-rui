#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
struct dataStruct
{
    int dia;
    int mes;
    int ano;
};

struct dados
{
    char nome[20];
    struct dataStruct dataNascimento;
    char estadoCivil[20];
    double salario;
};

void inclui();
void lista();
int pesquisa();
void pesquisaMultiplos();
void altera();
void exclui();

int main()
{
    system("clear");
    struct dados info;
    struct dados *p;
    int op;
    int i;
    int tam; //n. de bytes da estrutura

    p = &info;
    tam = sizeof(info);

    while (1)
    {
        printf(" 1 -Inclua dados  \n");
        printf(" 2 -Lista dados  \n");
        printf(" 3 -Pesquisar dados  \n");
        printf(" 4 -Altera dados  \n");
        printf(" 5 -Exclui dados  \n");
        printf(" 6 -Saida\n");
        printf(" Escolha uma opcao: ");
        scanf("%d", &op);
        getchar();

        system("clear");
        switch (op)
        {
        case 1:
            inclui(p, tam); //passa como parametro o ponteiro para a estrutura e o n. de bytes da desta
            break;

        case 2:
            lista(p, tam);
            break;

        case 3:
            pesquisaMultiplos(p, tam);
            break;

        case 4:
            altera(p, tam);
            break;

        case 5:
            exclui(p, tam);
            break;

        case 6:
            exit(0);
            break;

        default:
            printf("\n opcao invalida\n");
        }
    };
}

void inclui(struct dados *ps, int tam)
{

    system("clear");

    FILE *p, *p1;
    int cont = 0;
    int i;

    if ((p1 = fopen("contador.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o contador.txt");
        exit(0);
    }
    else
    {
        fscanf(p1, "%d", &cont);
        printf("Registro de numero: %d\n\n", cont);
        fclose(p1);

        if ((p = fopen("arquivo.txt", "a")) == NULL)
        {
            printf("Erro ao abrir o arquivo.txt");
            exit(0);
        }
        else
        {
            printf("Digite o nome: ");
            scanf("%s", ps->nome);
            getchar();
            printf("Digite a data de nascimento (Dia, Mes e Ano): \n");
            scanf("%d%d%d", &ps->dataNascimento.dia, &ps->dataNascimento.mes, &ps->dataNascimento.ano);
            getchar();
            printf("Digite o estado civil (Solteiro, Casado, Separado, Divorciado, Viuvo): ");
            scanf("%s", ps->estadoCivil);
            getchar();
            printf("Digite o salario: ");
            scanf("%lf", &ps->salario);
            getchar();

            fwrite(ps, tam, 1, p);
            fclose(p);

            cont++;

            p1 = fopen("contador.txt", "w");
            fprintf(p1, "%d", cont);
            fclose(p1);

            printf("\n\nRegistro efetuado com sucesso!");
            printf("\nPressione alguma tecla para continuar...");
            getchar();
            system("clear");
        }
    }
}

void lista(struct dados *ps, int tam)
{

    system("clear");

    FILE *p, *p1;
    int i, qtdMostrada = 0, cont, comp;

    if ((p1 = fopen("contador.txt", "r")) == NULL)
    {
        printf("Erro ao abrir contador.txt");
        exit(0);
    }
    else
    {
        fscanf(p1, "%d", &cont);
        fclose(p1);
        /*r" --> Abre o arquivo apenas para leitura.*/
        if ((p = fopen("arquivo.txt", "r")) == NULL)
        {
            printf("Erro ao abrir contador.txt");
            exit(0);
        }
        else
        {
            for (i = 0; i < cont; i++)
            {
                comp = i * tam; //calcula o n. de bytes para posicionar o ponteiro do arquivo
                
                fseek(p, comp, 0);    //posiciona o ponteiro no inicio do registro dentro do arquivo
                fread(ps, tam, 1, p); //le o registro
                if (ps->nome[0] != '*')
                {
                    printf("\nNome: %s\n", ps->nome);
                    printf("Data de Nascimento: %d / %d / %d\n", ps->dataNascimento.dia, ps->dataNascimento.mes, ps->dataNascimento.ano);
                    printf("Estado civil: %s\n", ps->estadoCivil);
                    printf("Salario: R$%.2lf\n", ps->salario);
                    qtdMostrada++;
                }

            }
            fclose(p);
            if(qtdMostrada == 0){
                printf("Ainda nao ha registros no arquivo.txt");
            }
            printf("\n\nPressione alguma tecla para continuar...");
            getchar();
            system("clear");
        }
    }
}

int pesquisa(struct dados *ps, int tam)
{
    FILE *p;
    FILE *p1;

    char pesqNome[20], resp;
    int y, x, cont, comp, resultCont = 0;

    if ((p1 = fopen("contador.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o contador.txt");
        exit(0);
    }
    else
    {
        fscanf(p1, "%d", &cont);
        fclose(p1);

        if ((p = fopen("arquivo.txt", "r")) == NULL)
        {
            printf("Erro ao abrir o arquivo.txt");
            exit(0);
        }
        else
        {
            system("clear");
            printf("Digite o nome: ");
            scanf("%s", pesqNome);
            getchar();

            for (y = 0; y < cont; y++)
            {
                comp = y * tam;
                fseek(p, comp, 0);
                fread(ps, tam, 1, p);

                for (x = 0; pesqNome[x] != '\0'; x++)
                {
                    if (pesqNome[x] != ps->nome[x])
                        break;

                    if (pesqNome[x + 1] == '\0' && ps->nome[x + 1] == '\0')
                    {
                        return y;
                    }
                }
            }

            fclose(p);

            return -1;
        }
    }
}

void pesquisaMultiplos(struct dados *ps, int tam)
{
    system("clear");

    FILE *p;
    FILE *p1;

    char pesqNomeOuES[20], resp; // pesqNomeOuS => Guarda o valor a ser pesquisado (Nome ou Estado Civil);
    int y, x, op, cont, comp, pesqMes, resultCont = 0;
    double limInferiorSal, limSuperiorSal, salario;

    if ((p1 = fopen("contador.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o contador.txt");
        exit(0);
    }
    else
    {
        fscanf(p1, "%d", &cont);
        fclose(p1);

        if ((p = fopen("arquivo.txt", "r")) == NULL)
        {
            printf("Erro ao abrir o arquivo.txt");
            exit(0);
        }
        else
        {
            printf("\n1 - Pesquisar por nome");
            printf("\n2 - Pesquisar por estado civil");
            printf("\n3 - Pesquisar por faixa salarial");
            printf("\n4 - Pesquisar por aniversariantes de um mesmo mes");
            printf("\nEscolha um opção: ");
            scanf("%d", &op);
            getchar();

            system("clear");
            switch (op)
            {
            case 1:
                printf("Digite o nome: ");
                scanf("%s", pesqNomeOuES);
                getchar();

                for (y = 0; y < cont; y++)
                {
                    comp = y * tam;
                    fseek(p, comp, 0);
                    fread(ps, tam, 1, p);

                    for (x = 0; pesqNomeOuES[x] != '\0'; x++)
                    {
                        if (pesqNomeOuES[x] != ps->nome[x])
                        {
                            break;
                        }

                        if (pesqNomeOuES[x + 1] == '\0' && ps->nome[x + 1] == '\0')
                        {
                            printf("\nRegistro: %d\n", y);
                            printf("Nome: %s\n", ps->nome);
                            printf("Estado civil: %s\n", ps->estadoCivil);
                            printf("Data de Nascimento: %d / %d /%d \n", ps->dataNascimento.dia, ps->dataNascimento.mes, ps->dataNascimento.ano);
                            printf("Salario: R$%.2lf \n", ps->salario);
                            resultCont++;
                        }
                    }
                }
                break;
            case 2:
                printf("Digite o estado civil: ");
                scanf("%s", pesqNomeOuES);
                getchar();

                for (y = 0; y < cont; y++)
                {
                    comp = y * tam;
                    fseek(p, comp, 0);
                    fread(ps, tam, 1, p);

                    for (x = 0; pesqNomeOuES[x] != '\0'; x++)
                    {
                        if (pesqNomeOuES[x] != ps->estadoCivil[x])
                        {
                            break;
                        }

                        if (pesqNomeOuES[x + 1] == '\0' && ps->estadoCivil[x + 1] == '\0')
                        {
                            printf("\nRegistro: %d\n", y);
                            printf("Nome: %s\n", ps->nome);
                            printf("Estado civil: %s\n", ps->estadoCivil);
                            printf("Data de Nascimento: %d / %d /%d \n", ps->dataNascimento.dia, ps->dataNascimento.mes, ps->dataNascimento.ano);
                            printf("Salario: R$%.2lf \n", ps->salario);
                            resultCont++;
                        }
                    }
                }
                break;
            case 3:
                do
                {
                    printf("Digite o limite inferior da faixa salarial: ");
                    scanf("%lf", &limInferiorSal);
                    getchar();
                    printf("Digite o limite superior da faixa salarial: ");
                    scanf("%lf", &limSuperiorSal);
                    getchar();

                    if (limInferiorSal >= limSuperiorSal)
                    {
                        system("clear");
                        printf("Limite inferior nao pode ser maior ou igual ao superior...");
                        getchar();
                        system("clear");
                    }
                } while (limInferiorSal >= limSuperiorSal);

                for (y = 0; y < cont; y++)
                {
                    comp = y * tam;
                    fseek(p, comp, 0);
                    fread(ps, tam, 1, p);

                    if (ps->salario >= limInferiorSal && ps->salario <= limSuperiorSal)
                    {
                        printf("\nRegistro: %d\n", y);
                        printf("Nome: %s\n", ps->nome);
                        printf("Estado civil: %s\n", ps->estadoCivil);
                        printf("Data de Nascimento: %d / %d /%d \n", ps->dataNascimento.dia, ps->dataNascimento.mes, ps->dataNascimento.ano);
                        printf("Salario: R$%.2lf \n", ps->salario);
                        resultCont++;
                    }
                }
                break;
            case 4:
                do
                {
                    printf("Digite o numero do mes (1 - 12): ");
                    scanf("%d", &pesqMes);
                    getchar();

                    if (pesqMes <= 0 || pesqMes > 12)
                    {
                        system("clear");
                        printf("O mes precisar estar dentro do intervalo fechado entre 1 e 12");
                        getchar();
                        system("clear");
                    }
                } while (pesqMes <= 0 || pesqMes > 12);

                for (y = 0; y < cont; y++)
                {
                    comp = y * tam;
                    fseek(p, comp, 0);
                    fread(ps, tam, 1, p);

                    if (ps->dataNascimento.mes == pesqMes)
                    {
                        printf("\nRegistro: %d\n", y);
                        printf("Nome: %s\n", ps->nome);
                        printf("Estado civil: %s\n", ps->estadoCivil);
                        printf("Data de Nascimento: %d / %d /%d \n", ps->dataNascimento.dia, ps->dataNascimento.mes, ps->dataNascimento.ano);
                        printf("Salario: R$%.2lf \n", ps->salario);
                        resultCont++;
                    }
                }
                break;

            default:
                printf("Opcao invalida");
                return;
            }

            fclose(p);
            if (resultCont == 0)
            {
                printf("Nao encontramos resultados para a sua pesquisa...");
            }

            printf("\n\nPressione alguma tecla para continuar...");
            getchar();
            system("clear");
        }
    }
}

void altera(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg, opc;
    char resp;
    int n_bytes;

    system("clear");

    do
    {
        n_reg = pesquisa(ps, tam);
        if (n_reg == -1)
        {
            printf("Não encontramos resultados para sua pesquisa...\n");
            printf("Deseja tentar novamente? (s) - sim\n");
            scanf("%c", &resp);
            getchar();
        }
        else
        {
            break;
        }
        if (resp != 's')
        {
            system("clear");
            return;
        }

    } while (resp == 's');

    if ((p = fopen("arquivo.txt", "r+")) == NULL)
    {
        printf("Erro ao abrir o arquivo.txt");
        exit(0);
    }
    else
    {
        n_bytes = tam * n_reg;

        fseek(p, n_bytes, 0); //posioiona o ponteiro do arquivo no registro a ser alterado
        fread(ps, tam, 1, p); //le registro do arquivo

        printf("Alterando registro: %d\n", n_reg);
        printf("\n1 - Alterar somente salario");
        printf("\n2 - Alterar todos os dados");
        printf("\nEscolha uma das opcoes: ");
        scanf("%d", &opc);
        getchar();

        system("clear");
        switch (opc)
        {
        case 1:
            printf("\nDigite um novo valor para o salario: ");
            scanf("%lf", &ps->salario);
            getchar();
            break;
        case 2:
            printf("\nDigite um novo valor para o nome: ");
            scanf("%s", ps->nome);
            getchar();
            printf("Digite um novo valor para o salario: ");
            scanf("%lf", &ps->salario);
            getchar();
            printf("Digite um novo valor para o estado civil (Solteiro, Casado, Divorciado, Separado, Viuvo): ");
            scanf("%s", ps->estadoCivil);
            getchar();
            printf("Digite um novo valor para a data de nascimento (Data, Mes e Ano): \n");
            scanf("%d %d %d", &ps->dataNascimento.dia, &ps->dataNascimento.mes, &ps->dataNascimento.ano);
            getchar();
            break;
        default:
            printf("Opcao invalida...");
            break;
        }
        if (opc == 1 || opc == 2)
        {
            system("clear");
            fseek(p, n_bytes, 0);  //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
            fwrite(ps, tam, 1, p); //escreve o registro no arquivo
            printf("Dados alterados com sucesso!");
        }
        printf("\nPressione alguma tecla para continuar...");
        getchar();

        fclose(p);
    }
    system("clear");
}

void exclui(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;
    int n_bytes;
    char resp;

    system("clear");

    do
    {
        n_reg = pesquisa(ps, tam);
        if (n_reg == -1)
        {
            printf("Não encontramos resultados para sua pesquisa...\n");
            printf("Deseja tentar novamente? (s) - sim\n");
            scanf("%c", &resp);
            getchar();
        }
        else
        {
            break;
        }
        if (resp != 's')
        {
            system("clear");
            return;
        }

    } while (resp == 's');

    if ((p = fopen("arquivo.txt", "r+")) == NULL)
    {
        printf("Erro ao abrir o arquivo.txt");
        exit(0);
    }
    else
    {
        n_bytes = tam * n_reg;

        fseek(p, n_bytes, 0); //posioiona o ponteiro do arquivo no registro a ser apagado
        fread(ps, tam, 1, p); //le o registro do arquivo

        strcpy(ps->nome, "*");
        strcpy(ps->estadoCivil, "*");
        ps->dataNascimento.dia = 0;
        ps->dataNascimento.mes = 0;
        ps->dataNascimento.ano = 0;
        ps->salario = 0;

        fseek(p, n_bytes, 0);  //posiciona o ponteiro do arquivo no inicio do regisro a ser apagado
        fwrite(ps, tam, 1, p); //escreve o registro

        system("clear");
        printf("Registro deletado com sucesso!\n");
        printf("Pressione alguma tecla para continuar...");
        getchar();

        fclose(p);
    }
    system("clear");
}
