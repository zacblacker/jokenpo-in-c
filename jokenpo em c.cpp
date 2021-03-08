#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char player[256];
	char player2[256];
	
	printf("player 1,Sua vez...");
	scanf("%s",player);
	
	printf("player 2, Sua vez...");
	scanf("%s",player2);
	
	printf("aguarde... estamos vendo quem venceu...");
			if(strcmp(player,"papel")==0){
					if(strcmp(player2,"papel")==0){
						printf("\n \n deu empate");
					}else if(strcmp(player2,"tesoura")==0){
						printf("\n \nplayer 2 ganhou");
					}else if(strcmp(player2,"pedra")==0){
						printf("\n \n player 2 perdeu");
					}else {
						printf("\n \no player 2 jogou algo invalido");
					}
				
			}else if(strcmp(player,"tesoura")==0){
					if(strcmp(player2,"papel")==0){
						printf("\n \n player 2 ganhou");
					}else if(strcmp(player2,"tesoura")==0){
						printf("\n \ndeu empate");
					}else if(strcmp(player2,"pedra")==0){
						printf("\n \n player 2 ganhou");
					}else {
						printf("\n \no player 2 jogou algo invalido");
					}
			}else if(strcmp(player,"pedra")==0){
					if(strcmp(player2,"papel")==0){
						printf("\n \n player 2 ganhou");
					}else if(strcmp(player2,"tesoura")==0){
						printf("\n \nplayer 2 perdeu");
					}else if(strcmp(player2,"pedra")==0){
						printf("\n \ndeu empate");
					}else {
						printf("\n \no player 2 jogou algo invalido");
					}
			}
			
	else{
		printf("voce jogou uma informação errada");
	}
	
	
	return 0;
}
