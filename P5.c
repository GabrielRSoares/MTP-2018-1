//Gabriel Resende Soares
//11721ECP011

#include<stdio.h>

int print ()
{
     int a ;
     printf ("digite uma opcao:\n" 
     " 1-para codifica\n"
     " 2-para decofica\n"
	 " 3-para sair\n" );
     scanf("%d",&a); getchar();
     return a;
}

int main()
{
     int  vec[800],b ,*pi ,n ,i  ,o = 0 ,ve[200] ,u = 1;
     char *pc ,s[256] ,sec[256], *po;
     void  *p;
     
     for(i = 0 ;i < 255 ; i++)
            s[i] = '\0';
            
     b = print();
do{
     switch(b)
     {
     	 case 1:
     	 	 u = 0;
     	 	 printf("\nEntre com a palavra a ser codificada\n: ");
//		     for(i = 0 ; i <= 255 ; i++)
//			{
//		         s[i] = getchar();
//			     if(s[i] == 0x0A)
//				{
//					 s[i] = '\0';
//					 break;
//				} 
//		    }

 
              fgets(s,256,stdin);
              printf("\nMensagem codificada: ");
     	 	 for(i = 0 ;s[i] != '\0' ;i+=4)
			{
				  pi = ((int*)(&s[i]));
				 //ve[i] = *pi ;	     
				 printf("%d",*pi);
	
			  	 printf(", ");
				     
				
			}
     	 	  printf("\n\ndeseja sabe suas opcoes ?\n"
			 "1-Sim\n"
			 "2-nao\n");
			 scanf("%d", &n); getchar(); 
			  
			  if(n == 1)
			     b = print();
			  else   
                 scanf("%d",&b); getchar(); 
		  		 
     	 	
     	 	 
     	 	 break;
     	 	 
     	 case 2:
     	 	
			   printf("\nEntre com os numeros para ser descodificados\n");
			   while(1)
			   {
			   	scanf("%d%c",&vec[o],sec);
			   	     if(sec != ',')
			   	        break;
			   	 getchar();
			   	 o++;     
			   }
			   
			   
			   printf("%s",(char*)vec);
			   
			   
		/*	   while(1)
			   {
			   	if(vec[o] != ',')
			   	    scanf("%d",&vec[o]); getchar;
                 o++;
			   }
			   for(i = 0 ;s[i] != '\0' ;i++ )
			{
				 pi = &vec[i]  ;	     
				 printf("%c",(char)*pi);
				
			}
			   
			   
			*/   
//     	  	 for(i = 0 ; i <= 255 ; i++)
//			{
//		         sec[i] = getchar();
//			     if(sec[i] == 0x0A)
//				{
//					 sec[i] = '\0';
//					 break;
//				} 
//				 printf("%c",sec[i]);
//		    }
//     	  	 
//     	  	   
//				 for(o = 0 ;o <= i ;o++)   
//     	  	    {
//     	  	    	// if(sec[o] != ','
//     	  	    	 //    for (j);
//  	     
//                  pc = &sec[o];
//                  
//                  vec[o] = *pc ;
//                  
//                  sec[o] = vec[o];
//                 
//				       
//				}
//     	  	      
//     	  	     printf("%s",(char*)vec);
     	  	     
     	     printf("\n\ndeseja sabe suas opcoes ?\n"
			 "1-Sim\n"
			 "2-nao\n");
			 scanf("%d", &n); getchar(); 
			  
			  if(n == 1)
			     b = print();
			  else   
                 scanf("%d",&b); getchar(); 
		  		 
     	 	
     	 	 
     	 	 break;
     	 	 
     	 default:
     	 	 printf("opcao invalida, deseja sabe suas opcoes ?\n"
			 "1-Sim\n"
			 "2-nao\n");
			 scanf("%i", &n); getchar(); 
			  
			  if(n == 1)
			     b = print();
			  else   
                 scanf("%d",&b); getchar(); 
		  		 
			 break;
				     	 	 
	 }
 }while(b != 3);
     return 0;
}
