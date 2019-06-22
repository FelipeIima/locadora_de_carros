#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {
	setlocale(LC_ALL, "Portuguese"); 
	
	int menu=0, menu2=0, menu3=0, menu4=0, cod=1; //menu e submenu dentro do swhitch
	char marca[10], modelo[10], placa[10];	//vetores veiculos
	int i=0, cpf[11];
	char nome[20], endereco[20]; //vetores clientes
	
	do {
		
			printf("\nALUGUEL DE VEICULOS\n\n"); //Menu inicial 
			printf("1 - Cadastrar \n");
			printf("2 - Exibir  \n");
			printf("3 - Pesquisar \n");
			printf("0 - Sair \n");
			printf("\n\nInforme opção desejada:");
			scanf("%d", &menu);				
			system("cls");
			switch (menu) { // estrututura de seleção de múltipla escolha compara um dado valor a constante
				case 1:		//Cadastro de cliente e veiculo 
					printf("\n\n 1- Cadastrar Veiculo\n");
					printf(" 2- Cadastrar Cliente\n");
					printf(" 0- Sair\n\n");
					printf("\nDeseja cadastrar Veiculos ou Cliente?\n ");
					printf("\nInforme opção desejada:");
					scanf("%d",&menu2);
					
					switch(menu2){
						case 1: 
							printf(" \n Você escolheu cadastrar veiculo..\n\n ");
							printf("Informe codigo: ");
							scanf("%d", &cod);
							fflush(stdin);
							printf("Informe marca: ");
							scanf("%s",&marca[10]);
							fflush(stdin);
							printf("Informe modelo: ");
							scanf("%s",&modelo[10]);
							fflush(stdin);
							printf("Informe placa: ");
							scanf("%s",&placa[10]);							
							printf("\n\n");	
							break;
						case 2: 
						
							printf(" \n Você escolheu cadastrar Cliente.. \n\n ");
							fflush(stdin);
							printf("\nInforme nome: ");
							scanf("%s",&nome[20]);
							fflush(stdin);
							printf("Informe Endereço: ");
							scanf("%s",&endereco[20]);						
							printf("Informe CPF: ");
							scanf("%d", &cpf[11]);
						
							
							break;
					}					
						
	         	break;
				case 2: // exibir cliente e veiculo
					printf("\n\n1- Exibir Veiculo\n");
					printf("2- Exibir Cliente\n");
					printf("0- Sair\n");
					printf("\nDeseja Exibir Veiculos ou Cliente?\n ");
					printf("\nInforme opção desejada:");
					scanf("%d",&menu3);	
					
							
					
					switch(menu3){
						case 1: 
					       printf(" Você escolheu Exibir veiculos...\n\n ");
					       	for ( i=0; i<cod; i++){ 
								if(cod ==1) { // verificar se aluno esta cadastrado
									    printf("Codigo: %d \n", i+1); 
										printf("Marca: %s \n",&marca[10]);
										printf("Modelo: %s \n",&modelo[10] );
										printf("Placa: %s \n\n",&placa[10]);
							}
					}		
					         	
							break;
						case 2: 
					       printf(" Você escolheu Exibir Clientes..\n\n ");
					       	for ( i=0; i< cod; i++){ 
							if(cod ==1) { // verificar se aluno esta cadastrado
							   // printf("Nome: %d \n", i+1); //da opção para remover atraves da matricula
								printf("Nome: %s \n",&nome[20]);
								printf("CPF: %d \n",&cpf[11] );
								printf("Endereço: %s \n\n",&endereco[20]);
					}
					}
							break;
							} 	
						
				break;
				case 3: // Pesquisar cliente e veiculo
					
						printf("\n\n1- Pesquisar Veiculo\n");
						printf("2- Pesquisar Cliente\n");
						printf("0- Sair\n\n");
					
						printf("\nDeseja Pesquisar Veiculos ou Cliente?\n\n ");
						printf("\nInforme opção desejada:");
						scanf("%d",&menu4);
						
						switch(menu4){
							
						case 1: 
					       printf("\n\n Você escolheu Pesquisar veiculos...\n\n ");
					        for ( i = 0; i <cod; i++ )  {		
				                     	printf("Digite o codigo a ser pesquisado: ");
				                       scanf("%d", &cod );
				                    
				                    	if (cod==1) {
										
						                       	printf("Codigo: %d \n",&cod ); 
												printf("Marca: %s \n",&marca[10]);
												printf("Modelo: %s \n",&modelo[10] );
												printf("Placa: %s \n\n",&placa[10]);
				             				 }else {
				                    			printf("Valor nao encontrado\n\n");
							  			}
				        	 }

            
					      
							break;
						case 2: 
					       printf(" \n\nVocê escolheu Pesquisar Clientes...\n\n ");
									for (i=0; i<cod; i++){
										printf ("Digite o CPF do cliente a ser pesquisado");
										scanf ("%d", cpf[i]);
										if (cpf==cpf){
											printf ("Cliente encontrado");
											}else {
											printf ("Cliente inexistente");
											
										}
									}
							break;
							}
				break;
				default:
						if (menu!=0){
						printf("\n\nOpção inválida!\n");	
						}else {
						printf(" \n\nVoce saiu do programa!!!");
						}
				break;
		
			}
		} while(menu!=0);
	
	getchar();
	}
