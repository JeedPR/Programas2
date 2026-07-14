#include <iostream>

int main(){
	int n, suma=0;
	
	printf("Digite el numero maximo: ");
	scanf("%i", &n);
	
	for(int i=0;i<=n;i++){
		if(i%2!=0){
			suma += i;
		}
	}
	
	printf("La suma de los números impares antes de %i es: %i", n, suma);
	
	return 0;
}