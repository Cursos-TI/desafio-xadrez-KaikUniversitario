#include <stdio.h>
#include <stdlib.h>
	void torreRec(){ //mover da torre
	
		for (int torre = 0; torre < 8; torre++)
		{
			printf("Direita!\n");
		}
		
		
	}
	
	void bispoRec(){ //mover do bispo 8 vezes
		
		for(int i = 0; i < 8; i++){ //loop externo movimento pra cima
			printf("Cima, ");
			
			for(int j = 1; j > 0; j--){//loop interno movimento pra baixo
				printf("Direita!\n");
				
			}
		}		
	}
	
	void rainhaRec(){ //movimento da rainha
	
		for( int rainha = 1; rainha <= 8; rainha++){ // mover 8 casas para a esquerda
			printf("Esquerda!\n");
		}
		
	}
	
	void cavaloRec(){	//mover do cavalo
		for(int i = 0, j = 0; i < 2 ; i++, j++ ){ 
			
			printf("Cima, "); // mover pra cima 2 vezes
			
			j >= 1 ? printf("Direita! \n"): 0 ; // mover pra direita 1 vez
			
		}
	}
	//bispo 5 casas para a diagonal direita
	//rainha 8 casas para esquerda
	//torre 5 casa para direita
	//Cavalo, 2 casas para cima e 1 para direita

int main(){
	
			//movimento da torre:
			
		printf(" Movimento da Torre:\n");	
	torreRec();
	printf("\n");
		
		
			//movimento do bispo:
			
		printf("Movimento do Bispo!\n");	
	
	bispoRec();
	printf("\n");
	
			//movimento da rainha
		printf("\n Movimento da Rainha:\n"); 
	
	rainhaRec();
	printf("\n");
	
			//movimento do cavalo:
			
		printf("Movimento do Cavalo:\n");
	
	cavaloRec();
	printf("\n");
	

	
 	return 0;	
}