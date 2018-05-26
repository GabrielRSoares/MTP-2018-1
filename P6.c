//Gabriel Resende Soares
//11721ECP011

#include<stdio.h>
#define M 20

int soma(int v[M])
{
	 int s = 0 ,i;
	  
	 for(i = 0 ;i <= M ;i++)
	 	 s = s + v[i];
	   	 
	 return s; 	 
}

void divisao(int a , int v[M])
{	   
	 printf("\nmedia = %.2f",soma(v) / (float)a);
}

int main()
{
	 int i ,a ,v[M];
	  
	 for(i = 0 ;i <= M ;i++)
	     v[i] = 0;
	     
	 printf("Quandos numeros serao inseridos(sendo entre 5 e 20):");
	 scanf("%i",&a);
	 getchar();
	 
	 if(a < 5 || a > 20)
	 {  
	     printf("opcao invalida");
	     return 0;
	 }
	 for(i = 0 ;i <= a - 1 ;i++)
	 {
	 	 printf("posicao %i = ",i + 1);
	 	 scanf("%i",&v[i]);
	 	 getchar();
	 }
	 
	 divisao(a ,v);
	 
	 return 0;
}
