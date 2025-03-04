#include <stdio.h>
#include <stdlib.h>

int main(void)
{
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(void) {
    int MovimentacaoBispo()//função do movimento do Bispo diagonal direita.
    {
        int lb = 1;//Linha a onde o Bispo se inicia.
        char cb = 'C';//Coluna a onde o Bispo se inicia.
        int lBispo;//Leitura(Entrada) da Linha do Bispo.
        char cBispo;//Leitura(Entrada) da coluna do Bispo.
        //Entrada de dados.
        printf("Qual movimentação de Linha do Bispo: ");
        scanf("%d", &lBispo);
        printf("Qual movimentação de Coluna do Bispo: ");
        scanf(" %c", &cBispo);
        printf("Movimento: \n");
        //Saida do resultados.
        if (lBispo && cBispo > lb && cb)
        {
            while (lb <= lBispo)
            {
                while (cb <= cBispo)
                {
                    printf("Linha : %d | Coluna: %c \n", lb, cb);//Ira mostras A linha e a coluna que a peça estara passado.
                    cb++;
                    break;
                }
                lb++;
            }
            printf("\n");
        }

        return 0;
    }
    int MovimentacaoTorre()//Função do movimentação da Torre.
    {

        int lt = 1;//Linha a onde a Torre inicia.
        char ct = 'A';//Coluna a onde a Torre se inicia.
        int lTorre, cTorre;//Leitura(Entrada) da movimentação da Torre.

        printf("Qual movimentação de Linha do Torre: \n");
        scanf("%d", &lTorre);
        printf("Qual movimentação de Coluna do Torre: \n");
        scanf(" %c", &cTorre);
        printf("Movimento: \n");
        //Saida dos resultados.
        int ct_num = ct - 'A';//declarando uma variavel para que consiga transformar oh "char" em Número pra que seja usado durante a logica do movimento.
        //Movimento para cima.
        if (lt < lTorre)
        {
            while (lt <= lTorre)
            {
                printf("Linha : %d | Coluna: %c \n", lt, ct);
                lt++;
            }
        }
        //Movimento para baixo.
        else if (lTorre < lt)
        {
            while (lt >= lTorre)
            {
                printf("Linha : %d | Coluna: %c \n", lt, ct);
                lt--;
            }
        }
        //Movimentação para direita.
        else if (ct_num < cTorre - 'A')
        {
            while (ct_num <= cTorre - 'A')
            {
                printf("Linha : %d | Coluna: %c \n", lt, ct_num + 'A');
                ct_num++;
            }
        }
        //Movimentação pra esquerda.
        else if (ct_num > cTorre - 'A')
        {
            while (ct_num >= cTorre - 'A')
            {
                printf("Linha : %d | Coluna: %c \n", lt, ct_num + 'A');
                ct_num--;
            }
        }

        return 0;
    }
    int MovimentacaoRainha()//Movimentação da Rainha.
    {
        int lRa = 1;//Linha a onde a Rainha inicia.
        char cRa = 'E';//Coluna a onde a Rainha inicia.
        int lRainha, cRainha;//Leitura(Entrada) da movimentação da Rainha.
        int opcao;//Variavel pra escolher que tipo de movimento a Rainha deve fazer.
        printf("Qual movimento quer fazer? 1-[Vertical/Horizontal] ou 2-[Diagonal]\n");//Escolha entre os dois tipos de movimentos possiveis da Rainha.
        scanf("%d", &opcao);
        //Separação da escolha.
        switch (opcao)
        {
        case 1:
        //Caso a Escolha seja (1) a rainha fara o movimento tanto quanto Vertical ou Horizontal.
            printf("Qual movimentação de Linha da Rainha: \n");
            scanf("%d", &lRainha);

            printf("Qual movimentação de Coluna da Rainha: \n");
            scanf(" %c", &cRainha);
            printf("Movimento: \n");

            int cRa_num = cRa - 'E';
            //Saida do resultados.
            if (lRa < lRainha)
            {
                while (lRa <= lRainha)
                {
                    printf("Linha : %d | Coluna: %c \n", lRa, cRa);
                    lRa++;
                }
            }
            else if (lRainha < lRa)
            {
                while (lRa >= lRainha)
                {
                    printf("Linha : %d | Coluna: %c \n", lRa, cRa);
                    lRa--;
                }
            }

            else if (cRa_num < cRainha - 'E')
            {
                while (cRa_num <= cRainha - 'E')
                {
                    printf("Linha : %d | Coluna: %c \n", lRa, cRa_num + 'E');
                    cRa_num++;
                }
            }
            else if (cRa_num > cRainha - 'E')
            {
                while (cRa_num >= cRainha - 'E')
                {
                    printf("Linha : %d | Coluna: %c \n", lRa, cRa_num + 'E');
                    cRa_num--;
                }
            }
            break;
        case 2:
        //Caso a escolha seja (2) a Rainha fara o movimento diagonal para direita.
            int lRa = 1;
            char cRa = 'E';
            int lRainha;
            char cRainha;
            printf("Qual movimentação de Linha da Rainha ");
            scanf("%d", &lRainha);
            printf("Qual movimentação de Coluna da Rainha: ");
            scanf(" %c", &cRainha);
            printf("Movimento: \n");
            //Saida dos resultados.
            if (lRainha && cRainha > lRa && cRa)
            {
                while (lRa <= lRainha)
                {
                    while (cRa <= cRainha)
                    {
                        printf("Linha : %d | Coluna: %c \n", lRa, cRa);
                        cRa++;
                        break;
                    }
                    lRa++;
                }
                printf("\n");
            }
            break;
        }
        return 0;
    }

    int MovimentacaoCavalo()//Função da movimentação do cavalo.
    {
        int lCavalo;//Leitura(Entrada) do movimento do cavalo.
        char cCavalo;//Leitura(Entrada) do movimento do cavalo.
        printf("Qual movimentação de Linha do Cavalo ");
        scanf("%d", &lCavalo);
        printf("Qual movimentação de Coluna do Cavalo: ");
        scanf(" %c", &cCavalo);
        printf("Movimento: \n");
        //Saida dos resultados.
        //Como oh cavalo faz o movimento em L aqui ele fara dois pra cima e um para algum lado.
        //O lCa e o cCa foram iniciados com esses valores pois e a onde o cavalo se inicia no tabuleiro.
        for (int lCa = 1, cCa = 2; lCa <= lCavalo && cCa <= cCavalo; lCa++, cCa++)
        {
            char coluna = 'B';
            printf("Linha : %d | Coluna: %c \n", lCa, coluna);
            if (lCa == lCavalo)
            {
                printf("Linha : %d | Coluna: %c \n", lCa, cCavalo);
            }
        }

        return 0;
    }
    //Aqui ta sendo definido as peças do tabuleiro(meramente demostrativo).
#define REI 'K'
#define RAINHA 'Q'
#define TORRE 'R'
#define BISPO 'B'
#define CAVALO 'N'
#define PEAO 'P'

    // Definir a estrutura para o tabuleiro de xadrez.
    typedef struct
    {
        char peça;
        int cor; // 0 para branco, 1 para preto.
    } Casa;

    // Definir a função para imprimir o tabuleiro de xadrez.
    void imprimirTabuleiro(Casa tabuleiro[8][8])
    {
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                printf("%c ", tabuleiro[i][j].peça);
            }
            printf("\n");
        }
    }

    // Defina a função para inicializar o tabuleiro de xadrez
    void inicializarTabuleiro(Casa tabuleiro[8][8])
    {
        int i, j;
        // Inicialize as peças brancas
        for (i = 0; i < 8; i++)
        {
            tabuleiro[1][i].peça = PEAO;
            tabuleiro[1][i].cor = 0;
        }
        tabuleiro[0][0].peça = TORRE;
        tabuleiro[0][0].cor = 0;
        tabuleiro[0][1].peça = CAVALO;
        tabuleiro[0][1].cor = 0;
        tabuleiro[0][2].peça = BISPO;
        tabuleiro[0][2].cor = 0;
        tabuleiro[0][3].peça = RAINHA;
        tabuleiro[0][3].cor = 0;
        tabuleiro[0][4].peça = REI;
        tabuleiro[0][4].cor = 0;
        tabuleiro[0][5].peça = BISPO;
        tabuleiro[0][5].cor = 0;
        tabuleiro[0][6].peça = CAVALO;
        tabuleiro[0][6].cor = 0;
        tabuleiro[0][7].peça = TORRE;
        tabuleiro[0][7].cor = 0;

        // Inicialize as peças pretas
        for (i = 0; i < 8; i++)
        {
            tabuleiro[6][i].peça = PEAO;
            tabuleiro[6][i].cor = 1;
        }
        tabuleiro[7][0].peça = TORRE;
        tabuleiro[7][0].cor = 1;
        tabuleiro[7][1].peça = CAVALO;
        tabuleiro[7][1].cor = 1;
        tabuleiro[7][2].peça = BISPO;
        tabuleiro[7][2].cor = 1;
        tabuleiro[7][3].peça = RAINHA;
        tabuleiro[7][3].cor = 1;
        tabuleiro[7][4].peça = REI;
        tabuleiro[7][4].cor = 1;
        tabuleiro[7][5].peça = BISPO;
        tabuleiro[7][5].cor = 1;
        tabuleiro[7][6].peça = CAVALO;
        tabuleiro[7][6].cor = 1;
        tabuleiro[7][7].peça = TORRE;
        tabuleiro[7][7].cor = 1;
    }
    int Xadrez()//Função pra inicar o jogo de xadrez.
    {
        printf("Desafio Jogo de Xadrez\n");
        //Chamando a função do tabuleiro.
        Casa tabuleiro[8][8];
        inicializarTabuleiro(tabuleiro);
        imprimirTabuleiro(tabuleiro);

        char opcao;//Variavel pra escolha de qual peça movimentar.

        printf("Qual peça quer mover? [(A)Bispo, (B)Torre, (C)Cavalo, (D)Rainha.] \n");
        scanf("%c", &opcao);
        //Selação de escolha das peças
        switch (opcao)
        {
        case 'a':
        case 'A':
            MovimentacaoBispo();
            break;
        case 'b':
        case 'B':
            MovimentacaoTorre();
            break;
        case 'c':
        case 'C':
            MovimentacaoCavalo();
            break;
        case 'd':
        case 'D':
            MovimentacaoRainha();
            break;
        default:
            break;
        }
    }
    Xadrez();//Chamar a função pra iniciar o jogo.
    return 0;
}
return 0;
}
