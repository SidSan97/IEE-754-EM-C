
                        /*====================By Sidnei Santiago====================*/


#include<stdio.h>
#include<locale.h>                           

int binario(int n, int i)
{
    int numero;
    for (i--; i >= 0; i--)
   {
      numero = n >> i;
      if (numero & 1)
          printf("1");
      else
         printf("0");
    }
}
typedef union
{
      float valor;
      struct
      {
            unsigned int mantissa :  23;
            unsigned int expoente :  8;
            unsigned int sinal    :  1;
       } normalizador;
} padraoiee;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 1E");
           padraoiee var;
    printf("\n\t\t==========CONVERSOR IEE 754==========\n");
    printf("\nInforme um valor em ponto fixo ou ponto flutuante: ");
           scanf("%f",&var.valor);
           printf("%d ",var.normalizador.sinal);
           binario(var.normalizador.expoente, 8);
           printf(" ");
           binario(var.normalizador.mantissa, 23);
           printf("\n");

    printf("\nO sinal �: %u", var.normalizador.sinal, 1);
    printf("\nO expoente �: %u", var.normalizador.expoente, 8);
    printf("\nA mantissa �: %u", var.normalizador.mantissa, 23);
           return 0;
}