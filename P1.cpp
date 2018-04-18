//Nome:Gabriel Resende Soares 
//Matriculo:11721ECP011
#include <stdio.h>

int main()
{
	char bits[256];
	int i = 0,e = 0;
	
	printf("entre com um numero binario:");
	scanf("%s",&bits[i]);
	
	fflush(stdin);
	
	while(bits[i]!='\0')
	{
	
		if(bits[i] == '0')
		{
		   printf("0");
		   
           if(e == 0)
		   	    e = 0;
		   	
		   else if(e == 1)
		        e = 2;
			
		   else
		        e = 1;
		   	    
		}
		
		if(bits[i] == '1')
		{
		    printf("1");
		
		    if(e == 0)
		        e = 1;
		 
		    else if(e == 1)
		        e = 0;
		 
		    else
		        e = 2;  
        }
		i++;
			
	}
	   if(e == 0)
	    printf("  O numero e multiplo de 3");
	    
	   else
	    printf("  O numero nao e multiplo de 3"); 
	
	return 0; 
	}
