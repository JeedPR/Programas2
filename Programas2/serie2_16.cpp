#include <stdio.h>

int main(){
	int num[100], n, mayor=0, menor;
	
	printf("Digite cuantos numeros quiere comparar: ");
	scanf("%d", &n);
	
	printf("\n");
	
	for(int i=0; i<n;i++){
		printf("Digite el numero [%d]: ", (i+1));
		scanf("%d", &num[i]);
		
		if(mayor<num[i]){
			mayor=num[i];
		}
	}
	menor = mayor;
	
	for(int i=0; i<n;i++){
		if(menor>num[i]){
			menor=num[i];
		}
	}
	
	printf("\nEl numero %d es el maximo\n", mayor);
	printf("El numero %d es el minimo", menor);	
	return 0;
}