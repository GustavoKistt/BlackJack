#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

main(){


	FILE*file;
	int i,jogador[10],mesa[10],somaj,somam,opcao,opcao2,r,o,vazio,r1,r2,r3,resultado,ap1,apt;
	char nomej[18],nomej1[18],nomej2[18],nomej3[18];
	char pBlackJack(),pRegras();
	
		inicio:
	
	system("color 20");	Sleep(100);
	pBlackJack();
	Sleep(1500);

		printf("\n\n         \t\t\t1 - Jogar\n\n         \t\t\t2 - Recordes\n\n         \t\t\t3 - Regras\n\n         \t\t\t4 - SAIR\n");
			scanf("%i",&o);
	
		
	if(o==2){
		system("cls");
		printf("          Recordes: \n");
		file=fopen("black.txt","r");
		fscanf(file,"1- %s  =  %i \n2- %s  =  %i\n3- %s  =  %i\n",&nomej1,&nomej2,&nomej3,&r1,&r2,&r3);
		printf("%10 %i\n%10 %i\n%10 %i", r1,r2,r3);
		printf("\n digite algo para retornar\n");
		scanf("%i",&vazio);
		fclose(file);
		system("cls");
			goto inicio;
	}if(o==3){
		system("cls");
		pRegras();
		
				scanf("%i",&vazio);
				system("cls");
				goto inicio;
	
	}if(o==4){
		system("cls");	
		printf("fim de jogo");
		exit(0);
		
	}
	
	
if(o==1){	
	system("cls");
	printf("    Nome do Jogador:\n\n");
		scanf("%s",&nomej);
		fflush(stdin);
	Sleep(300);
	system("cls");
	jn:
	apt=1000;
		for(r=0;r!=2;){
	
	somam=0;
	somaj=0;
	i=0;
	r=0;
	somam=0; somaj=0;
	
	srand(time(NULL));
	
	Sleep(300);
		aposta:
		printf("\nVoce tem um total de R$:%i",apt);
		printf("\n   Digite o valor da APOSTA: $");
		scanf(" %i",&ap1);
		if(ap1>apt){
			printf("Voce nao possui este valor\n");
			Sleep(1000);
			system("cls");
			goto aposta;
		}
	Sleep(300);
		system("cls");
		printf("     Apostando : R$%i       Voce Tem : R$%i \n\n",ap1,apt);
	
	for(i=0;i<2;i++){
			mesa[i]=1+ (rand() %11);
			somam+=mesa[i];	
				}
		Sleep(300);
		printf("Mesa:\n"); Sleep(1100);
			printf("%i ", mesa[0]);
			Sleep(1000); printf("x\n");
			
	Sleep(1000);
	
	for(i=0;i<2;i++){
			jogador[i]=1+ (rand() %11);	
			somaj+=jogador[i];		}
		
	Sleep(200);	printf("Sua mao: \n");Sleep(1500); printf("%i ",jogador[0]);
			Sleep(1100); printf("%i              ",jogador[1]);Sleep(200); printf("Total= %i\n",somaj);
	

		if(somam==21&&somaj==21){ printf("Empate\n");resultado=3; goto novamente;	
			}if(somaj==21){ printf("Blackjack !\n"); resultado=1; goto novamente;	
				}if(somam==21){ printf(" A Mesa tem um Blackjack!\n");printf("\nMesa: %i %i   Total= %i",mesa[0],mesa[1],somam); resultado=2; goto novamente;	}	

	back:
	printf("\n1- Comprar\n2- Parar\n3- Dobrar Aposta\n");
		scanf("%i",&opcao);
		
			switch (opcao){
				case 1: 							
						printf("\nSua mao:\n"); printf("%i %i ",jogador[0], jogador[1]); 						
						
							jogador[2]=1+(rand() %11);
							somaj+=jogador[2]; Sleep(1300);
							 printf("%i total= %i ",jogador[2],somaj);  
							 
							 	if(somaj>21){printf("\nVoce perdeu!\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=2;break;}
								if(somaj==21){ printf("\nVoce Ganhou!\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=1;break;}
							 
							 printf("\n1- Comprar\n2- Parar\n");
							 scanf("%i",&opcao2);
							 	
								 if(opcao2==1){
								 	printf("\nSua mao:\n"); printf("%i %i %i ",jogador[0], jogador[1],jogador[2]); 						
						
									jogador[3]=1+(rand() %11);
									somaj+=jogador[3]; Sleep(1300);
							 		printf("%i total= %i ",jogador[3],somaj);  
							 
								 	if(somaj>21){printf("\nVoce perdeu\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=2;break;}
									if(somaj==21){ printf("\nVoce Ganhou\n\n");Sleep (1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=1;break;}
							 
							 		printf("\n1- Comprar\n2- Parar\n");
							 		scanf("%i",&opcao2);
							 	
								 	if(opcao2==1){
							 		
								 	printf("\nSua mao:\n"); printf("%i %i %i %i ",jogador[0], jogador[1],jogador[2],jogador[3]); 						
						
									jogador[4]=1+(rand() %11);
									somaj+=jogador[4]; Sleep(1300);
							 		printf("%i total= %i ",jogador[4],somaj);  
							 
								 	if(somaj>21){printf("\nVoce perdeu\n\n"); Sleep (1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=2;break;}
									if(somaj==21){ printf("\nVoce Ganhou\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=1;break;}
							 
							 		printf("\n1- Comprar\n2- Parar\n");
							 		scanf("%i",&opcao2);
								 
								 }if(opcao2==1){
								 	printf("\nSua mao:\n"); printf("%i %i %i %i %i ",jogador[0], jogador[1],jogador[2],jogador[3],jogador[4]); 						
						
									jogador[5]=1+(rand() %11);
									somaj+=jogador[5]; Sleep(1300);
							 		printf("%i total= %i ",jogador[5],somaj);  
							 
								 	if(somaj>21){printf("\nVoce perdeu\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=2;break;}
									if(somaj==21){ printf("\nVoce Ganhou\n\n");Sleep (1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=1;break;}
							 
							 		printf("\n1- Comprar\n2- Parar\n");
							 		scanf("%i",&opcao2);	
							 	
								}if(opcao2==1){
								 	printf("\nSua mao:\n"); printf("%i %i %i %i %i %i ",jogador[0], jogador[1],jogador[2],jogador[3],jogador[4],jogador[5]); 						
						
									jogador[6]=1+(rand() %11);
									somaj+=jogador[6]; Sleep(1300);
							 		printf("%i total= %i ",jogador[6],somaj);  
							 
								 	if(somaj>21){printf("\nVoce perdeu\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=2;break;}
									if(somaj==21){ printf("\nVoce Ganhou\n\n");Sleep (1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=1;break;}
							 
							 		printf("\n1- Comprar\n2- Parar\n");
							 		scanf("%i",&opcao2);
							 	
								} }if(opcao2==2){
								 	break;
								 }					 
								//	break;
			
				case 2:
					/*	printf("Mesa:\n");
							printf("%i ", mesa[0]);Sleep(1500); printf("%i ",mesa[1]);		
					
							for(i=2;somam<=17;i++){
								mesa[i]=1+(rand() %11);
								somam+=mesa[i];
								Sleep(2000);
								printf("%i total=%i ",mesa[i], somam);	*/									
								break;			
				case 3: 						
						ap1+=ap1;
						
						if(apt>=ap1){
					Sleep(500);	
						printf("     Apostando : R$%i       Voce Tem : R$%i \n\n",ap1,apt);					
					Sleep(800);
						printf("\nSua mao:\n"); printf("%i %i ",jogador[0], jogador[1]); 						
						jogador[2]=1+(rand() %11);
							somaj+=jogador[2]; Sleep(1300);
							Sleep(1000);
							 printf("%i total= %i ",jogador[2],somaj);  
							 
							 	if(somaj>21){printf("\nVoce perdeu!\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=2;break;}
								if(somaj==21){ printf("\nVoce Ganhou!\n\n"); Sleep(1000); printf("Mesa: %i %i   Total= %i ",mesa[0],mesa[1],somam);resultado=1;break;}
				
				
		
						}if(ap1>apt){
						ap1-=ap1;
							printf("\n\nVoce nao tem dinheiro para dobrar a aposta\n");
								goto back;} 
					
			
			  } 	
					 //  printf("\nMesa:\n");
					//	printf("%i ", mesa[0]); Sleep(1500); printf("%i Total=%i\n",mesa[1],somam); 
						Sleep(900);					
					if(somaj<21){
						  printf("\nMesa:\n");
							printf("%i ", mesa[0]); Sleep(1500); printf("%i Total=%i\n",mesa[1],somam); 
							
						if(somam<somaj){
							if(somam<17){
								mesa[2]=1+(rand() %11);
								somam+=mesa[2];
								printf("%i ", mesa[0]); Sleep(1000); printf("%i ", mesa[1]); Sleep(1500); printf("%i Total=%i\n",mesa[2],somam); 
							if(somam<17){							
								mesa[3]=1+(rand() %11);
								somam+=mesa[3];
							 	printf("%i ", mesa[0]); Sleep(1000); printf("%i ", mesa[1]); Sleep(500);printf("%i ", mesa[2]); Sleep (1500); printf("%i Total=%i\n",mesa[3],somam); 											
							}if(somam<17){
								mesa[4]=1+(rand() %11);
								somam+=mesa[4];
								printf("%i ", mesa[0]); Sleep(1000); printf("%i ", mesa[1]); Sleep(500);printf("%i ", mesa[2]); Sleep (500); printf("%i ", mesa[3]); Sleep (1500);
								printf("%i Total=%i\n",mesa[4],somam); 					 	
							
						}}}if(somaj>21){
							somaj=0;
						}
						
						if(somam<=21){
							if(somam>somaj){
								printf("\nA mesa ganhou");		
								resultado=2;						
							}if(somaj>somam){
								printf("\nVoce Ganhou!");
								resultado=1;
							}if(somaj==somam){
								printf("Empate!");
								resultado=3;
							}}
						if(somam>21){
							printf("Voce Ganhou!");
							resultado=1;
						}}
						novamente:
							if(resultado==1){	
								  apt+=ap1;
								  	printf("\n\n   +R$%i   \n\n   Voce Ficou Com: R$%i\n",ap1,apt);
							}if(resultado==2){
									apt-=ap1;
										if(apt==0){
												 Sleep(300);
													printf("\n     VOCE PERDEU TUDO");
													printf("\n\n   Jogar Novamente? 1-sim 2-nao\n");
													scanf("%i",&r);
													system("cls"); goto jn;
								
										}printf("\n\n   -R$%i   \n\n   Voce Ficou Com: R$%i\n",ap1,apt);}
							
							
						Sleep(500);			
						
						
								
							
						printf("\n\nJogar Novamente? 1-sim 2-nao\n");
							scanf("%i",&r);
							system("cls");
}}


printf("\n    Fim de jogo\n");




}
char pBlackJack(){
	printf("_____________________________________________________________________________________\n");
	printf("|88          88                       88        88                        88         |\n");	Sleep(200);
	printf("|88          88                       88        **                        88         |\n");	Sleep(200);
	printf("|88          88                       88                                  88         |\n");Sleep(200);
	printf("|88,dPPYba,  88 ,adPPYYba,  ,adPPYba, 88   ,d8  88 ,adPPYYba,  ,adPPYba,  88   ,d8   |\n");Sleep(200);
	printf("|88P'    *8a 88 **     `Y8 a8*     ** 88 ,a8*   88 **     `Y8 a8*     **  88 ,a8*    |\n");Sleep(200);
	printf("|88       d8 88 ,adPPPPP88 8b         8888[     88 ,adPPPPP88 8b          8888[      |\n");Sleep(200);
	printf("|88b,   ,a8* 88 88,    ,88 *8a,   ,aa 88`*Yba,  88 88,    ,88 *8a,   ,aa  88`*Yba,   |\n");Sleep(200);
	printf("|8Y*Ybbd8*'  88`*8bbdP*Y8  `*Ybbd8*'  88   `Y8a 88 `*8bbdP*Y  `*Ybbd8*'   88   `Y8a  |\n");Sleep(200);
	printf("|                                              ,88                                   |\n");Sleep(200);
	printf("|                                            888P*                                   |\n");Sleep(200);
	printf("|____________________________________________________________________________________|\n");Sleep(200);
	
}

char pRegras(){
	printf("               REGRAS:\n\n\n");
	printf("     Passo 1: O jogo de blackjack comeca com o jogador colocando suas apostas no circulo de aposta indicado na mesa.\n\n");
	printf("     Passo 2: A mesa recebera duas cartas, uma virada para cima e a outra virada para baixo.\n\n");
	printf("     Passo 3: O jogador na mesa recebera duas cartas iniciais, que estarao viradas para cima, mostrando o valor.\n\n");
	printf("     Passo 4: Seu objetivo e atingir um resultado o mais proximo possivel de 21, sem exceder essa soma.\n\n");
	printf("     Passo 5: Voce pode pedir outra carta, parar, ou  dobrar a aposta (recebe mais uma carta somente).\n\n");
	printf("     Passo 6: A mesa comprara cartas ate sua soma ser menor de 17.\n\n");
	printf("     Passo 7: As apostas sao pagas no formato 1:1.\n\n");
	printf("     Passo 8: Voce comeca com um total de R$ 1000 \n\n");
	printf("                 Digite algo para retornar\n       ");
}


	
