#include <stdio.h>

int main(){
	int num, resul=0;
	
	printf("Digite un n%cmero: ",163);
	scanf("%i", &num);
	
	printf("\n\n");
	
	while(resul!=1){	
		if(num%2==0){
			if(num%2!=5){
				if(num>100){
					if(num<1000){
						printf("El n%cmero %i cumple con las condiciones",163, num);
							
						resul=1;
					}
				}
			}
		}else{
			printf("El n%cmero %i no cumplio con las condiciones, vuelva a digitar el n%cmero: ", 163, num, 163);
			scanf("%i", &num);
		}
	}
	
	return 0;
}