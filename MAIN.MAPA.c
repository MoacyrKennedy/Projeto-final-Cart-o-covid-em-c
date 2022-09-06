#include <stdio.h>
#include <stdlib.h>
#include <locale.h>  
#include <string.h>

#define TAM 1
struct vacina{
 
	char nome[50];
	char cpf[20];
	char vacina[20];
	char data[30];
	int lote;
	
}ficha[200]; 


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese"); 
 
 		int i;
 		int o;
		char b[20]; 
		int t;
		
 	printf("\n\tMenu opções\n");
 	printf(" 1-Cadastrar Vacina\n");
 	printf(" 2-Listar Aplicações\n");
 	printf(" 3-Consultar por CPF\n");
 	printf(" 4-Sair\n");
 	printf("Escolha uma opção:");
 	scanf("%d", &o);
 	fflush(stdin);
 
 	while(o !=4){
    	 switch (o){
        	case 1:
            	for(i=0;i<TAM;i++){
    	    		printf("\n informe um nome:");
        	    	scanf("%30[^\n]s", ficha[i].nome);
           			fflush(stdin);
 
    	      		printf(" informe o cpf:");
        	 		scanf("%30[^\n]s", ficha[i].cpf);
        			fflush(stdin);
 
        			printf(" informe a vacina:");
    	    		scanf("%s", ficha[i].vacina);
        	    	fflush(stdin);
 
            		printf(" informe a data:");
 		        	scanf("%20[^\n]s", ficha[i].data);
	         		fflush(stdin);
  
	          		printf(" informe o lote:");
    	      		scanf("%d", &ficha[i].lote);
        	  		fflush(stdin);
            	}
       		break;
       
       		case 2:
				for(i=0;i<TAM;i++){

	        	printf("\ncodigo: %d\n", i+1);
    	    	printf("nome: %s\n" , ficha[i].nome);
        		printf("cpf: %s\n" , ficha[i].cpf);
        		printf("vacina: %s\n", ficha[i].vacina);
	        	printf("data: %s\n" , ficha[i].data);
    	    	printf("lote: %d\n" , ficha[i].lote);
     			}
    		break;
    		
    		case 3:
    			printf("\n informe o cpf que deseja buscar:");
				scanf("%s", &b);
				fflush(stdin);
				
				t=0;
				for(i=0;i<TAM;i++){
					if(strcmp(ficha[i].cpf, b)==0){
						t=1;
						printf("\ncodigo: %d\n", i+1);
    	    			printf("nome: %s\n" , ficha[i].nome);
        				printf("cpf: %s\n" , ficha[i].cpf);
    				}
    			}
    			if(t!=1){
    				printf("\n cpf nao cadastrado!\n\n");
				}
    		break;

        	default:
        		if(o!=4);{
			   		printf("\n opçao invalida! \n\n");
          		}
       		break;
    	}  
     
 	printf("\n\tMenu opções\n");
 	printf(" 1-Cadastrar Vacina\n");
 	printf(" 2-Listar Aplicações\n");
 	printf(" 3-Consultar por CPF\n");
 	printf(" 4-Sair\n");
 	printf("Escolha uma opção:");
 	scanf("%d", &o);
 	fflush(stdin);
 
    }

 return 0;
}
