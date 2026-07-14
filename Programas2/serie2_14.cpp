#include <stdio.h>


int main(){
	int n, cont=0;
	
	printf("Digite un numero: ");
	scanf("%i",&n);
	
	for(int i=n;i>0;i--){
		if(n%i==0){
			cont++;
		}
	}
	if(cont==2){
		printf("El numero %i es primo\n", n);
	}
	else{
		printf("El numero %i no es primo\n", n);
	}
	return 0;
}