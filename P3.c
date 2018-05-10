
//Gabriel Resende Soares
//11721ECP011

#include<stdio.h>


int binario2 (int m, int e)
{int  a,r,f ,i ,Z[32] ,W[32] ;
	 	
	 printf ("%d(", m);
	 
	 r = m;
	 if(m < 0)
	 {
	 	 m = m *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Z[i] = m%2; 
	     m = m/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 W[i] = Z[f] ;
		     
		 if(a == 1){
		     if(W[i] == 0)
	             W[i] = 1;
			 else if(W[i] == 1){
                 a = 0;			 
			     W[i] = 0; }  	    
		 printf("%d", W[i]);
	     }
	      else
		   
	         printf("%d", W[i]);
		 
          
		}
	 printf (")");
	 
	 ;	 	   
	  

	
}

int binario (int n, int e)
{

	 int  t,a,r,f ,i ,Z[32] ,X[32] ;
	 	
	 printf ("%d(", n);
	 
	 r = n;
	 if(n < 0)
	 {
	 	 n = n *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Z[i] = n%2; 
	     n = n/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 X[i] = Z[f] ;
		     
		 if(a == 1){
		     if(X[i] == 0)
	             X[i] = 1;
			 else if(X[i] == 1){
			 
			    a = 0;
				 X[i] = 0;}   	    
		 printf("%d", X[i]);
	     }
	      else
		   
	         printf("%d", X[i]);
		 
          
		}
	 printf (")");
	 
	 if(e != 1 )	
	     return 0;
	 else if(e = 1)
	     return nte(r);
	 
	      	   
	 
}
    
     void nte(int r)
     {
	     int i ,p ,a = 0 ,X[32],Y[32],f;
	     
	     p = ~r;
	     printf(":%d(",p);
	     
	     if(p < 0)
	     {
	     	p = p *-1;
	     	a = 1;
		  }  
	     for(i = 0 ; i < 32 ; i++)
	    { 
		 X[i] = p%2; 
	     p = p/2;
	    }
	 
	     for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 Y[i] = X[f] ;
		  
		 if(a == 1){
		      if(Y[i] == 1){
			     a = 0;
	             Y[i] = 0;
				 }
			   else if(Y[i] == 0)
			     Y[i] = 1;
				    	    
		 printf("%d", Y[i]);
	     }
	      else 
	         printf("%d", Y[i]);
	}
		  
         	 
	     printf (")");
     } 
	   
void eehh (int n , int m)
{
     int z[32],x[32],c,l,t,a,r,f ,i ,Z[32] ,X[32] ,W[32],Y[32] ;
	 	
	 printf ("%d(", n);
	 r = n;
	 if(n < 0)
	 {
	 	 n = n *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Y[i] = n%2; 
	     n = n/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 X[i] = Y[f] ;
		     
		 if(a == 1){
		     if(X[i] == 0)
	             X[i] = 1;
			 else if(X[i] == 1){
	             a= 0;		 
			     X[i] = 0;}   	    
		 printf("%d", X[i]);
	     }
	      else
		   
	         printf("%d", X[i]);
		 
          
		}
	 printf (")");
	 
	 	 printf(" AND ");
	 	 
	 printf ("%d(", m);
	 
	 l = m;
	 if(m < 0)
	 {
	 	 m = m *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Z[i] = m%2; 
	     m = m/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 W[i] = Z[f] ;
		     
		 if(a == 1){
		     if(W[i] == 0)
	             W[i] = 1;
			 else if(W[i] == 1){
			     a = 0;
			     W[i] = 0;}   	    
		 printf("%d", W[i]);
	     }
	      else
		   
	         printf("%d", W[i]);
		 
          
		}
	 printf (")");
	 
	 c = r & l;
	 
	 printf("\n%d(", c);
	 
	  if(c < 0)
	 {
	 	 c = c *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 z[i] = c%2; 
	     c = c/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 x[i] = z[f] ;
		     
		 if(a == 1){
		     if(x[i] == 0)
	             x[i] = 1;
			 else if(x[i] == 1){
			      a = 0;
			     x[i] = 0;}   	    
		 printf("%d", x[i]);
	     }
	      else
		   
	         printf("%d", x[i]);
		 
          
		}
	 printf (")");
	 ;	 	   	 
}

void oh (int n , int m)
{
     int z[32],x[32],c,l,t,a,r,f ,i ,Z[32] ,X[32] ,W[32],Y[32] ;
	 	
	 printf ("%d(", n);
	 r = n;
	 if(n < 0)
	 {
	 	 n = n *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Y[i] = n%2; 
	     n = n/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 X[i] = Y[f] ;
		     
		 if(a == 1){
		     if(X[i] == 0)
	             X[i] = 1;
			 else if(X[i] == 1){
			     a = 0;
			     X[i] = 0;}   	    
		 printf("%d", X[i]);
	     }
	      else
		   
	         printf("%d", X[i]);
		 
          
		}
	 printf (")");
	 
	 	 printf(" OR ");
	 	 
	 printf ("%d(", m);
	 
	 l = m;
	 if(m < 0)
	 {
	 	 m = m *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Z[i] = m%2; 
	     m = m/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 W[i] = Z[f] ;
		     
		 if(a == 1){
		     if(W[i] == 0)
	             W[i] = 1;
			 else if(W[i] == 1){
			     a = 0;
			     W[i] = 0;}   	    
		 printf("%d", W[i]);
	     }
	      else
		   
	         printf("%d", W[i]);
		 
          
		}
	 printf (")");
	 
	 c = r | l;
	 
	 printf("\n%d(", c);
	 
	  if(c < 0)
	 {
	 	 c = c *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 z[i] = c%2; 
	     c = c/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 x[i] = z[f] ;
		     
		 if(a == 1){
		     if(x[i] == 0)
	             x[i] = 1;
			 else if(x[i] == 1){
			     a = 0;
			     x[i] = 0;}   	    
		 printf("%d", x[i]);
	     }
	      else
		   
	         printf("%d", x[i]);
		 
          
		}
	 printf (")");
	 ;	 	   	 
}

void xoxo (int n , int m)
{
     int z[32],x[32],c,l,t,a,r,f ,i ,Z[32] ,X[32] ,W[32],Y[32] ;
	 	
	 printf ("%d(", n);
	 r = n;
	 if(n < 0)
	 {
	 	 n = n *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Y[i] = n%2; 
	     n = n/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 X[i] = Y[f] ;
		     
		 if(a == 1){
		     if(X[i] == 0)
	             X[i] = 1;
			 else if(X[i] == 1){
			     a = 0;
			     X[i] = 0;}   	    
		 printf("%d", X[i]);
	     }
	      else
		   
	         printf("%d", X[i]);
		 
          
		}
	 printf (")");
	 
	 	 printf(" XOR ");
	 	 
	 printf ("%d(", m);
	 
	 l = m;
	 if(m < 0)
	 {
	 	 m = m *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Z[i] = m%2; 
	     m = m/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 W[i] = Z[f] ;
		     
		 if(a == 1){
		     if(W[i] == 0)
	             W[i] = 1;
			 else if(W[i] == 1){
			     a = 0;
			     W[i] = 0;}   	    
		 printf("%d", W[i]);
	     }
	      else
		   
	         printf("%d", W[i]);
		 
          
		}
	 printf (")");
	 
	 c = r ^ l;
	 
	 printf("\n%d(", c);
	 
	  if(c < 0)
	 {
	 	 c = c *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 z[i] = c%2; 
	     c = c/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 x[i] = z[f] ;
		     
		 if(a == 1){
		     if(x[i] == 0)
	             x[i] = 1;
			 else if(x[i] == 1){
			     a = 0;
			     x[i] = 0;}   	    
		 printf("%d", x[i]);
	     }
	      else
		   
	         printf("%d", x[i]);
		 
          
		}
	 printf (")");
	 ;	 	   	 
}

void dire (int n , int m)
{
     int z[32],x[32],c,l,t,a,r,f ,i ,Z[32] ,X[32] ,W[32],Y[32] ;
	 	
	 printf ("%d(", n);
	 r = n;
	 if(n < 0)
	 {
	 	 n = n *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Y[i] = n%2; 
	     n = n/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 X[i] = Y[f] ;
		     
		 if(a == 1){
		     if(X[i] == 0)
	             X[i] = 1;
			 else if(X[i] == 1){
			     a = 0;
			     X[i] = 0;}   	    
		 printf("%d", X[i]);
	     }
	      else
		   
	         printf("%d", X[i]);
		 
          
		}
	 printf (")");
	 
	 	 printf(" >> ");
	 	 
	 printf ("%d(", m);
	 
	 l = m;
	 if(m < 0)
	 {
	 	 m = m *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Z[i] = m%2; 
	     m = m/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 W[i] = Z[f] ;
		     
		 if(a == 1){
		     if(W[i] == 0)
	             W[i] = 1;
			 else if(W[i] == 1){
			     a = 0;
			     W[i] = 0;}   	    
		 printf("%d", W[i]);
	     }
	      else
		   
	         printf("%d", W[i]);
		 
          
		}
	 printf (")");
	 
	 c = r >> l;
	 
	 printf("\n%d(", c);
	 
	  if(c < 0)
	 {
	 	 c = c *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 z[i] = c%2; 
	     c = c/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 x[i] = z[f] ;
		     
		 if(a == 1){
		     if(x[i] == 0)
	             x[i] = 1;
			 else if(x[i] == 1){
			     a = 0;
			     x[i] = 0;}   	    
		 printf("%d", x[i]);
	     }
	      else
		   
	         printf("%d", x[i]);
		 
          
		}
	 printf (")");
	 ;	 	   	 
}

void esqu (int n , int m)
{
     int z[32],x[32],c,l,t,a,r,f ,i ,Z[32] ,X[32] ,W[32],Y[32] ;
	 	
	 printf ("%d(", n);
	 r = n;
	 if(n < 0)
	 {
	 	 n = n *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Y[i] = n%2; 
	     n = n/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 X[i] = Y[f] ;
		     
		 if(a == 1){
		     if(X[i] == 0)
	             X[i] = 1;
			 else if(X[i] == 1){
			     a = 0;
			     X[i] = 0;}   	    
		 printf("%d", X[i]);
	     }
	      else
		   
	         printf("%d", X[i]);
		 
          
		}
	 printf (")");
	 
	 	 printf(" << ");
	 	 
	 printf ("%d(", m);
	 
	 l = m;
	 if(m < 0)
	 {
	 	 m = m *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 Z[i] = m%2; 
	     m = m/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 W[i] = Z[f] ;
		     
		 if(a == 1){
		     if(W[i] == 0)
	             W[i] = 1;
			 else if(W[i] == 1){
			     a = 0;
			     W[i] = 0;}   	    
		 printf("%d", W[i]);
	     }
	      else
		   
	         printf("%d", W[i]);
		 
          
		}
	 printf (")");
	 
	 c = r << l;
	 
	 printf("\n%d(", c);
	 
	  if(c < 0)
	 {
	 	 c = c *-1;
	     a = 1;
	  } 
	  
	 for(i = 0 ; i < 32 ; i++)
	 { 
		 z[i] = c%2; 
	     c = c/2;
	     
	   
	 }
	   
	 for(f = 31 , i = 0  ;f >=0 ; f-- , i++)
	    {
		 x[i] = z[f] ;
		     
		 if(a == 1){
		     if(x[i] == 0)
	             x[i] = 1;
			 else if(x[i] == 1){
			     a = 0;
			     x[i] = 0;}   	    
		 printf("%d", x[i]);
	     }
	      else
		   
	         printf("%d", x[i]);
		 
          
		}
	 printf (")");
	 ;	 	   	 
}

int main()
{
	 int a ,n ,m ,b ,e ,W[32],i;
	 
	 printf("calculadora de operacoes bitwise\n"
	     "1. NOT\n"
         "2. AND\n"
         "3. OR\n"
         "4. XOR\n"
         "5. Right Shift\n"
         "6. Left Shift\n"
		 "7. sair do programa\n");
     scanf("%d", &a);
	 	
	 do{
	 	 switch (a)
	 	 {
	 	 	 case 1:
	 	 	 	 
	 	 	     printf("\ndigite o numero: ");
	 	 	     scanf("%d", &n);
	 	 	     
	 	 	     printf("NOT");
	 	 	      
	 	 	     e = 1 ;
	 	 	     binario(n ,e);
	 	 	    
	 	 	     
				   
	 	 	     printf("\ndeseja ver suas opcoes?\n"
				      "1. sim\n"
					  "2. nao\n");
	 	 	     scanf("%d", &b);
	 	 	     
	 	 	     if(b == 1)
				   {
				      printf("\n\n\ncalculadora de operacoes bitwise\n"
	                 "1. NOT\n"
                     "2. AND\n"
                     "3. OR\n"
                     "4. XOR\n"
                     "5. Right Shift\n"
                     "6. Left Shift\n"
		             "7. sair do programa\n");
		             scanf("%d" ,&a); 
				   }
	 	 	     
	 	 	     else if(b == 2)
	 	 	         scanf("%d" ,&a); 
	 	 	         
	 	 	      else
					{
					 printf("\nvou considerar um nao\n ");
					 scanf("%d" ,&a);
				    }
	             break;
	             
	 	 	 case 2:
	 	 	 	 
	 	 	 	 
			     printf("\ndigite os dois numeros: ");    
				 scanf("%d %d", &n , &m);
			     
				 eehh (n , m);
				 
			 	 printf("\ndeseja ver suas opcoes?\n"
				      "1. sim\n"
					  "2. nao\n");
	 	 	     scanf("%d", &b);
	 	 	     
	 	 	     if(b == 1)
				   {
				      printf("\n\n\ncalculadora de operacoes bitwise\n"
	                 "1. NOT\n"
                     "2. AND\n"
                     "3. OR\n"
                     "4. XOR\n"
                     "5. Right Shift\n"
                     "6. Left Shift\n"
		             "7. sair do programa\n");
		             scanf("%d" ,&a); 
				   }
	 	 	     
	 	 	     else if(b == 2)
	 	 	         scanf("%d" ,&a); 
	 	 	         
	 	 	      else
					{
					 printf("\nvou considerar um nao\n ");
					 scanf("%d" ,&a);
				    }
				 break;
			
			 case 3:
			 	 
			 	
			 	 printf("\ndigite os dois numeros: ");    
				 scanf("%d %d", &n , &m);
			     
				 oh (n , m);
				 
			 	 printf("\ndeseja ver suas opcoes?\n"
				      "1. sim\n"
					  "2. nao\n");
	 	 	     scanf("%d", &b);
	 	 	     
	 	 	     if(b == 1)
				   {
				      printf("\n\n\ncalculadora de operacoes bitwise\n"
	                 "1. NOT\n"
                     "2. AND\n"
                     "3. OR\n"
                     "4. XOR\n"
                     "5. Right Shift\n"
                     "6. Left Shift\n"
		             "7. sair do programa\n");
		             scanf("%d" ,&a); 
				   }
	 	 	     
	 	 	     else if(b == 2)
	 	 	         scanf("%d" ,&a); 
	 	 	         
	 	 	      else
					{
					 printf("\nvou considerar um nao\n ");
					 scanf("%d" ,&a);
				    }
				 break;
			      
			  case 4:
			  	 e = 4;
			  	 
			     printf("\ndigite os dois numeros: ");    
				 scanf("%d %d", &n , &m);
			     
				 xoxo (n , m);
				 
			 	 printf("\ndeseja ver suas opcoes?\n"
				      "1. sim\n"
					  "2. nao\n");
	 	 	     scanf("%d", &b);
	 	 	     
	 	 	     if(b == 1)
				   {
				      printf("\n\n\ncalculadora de operacoes bitwise\n"
	                 "1. NOT\n"
                     "2. AND\n"
                     "3. OR\n"
                     "4. XOR\n"
                     "5. Right Shift\n"
                     "6. Left Shift\n"
		             "7. sair do programa\n");
		             scanf("%d" ,&a); 
				   }
	 	 	     
	 	 	     else if(b == 2)
	 	 	         scanf("%d" ,&a); 
	 	 	         
	 	 	      else
					{
					 printf("\nvou considerar um nao\n ");
					 scanf("%d" ,&a);
				    }
				 break;
				 
			 case 5:
			 	 
			 	
				 printf("\ndigite os dois numeros: ");    
				 scanf("%d %d", &n , &m);
			     
				 dire(n , m);
				 	 
			 	 printf("\ndeseja ver suas opcoes?\n"
				      "1. sim\n"
					  "2. nao\n");
	 	 	     scanf("%d", &b);
	 	 	     
	 	 	     if(b == 1)
				   {
				      printf("\n\n\ncalculadora de operacoes bitwise\n"
	                 "1. NOT\n"
                     "2. AND\n"
                     "3. OR\n"
                     "4. XOR\n"
                     "5. Right Shift\n"
                     "6. Left Shift\n"
		             "7. sair do programa\n");
		             scanf("%d" ,&a); 
				   }
	 	 	     
	 	 	     else if(b == 2)
	 	 	         scanf("%d" ,&a); 
	 	 	         
	 	 	      else
					{
					 printf("\nvou considerar um nao\n ");
					 scanf("%d" ,&a);
				    }
				 break;
				  
			     case 6:
			        	
			      	
			         printf("\ndigite os dois numeros: ");    
				     scanf("%d %d", &n , &m);
			      
				      esqu(n , m);
				   
				  
			 	     printf("\ndeseja ver suas opcoes?\n"
				      "1. sim\n"
					  "2. nao\n");
	 	 	         scanf("%d", &b);
	 	 	     
	 	 	        if(b == 1)
				   {
				         printf("\n\n\ncalculadora de operacoes bitwise\n"
	                     "1. NOT\n"
                         "2. AND\n"
                         "3. OR\n"
                         "4. XOR\n"
                         "5. Right Shift\n"
                         "6. Left Shift\n"
		                 "7. sair do programa\n");
		                 scanf("%d" ,&a); 
				   }
	 	 	     
	 	 	         else if(b == 2)
	 	 	             scanf("%d" ,&a); 
	 	 	         
	 	 	         else
					{
					     printf("\nvou considerar um nao\n ");
					     scanf("%d" ,&a);
				    }
				 break;     
			  	 
			 default:
			 	     printf("opcao invalida\n"
				        "digite uma opcao valida\n:");
			 	     printf("\ndeseja ver suas opcoes?\n"
				      "1. sim\n"
					  "2. nao\n");
	 	 	         scanf("%d", &b);
	 	 	     
	 	 	        if(b == 1)
				   {
				         printf("\n\n\ncalculadora de operacoes bitwise\n"
	                     "1. NOT\n"
                         "2. AND\n"
                         "3. OR\n"
                         "4. XOR\n"
                         "5. Right Shift\n"
                         "6. Left Shift\n"
		                 "7. sair do programa\n");
		                  scanf("%d" ,&a); 
				   }
	 	 	     
	 	 	         else if(b == 2)
	 	 	             scanf("%d" ,&a); 
	 	 	         
	 	 	         else
					{
					     printf("\nvou considerar um nao\n ");
					     scanf("%d" ,&a);
				    }
				 break;	 
	 	 	   }
         }while(a != 7);
	 
	 return 0;
}
