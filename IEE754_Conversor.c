   / * ==================== Por Sidnei Santiago ==================== * /


#include <stdio.h>
#include <locale.h>                           

int binario (int n, int i)
{
    int numero;
    para (i--; i> = 0; i--)
   {
      numero = n >> i;
      if (numero & 1)
          printf ("1");
      outro
         printf ("0");
    }
}
uni�o typedef
{
      valor de flutua��o;
      struct
      {
            n�o assinado int mantissa: 23;
            n�o assinado int expoente: 8;
            sinal int sem sinal: 1;
       normalizador;
} padraoiee;
int main ()
{
    setlocale (LC_ALL, "portugu�s");
    sistema ("cor 1E");
           padraoiee var;
    printf ("\ n \ t \ t ========== CONVERSOR IEE 754 ========== \ n");
    printf ("\ nInforme um valor no ponto fixo ou no ponto flutuante:");
           scanf ("% f", & var.valor);
           printf ("% d", var.normalizador.sinal);
           bin�rio (var.normalizador.expoente, 8);
           printf ("");
           bin�rio (var.normalizador.mantissa, 23);
           printf ("\ n");

    printf ("\ nO sinal �:% u", var.normalizador.sinal, 1);
    printf ("\ expoente �:% u", var.normalizador.expoente, 8);
    printf ("\ nA mantissa �:% u", var.normalizador.mantissa, 23);
           retornar 0;
}