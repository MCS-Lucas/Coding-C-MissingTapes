#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include "site.c"

int main() {
	
	setlocale(LC_ALL, "Portuguese");
 
	struct site usuarios[100];
 	int op=0;
 	usuarios[0].tam=0;
	
 
 do
 {    
     system("cls");
   
     printf("\n"); 
     printf("||--------------------------------------------------------------|| \n");
     printf("       Bem Vindo ! Selecione uma opcao segundo a legenda : \n");
     printf("||--------------------------------------------------------------|| \n");
     printf(" | Cadastrar Usu�rio :   1 | \n");
     printf(" | Cadastrar Produtor:   2 | \n");
     printf(" | Editar Perfil :       3 | \n");
     printf(" | Pesquisar Usu�rio :   4 | \n");
     printf(" | Sair :                0 | \n\n");
     printf(" Op��o : ");
     scanf("%d", &op);
     
     	switch(op)
     {
     case 0 :
       printf("Sess�o Encerrada \n");
        break; 
     case 1:
       cadastrousuarios(usuarios);
       break;
     case 2:
       cadastroprodutor(usuarios);
       break;
     case 3:
       editarperfil(usuarios);   
       break;
     case 4:
       editarperfilprod(usuarios);   
       break;  
     case 5:
       pesquisarusuarios(usuarios);   
       break;
	 case 6:
       pesquisarprodutor(usuarios);   
       break;
     
     default:
        printf("Op��o invalida\n");  
       break;
    }
   }
   while(op!=0);  
   system("PAUSE");
}


