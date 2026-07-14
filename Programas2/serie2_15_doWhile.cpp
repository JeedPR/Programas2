#include <stdio.h>

int main(){
	int n[10], mediaP=0, mediaI=0, contP=0, contI=0; 
	float promedio=0;
	
	int i=0;
	do{
		printf("Digite el numero [%i]: ", (i+1));
		scanf("%i", &n[i]);
		
		if(n[i]%2==0){
			mediaP += n[i];
			contP+= 1;
		}else{
			mediaI += n[i];
			contI+= 1;
		}
		
		i++;
	}while(i<10);
	
	promedio = mediaP/contP;
	printf("\nLa media de los numeros pares es: %.2f", promedio);
	
	promedio = mediaI/contI;
	printf("\nLa media de los numeros impares es: %.2f", promedio);
	
	return 0;
}