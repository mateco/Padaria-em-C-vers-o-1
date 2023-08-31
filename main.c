#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opc;
    int Qtd;
    float r, rf;
    float P1, P2;
    float valor_Total, valor_Parcela;
    int Num_Parcelas;
                //                      Tabela da Berenice
            printf("                  Lojinha da Berenice\n");
            printf("    -------------------------------------------------\n");
            printf("    |Item (c�digo) | Nome do Item  | Valor (Unidade)|\n");
            printf("    |--------------|---------------|----------------|\n");
            printf("    |      1       | P�o de Forma  |    R$ 7,50     |\n");
            printf("    |--------------|---------------|----------------|\n");
            printf("    |      2       |P�o de Centeio |    R$ 8,69     |\n");
            printf("    |--------------|---------------|----------------|\n");
            printf("    |      3       | Broa de Milho |    R$ 5,00     |\n");
            printf("    |--------------|---------------|----------------|\n");
            printf("    |      4       |    Sonho      |    R$ 4,50     |\n");
            printf("    |--------------|---------------|----------------|\n");
            printf("    |      5       |   Tuba�na     |    R$ 3.25     |\n");
            printf("    -------------------------------------------------\n");
            printf("               Digite o c�digo do produto:  ");
            scanf("%i" , &opc);

        //                  Produto Numero 1;

        switch (opc){

            case 1:
            printf("\n  Quantos p�es de forma voc� quer?  ");
            scanf("%i", &Qtd);

            r = Qtd * 7.50;
            printf("\n  O valor total �: R$%.2f  " , r);
            break;
        //                  Produto Numero 2;

            case 2:
            printf("\n  Quantos p�es de centeio voc� quer?  ");
            scanf("%i" , &Qtd);

            r = Qtd * 8.69;
            printf("\n  O valor total �: R$%.2f  " , r);
            break;
        //                  Produto Numero 3;

            case 3:
            printf("\n  Quantas broas de milho voc� quer?  ");
            scanf("%i" , &Qtd);

            r = Qtd * 5.00;
            printf("\n  O valor total �: R$%.2f  " , r);
            break;
        //                  Produto Numero 4;

            case 4:
            printf("\n  Quantos sonhos voc� quer?  ");
            scanf("%i" , &Qtd);

            r = Qtd * 4.50;
            printf("\n  O valor total �: R$%.2f  " , r);
            break;
        //                  Produto Numero 5;

            case 5:
            printf("\n  Quantas tuba�nas voc� quer?  ");
            scanf("%i" , &Qtd);

            r = Qtd * 3.25;
            printf("\n  O valor total �: R$%.2f  " , r);
            break;

            default:
            printf("\n  Op��o n�o encontrada!   ");
}
        //                     Tabela da Forma de pagamento
            printf("\n\n              Escolha a forma de pagamento:\n");
            printf("             ------------------------------\n");
            printf("             |     1        |   � vista   |\n");
            printf("             |--------------|-------------|\n");
            printf("             |     2        |   � prazo   |\n");
            printf("             ------------------------------\n");
            printf("              Digite a forma de pagamento:  ");
            scanf("%i" , &opc);
        //                    Pagamento a vista;
        switch(opc){

        case 1:
            printf("\n  Com quantos reais voc� ir� realizar a compra?  ");
            scanf("%f", &P1);

        if(r > P1) {
            printf("\n  Valor insuficiente, compra cancelada.\n");
}
        //                  Descontos do pagamento a vista;
        else {

        if(r <= 50) {
            rf = r * 0.95;
            printf("\n Foi adicionado um desconto de 5 porcento na sua compra, o novo valor � de: R$%.2f\n\n", rf);
}
        else if(r >= 50 && r < 100) {
            rf = r * 0.9;
            printf("\n Foi adicionado um desconto de 10 porcento na sua compra, o novo valor � de: R$%.2f\n\n", rf);
}
        else {
            rf = r * 0.82;
            printf("\n Foi adicionado um desconto de 18 porcento na sua compra, o novo valor � de: R$%.2f\n\n", rf);
}
            printf("    Compra realizada! Seu troco foi de: R$%.2f", P1 - rf);
}
        break;
        //                      Pagamento a prazo;
        case 2:
            printf("\n  Em quantas parcelas voc� quer realizar a compra?  ");
            scanf("%i", &Num_Parcelas);

        //                  Acrescimos do pagamento a prazo;
        if (Num_Parcelas <= 3) {
            valor_Total = r * 1.05;
            valor_Parcela = valor_Total / Num_Parcelas;
            printf("\n  Foi adicionado um acr�scimo de 5 porcento na sua compra,o novo valor total � de: R$%.2f\n\n", valor_Total);
}
        else {
            valor_Total = r * 1.08;
            valor_Parcela = valor_Total / Num_Parcelas;
            printf("\n  Foi adicionado um acr�scimo de 8 porcento na sua compra, o novo valor � de: R$%.2f\n\n", valor_Total);
}
            printf("    O numero de parcelas �: %d\n\n  E o valor de cada parcela � de: R$%.2f\n\n", Num_Parcelas, valor_Parcela);
}

            printf("\n\n                    Obrigado pela prefer�ncia!!!\n");
    return 0;
}
