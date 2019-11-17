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
união typedef
{
      valor de flutuação;
      struct
      {
            não assinado int mantissa: 23;
            não assinado int expoente: 8;
            sinal int sem sinal: 1;
       normalizador;
} padraoiee;
int main ()
{
    setlocale (LC_ALL, "português");
    sistema ("cor 1E");
           padraoiee var;
    printf ("\ n \ t \ t ========== CONVERSOR IEE 754 ========== \ n");
    printf ("\ nInforme um valor no ponto fixo ou no ponto flutuante:");
           scanf ("% f", & var.valor);
           printf ("% d", var.normalizador.sinal);
           binário (var.normalizador.expoente, 8);
           printf ("");
           binário (var.normalizador.mantissa, 23);
           printf ("\ n");

    printf ("\ nO sinal é:% u", var.normalizador.sinal, 1);
    printf ("\ expoente é:% u", var.normalizador.expoente, 8);
    printf ("\ nA mantissa é:% u", var.normalizador.mantissa, 23);
           retornar 0;
}