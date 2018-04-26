//Gabriel Resende Soares
//11721ECP011 

#include <stdio.h>


int main()
{
	char vet[200];
	int Z,n,x;

		printf("\nPrograma de conversoes, voce deseja converter:\n1. Binario para Decimal\n2. Binario para Hexadecimal\n3. Hexadecimal para Decimal\n4. Hexadecimal para Binario\n5. Decimal para Binario \n6. Decimal para Hexadecimal\n7. Octal para Decimal\n8. Decimal para Octa\n");
		
		scanf ("%d",&Z);
		switch (Z)
		{
		case 1:
			printf ("Digite o numero em binario: \n");
			scanf("%s",&vet); 
			getchar ();
			bin_dec(vet);
			break;
		case 2:
			printf ("Digite o numero em binario: \n");
			scanf("%s",&vet); 
			getchar ();
			bin_hex(vet);
			break;
		case 3:
			printf ("Digite o numero em hexadecimal: \n");
			scanf("%s",&vet); 
			getchar();
			hex_dec(vet);
			break;
		case 4:
			printf ("Digite o numero em hexadecimal: \n");
			scanf("%s",&vet); 
			getchar();
			hex_bin(vet);
			break;
		case 6:
			printf ("Digite o numero em decimal: \n");
			scanf("%d",&n); 
			getchar();
			dec_hex(n);
			break;
		case 5:
			printf ("Digite o numero em decimal: \n");
			scanf("%d",&n); 
			getchar();
			dec_bin(n);
			break;
		case 7:
			printf ("Digite o numero em octal: \n");
			scanf("%s",&vet); 
			getchar();
			octal_dec(vet);
			break;
		case 8:
			printf("Digite o numero em decimal: \n");
			scanf("%d",&n); 
			getchar();
			dec_octal(n);
			break;
		default:
			printf ("\n codigo invalido");
			break;		
		}
	
	return 0;
}	

void bin_dec(char v[])
{
	int inv[256],f,i,soma=0,p,n;
	for (i=0;v[i]!='\0';i++)
	{;}
	for (f=i-1;f>=0;f--)
	{
		p=1;
		if(v[f]=='0'){inv[f]=0;}
		else
		{
			for(n=0;n<=i-f-2;n++)
			{
				p=p*2;
			}
		inv[f]=p;
		}
		soma=soma+inv[f];
	}
	printf ("decimal:\n%d",soma);
}
void bin_hex(char v[])
{
	int inv[256],f,i,soma=0,p,n,k[256],r;
	for (i=0;v[i]!='\0';i++)
	{}
	for (f=i-1;f>=0;f--)
	{
		p=1;
		if(v[f]=='0'){inv[f]=0;}
		else
		{
			for(n=0;n<=i-f-2;n++)
			{
				p=p*2;
			}
		inv[f]=p;
		}
		soma=soma+inv[f];
	}
	for (i=0;soma>=1;i++)
	{
		k[i]=soma%16;
		soma=soma/16;
	}
	printf ("hexadecimal:\n");
	for (r=i-1;r>=0;r--)
	{	
		if (k[r]<=9)
		{
		printf ("%d",k[r]);}
		if (k[r]>9)
		{k[r]=k[r]+55; printf ("%c",k[r]);}
	}
}

void hex_dec(char v[])
{
	int inv[256],f,i,soma=0,p,n;
	for (i=0;v[i]!='\0';i++)
	{	
		if (v[i]>='a' && v[i]<='z')
		{
			v[i]=v[i]-32;
		}
	}
	for (f=i-1;f>=0;f--)
	{
		p=1;
		if(v[f]=='0'){inv[f]=0;}
		else
		{
			for(n=0;n<=i-f-2;n++)
			{p=p*16;}
			if (v[f]>='0' && v[f]<='9')
			{inv[f]=p*(v[f]-48);}
			if (v[f]>='A' && v[f]<'Z')
			{inv[f]=p*(v[f]-55);}
		}
		soma=soma+inv[f];
	}
	printf ("decimal:\n%d",soma);	
}
void hex_bin (char v[])
{
	int inv[256],f,i,soma=0,p,n;
	for (i=0;v[i]!='\0';i++)
	{	
		if (v[i]>='a' && v[i]<='z')
		{
			v[i]=v[i]-32;
		}
	}
	for (f=i-1;f>=0;f--)
	{
		p=1;
		if(v[f]=='0'){inv[f]=0;}
		else
		{
			for(n=0;n<=i-f-2;n++)
			{p=p*16;}
			if (v[f]>='0' && v[f]<='9')
			{inv[f]=p*(v[f]-48);}
			if (v[f]>='A' && v[f]<'Z')
			{inv[f]=p*(v[f]-55);}
		}
		soma=soma+inv[f];
	}
	printf ("binario:\n");
		for(i=0;soma>=1;i++)
		{inv[i]=soma%2; soma=soma/2;}
		for(f=i-1;f>=0;f--)
		{printf("%d", inv[f]);}
}

void dec_bin(int n)
{
	int f,inv[256],i;	
	printf ("binario:\n");
	for(i=0;n>=1;i++){
		inv[i]=n%2; n=n/2;}
	for(f=i-1;f>=0;f--){
		printf("%d", inv[f]);}
}

void dec_hex(int n)
{
	int i,f,k[256];
	for (i=0;n>=1;i++)
	{
		k[i]=n%16;
		n=n/16;
	}
	printf ("hexadecimal:\n");
	for(f=i-1;f>=0;f--)
	{
		if(k[f]<=9)
		{printf("%d",k[f]);}
		if(k[f]>9)
		{
			k[f]+=55;
			printf("%c",k[f]);
		}
    }
}

void octal_dec (char v[])
{
	int inv[256],f,i,soma=0,p,n;
	for (i=0;v[i]!='\0';i++){
	}
	for (f=i-1;f>=0;f--)
	{p=1;
		if(v[f]=='0'){inv[f]=0;}
		else
		{
			for(n=0;n<=i-f-2;n++)
			{p=p*8;}
			if (v[f]>='0' && v[f]<='8')
			{inv[f]=p*(v[f]-48);}	
		}
	
		soma=soma+inv[f];}
	printf ("decimal\n%d\n",soma);
}
void dec_octal(int n)
{
	int f,inv[256],i;	
	printf ("octal:\n"); 
	for(i=0;n>=1;i++){
		inv[i]=n%8; n=n/8;}
	for(f=i-1;f>=0;f--){
		printf("%d", inv[f]);}
}
