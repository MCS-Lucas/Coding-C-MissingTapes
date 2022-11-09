#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include "site.h"

void cadastrousuarios(struct site *pt) { 
	
	char x='s', verific[100];
	int i, y=-1,j;
	
   printf("\n"); 
   printf("||--------------------------------------------------------------|| \n");
   printf("||------------------- Cadastro de Usuários ---------------------|| \n");
   printf("||--------------------------------------------------------------|| \n\n");  
   
   	while ((x=='s') || (x=='S')) {
   		
   		printf("Insira seu nome de Usuário: ");
   		fflush(stdin);
   		fgets(verific,99,stdin);
   		
   		for(i=0;i<strlen(verific);i++){
   			
   			if((verific[i]>='a') && (verific[i]<='z'))
         {
            verific[i]-=32;
         }      
		 }
         
        for(i=0;i<pt[0].tam;i++){
        	
           y=strcmp(verific,pt[i].nome);
            if(y==0)
           {
             printf( " Usuário ja cadastrado ! \n\n"); 
             break;
           }
		    if(y!=0){
		   	
			for(i=0;i<pt[0].tam;i++) 
           {
          	 if(verific[0]<pt[i].nome[0]){
           	 
           	 
			 break;
		   }
		   
		   }
		   for(j=pt[0].tam;j>=i;j--) {
		   		   	
			strcpy(pt[j].nome,pt[j-1].nome); 
            strcpy(pt[j].telefone,pt[j-1].telefone); 
            strcpy(pt[j].email,pt[j-1].email);
            
		   }
			  strcpy(pt[i].nome,verific); 
		      printf(" Digite o telefone para contato : "); 
		      fflush(stdin);
		      fgets((pt[i]).telefone,9,stdin); 
		      printf(" Digite o email para contato : "); 
		      fflush(stdin);
		      fgets((pt[i]).email,19,stdin); 
		      printf("\n");
		      pt[0].tam++;
		      printf(" Cadastro Efetuado com Sucesso. \n\n");
			}  
		    }
			printf(" Deseja cadastrar um novo usuário ? S/N ");
    		scanf("%c",&x);
      		printf("\n");
      		y=-1;
      		
		    
	   }
}

void cadastroprodutor(struct site *pt) { 
	
	char x='s', verific[100];
	int i, y=-1,j;
	
   printf("\n"); 
   printf("||----------------------------------------------------------------|| \n");
   printf("||------------------- Cadastro de Produtores ---------------------|| \n");
   printf("||----------------------------------------------------------------|| \n\n");  
   
   	while ((x=='s') || (x=='S')) {
   		
   		printf("Insira seu nome de Usuário: ");
   		fflush(stdin);
   		fgets(verific,99,stdin);
   		
   		for(i=0;i<strlen(verific);i++){
   			
   			if((verific[i]>='a') && (verific[i]<='z'))
         {
            verific[i]-=32;
         }      
		 }
         
        for(i=0;i<pt[0].tam;i++){
        	
           y=strcmp(verific,pt[i].nomeprod);
            if(y==0)
           {
             printf( " Usuário ja cadastrado ! \n\n"); 
             break;
           }
		    if(y!=0){
		   	
			for(i=0;i<pt[0].tam;i++) 
           {
          	 if(verific[0]<pt[i].nomeprod[0]){
           	 
           	 
			 break;
		   }
		   
		   }
		   for(j=pt[0].tam;j>=i;j--) {
		   		   	
			strcpy(pt[j].nomeprod,pt[j-1].nomeprod); 
            strcpy(pt[j].telefoneprod,pt[j-1].telefoneprod); 
            strcpy(pt[j].emailprod,pt[j-1].emailprod);
            
		   }
			  strcpy(pt[i].nomeprod,verific); 
		      printf(" Digite o telefone para contato : "); 
		      fflush(stdin);
		      fgets((pt[i]).telefoneprod,9,stdin); 
		      printf(" Digite o email para contato : "); 
		      fflush(stdin);
		      fgets((pt[i]).emailprod,19,stdin); 
		      printf("\n");
		      pt[0].tam++;
		      printf(" Cadastro Efetuado com Sucesso. \n\n");
			}  
		    }
			printf(" Deseja cadastrar um novo produtor ? S/N ");
    		scanf("%c",&x);
      		printf("\n");
      		y=-1;
      		
		    
	   }
}

void editarperfil(struct site pt[]) {
    char verific[100];
    int i,k;
    
    printf("\n");
    printf("||-------------------------------------------------------------------------|| \n");
    printf("||--------------------- Editar Perfil de Usuário --------------------------|| \n");
    printf("||-------------------------------------------------------------------------|| \n\n");
    printf(" Informe o nome do usuario : " );         
    
    fflush(stdin);
    fgets(verific,99,stdin);
    
    for(i=0;i<strlen(verific);i++)
      {
         if((verific[i]>='a') && (verific[i]<='z')) 
         {
            verific[i]-=32;
         }      
      }
    
    for(i=0;i<pt[0].tam;i++)
    {
       k=strcmp(verific,pt[i].nome); 
       if(k==0)
       {
           printf("\n");
           printf(" Contato  :%s ",pt[i].nome);
           printf("Telefone :%s ",pt[i].telefone);
           printf("Email  :%s ",pt[i].email);
           printf("\n");
           printf("Informe o novo numero de telefone : ");
           fflush(stdin);
           fgets(pt[i].telefone,9,stdin);
           printf("Informe o novo email: ");
           fflush(stdin);
           fgets(pt[i].email,19,stdin);
           k=0;
           break;  
       }                       
    }
    if(k!=0)
       {
         printf("\n");
         printf(" Usuário nao cadastrado. \n"); 
       }
   printf("\n\n");
   system("PAUSE");
 
 }
 
 
 
 
 
 
void editarperfilprod(struct site pt[]) {
    char verific[100];
    int i,k;
    
    printf("\n");
    printf("||--------------------------------------------------------------------------|| \n");
    printf("||--------------------- Editar Perfil do Produtor --------------------------|| \n");
    printf("||--------------------------------------------------------------------------|| \n\n");
    printf(" Informe o nome do usuario : " );         
    
    fflush(stdin);
    fgets(verific,99,stdin);
    
    for(i=0;i<strlen(verific);i++)
      {
         if((verific[i]>='a') && (verific[i]<='z')) 
         {
            verific[i]-=32;
         }      
      }
    
    for(i=0;i<pt[0].tam;i++)
    {
       k=strcmp(verific,pt[i].nomeprod); 
       if(k==0)
       {
           printf("\n");
           printf(" Contato  :%s ",pt[i].nomeprod);
           printf("Telefone :%s ",pt[i].telefoneprod);
           printf("Email  :%s ",pt[i].emailprod);
           printf("\n");
           printf("Informe o novo numero de telefone : ");
           fflush(stdin);
           fgets(pt[i].telefoneprod,9,stdin);
           printf("Informe o novo email : ");
           fflush(stdin);
           fgets(pt[i].emailprod,19,stdin);
           k=0;
           break;  
       }                       
    }
    if(k!=0)
       {
         printf("\n");
         printf(" Usuário não cadastrado. \n"); 
       }
   printf("\n\n");
   system("PAUSE");
 
 }
 
void pesquisarusuarios(struct site pt[]) {
    char verific[100], o='s';
    int i,k;
    
    printf("\n");
    printf("||--------------------------------------------------------------|| \n");
    printf("||--------------------- Pesquisar Usuários ---------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
    
    while((o=='s')||(o=='S'))
    {
    printf(" Informe o nome do usuario : " );         
    
    fflush(stdin); 
    fgets(verific,99,stdin);
    
    for(i=0;i<strlen(verific);i++)
      {
         if((verific[i]>='a') && (verific[i]<='z'))
         {
            verific[i]-=32;
         }      
      }
    
    for(i=0;i<pt[0].tam;i++)
    {
       k=strcmp(verific,pt[i].nome); 
       if(k==0) // 
       {
           printf("\n");
           printf(" Usuário  : %s ",pt[i].nome);
           printf("Telefone : %s ",pt[i].telefone);
           printf("Email  : %s ",pt[i].email);
           printf("\n"); 
           
           break;       
       }     
    }
    if(k!=0)
    {
           printf("\n"); 
           printf(" Usuário Inexistente.\n\n");      
    }  
      
   printf(" Deseja pesquisar outro usuário ? S/N \n");
   scanf("%c",&o);
 }
}
void pesquisarprodutor(struct site pt[]) {
    char verific[100], o='s';
    int i,k;
    
    printf("\n");
    printf("||--------------------------------------------------------------|| \n");
    printf("||--------------------- Pesquisar Produtor ---------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
    
    while((o=='s')||(o=='S'))
    {
    printf(" Informe o nome do produtor : " );         
    
    fflush(stdin); 
    fgets(verific,99,stdin);
    
    for(i=0;i<strlen(verific);i++)
      {
         if((verific[i]>='a') && (verific[i]<='z'))
         {
            verific[i]-=32;
         }      
      }
    
    for(i=0;i<pt[0].tam;i++)
    {
       k=strcmp(verific,pt[i].nomeprod); 
       if(k==0) 
       {
           printf("\n");
           printf(" Usuário  : %s ",pt[i].nomeprod);
           printf("Telefone : %s ",pt[i].telefoneprod);
           printf("Email  : %s ",pt[i].emailprod);
           printf("\n"); 
           break;       
       }     
    }
    if(k!=0)
    {
           printf("\n"); 
           printf(" Usuário Inexistente.\n\n");      
    }  
      
   printf(" Deseja pesquisar outro produtor ? S/N \n");
   scanf("%c",&o);
 }
}
