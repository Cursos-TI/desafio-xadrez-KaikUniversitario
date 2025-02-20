#include <stdio.h>

	//bispo 5 casas para a diagonal direita
	//rainha 8 casas para esquerda
	//torre 5 casa para direita
	//Cavalo, 2 casas para baixo e 1 para esquerda
int main(){
	
		int torre, bispo, rainha, cavalo;
	
	bispo = 0;
	rainha = 0;
	cavalo = 0;
	
			//movimento da torre:
			
		printf(" Movimento da Torre:\n");	
	for(torre = 0; torre < 5; torre++ )	//repete o printf em até 5 vezes.
	{
		printf(" Direita!\n");		
	}
	
			//movimento do bispo:
			
		printf("\n Movimento do Bispo!\n");	
	do{
		
		printf(" Direita, cima!\n");
		
		bispo++;
		
	}while(bispo < 5);	//repete o printf em até 5 vezes.
	
			//movimento da Rainha:
			
		printf("\n Movimento da Rainha:\n"); 
	while(rainha < 8){		//repete o printf em até 8 vezes.
		
		printf("Esquerda!\n");
		
		rainha++;
	}
			
			//movimento do cavalo:
			
		printf("\n Movimento do Cavalo:\n");
	
		int b; // baixo
		int e; // esquerda
	for(e = 1; e > 0; e--){ //loop externo
		
		b = 1;
		
		while(b <= 2){	//loop interno
			
			printf("Baixo, ");  // movimento do cavalo para baixo
			b++; 
		}
		
		printf("Esquerda!\n"); // movimento do cavalo para esquerda
		
	}
	
 	return 0;	
}