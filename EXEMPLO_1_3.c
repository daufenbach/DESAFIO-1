#include <stdio.h>

int main ()
{		
		// system ("cls"); - serve para apagr a memoria do console

		int A = 0;
		int B = 0;
		
		printf ("Informe um valor para A inteiro : \n");
		
		scanf("%i", &A);
		
		printf ("Informe um valor para B inteiro : \n");
		
		scanf("%i", &B);
		
		if (A>B)
		{
			printf ("\n \n A e maior do que B");
		}	
		else
		{
			if(A<B)
			{
				printf ("\n \n B e maior do que A");
			}
			else
			{
				printf ("\n \n A e B sao iguais");
			}
		}
		// system ("pause"); serve para pausar o ciclo de máquina
	
		return 1;
}
