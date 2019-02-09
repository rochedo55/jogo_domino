#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	double x=0;
	/* a ideia é representar cada peça de um dominó como um numero decimal
	como por exemplo a peca |1|2| que sera representada pelo numero decimal 1,2
	com isso podemos pegar cada lado do |1|2| pegar_o_2 = ((int)peca - peca)*10;
	pegar_o_1 = (int)peca;     
	*/ 
	//definindo as pecas
	double v1[5] = {1/x};
	for (double i=x;i<6;i++){
		v1[i]=(1+(i/10));
	}
	double v2[5] = {2/x};
	for (double i=x;i<6;i++){
		v2[i]=(2+(i/10));
	}
	double v3[5] = {3/x};
	for (double i=x;i<6;i++){
		v3[i]=(3+(i/10));
	}
	double v4[5] = {4/x};
	for (double i=x;i<6;i++){
		v4[i]=(4+(i/10));
	}
	double v5[5] = {5/x};
	for (double i=x;i<6;i++){
		v5[i]=(5+(i/10));
	}
	double v6[5] = {6/x};
	for (double i=x;i<6;i++){
		v6[i]=(6+(i/10));
	}
  int aleat = 1+(rand() %10);
  int numjog;
  printf("Numero de jogadores: %d",&numjog);
  


	return 0;
}
