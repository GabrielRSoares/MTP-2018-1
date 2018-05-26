#include<stdio.h>

int analise(int m ,int n)
{
     int M, N;
     
     if(m == 0)
	 {
         n++;
          
         return n;
     } 
	   
     else if(m > 0 && n == 0)
	 {
         m--;
         n = 1;
         
         analise(m ,n);
     }
         
    else if(m > 0 && n > 0)
     {
         M = m - 1;
         n--;
         
         N = analise(m, n);
         analise (M ,N);
     }
}

int main()
{
	 int m ,n; 
	  
	 printf("digite os valores de m e n respectivamente : ");
	 scanf("%i %i",&m ,&n);
	 getchar();
	 
	 printf("%i",analise(m ,n));
	 
	 return 0;
}
