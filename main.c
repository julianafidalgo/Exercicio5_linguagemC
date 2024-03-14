#define exercicio5
#include <stdio.h>
#include <stdlib.h>

#ifdef exercicio5 /* 5.	Receba dois valores a e b e os escreve com a mensagem: "São pares " ou "São ímpares". */
main()
{
int a, b;

printf ("Digite um numero inteiro: \n");
scanf ("%d", &a);

printf ("Digite mais um numero inteiro: \n");
scanf ("%d", &b);

if (a % 2 == 0 && b % 2 == 0) //se o resto dos numeros forem igual a zero
{
    printf ("\n Os numeros sao pares \n");
}
else if(a % 2 != 0 && b % 2 != 0) //se o resto dos numeros forem diferentes de zero
{
    printf ("\n Os numeros sao impares \n");
}
else if(a % 2 == 0 && b % 2 != 0) //se o resto do primeiro numero for zero e o do segundo numero for diferente de zero
{
    printf ("\n O numero %d e' par \n O numero %d e' impar \n", a, b);
}
else //se o resto do primeiro numero for diferente de zero e o do segundo numero for igual a zero
{
    printf ("\n O numero %d e' impar \n O numero %d e' par \n", a, b);
}
}
#endif
