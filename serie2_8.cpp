#include <stdio.h>

int main(){
	float calif;
	
	printf("Digite la calificaci%cn: ", 162);
	scanf("%f", &calif);
	
	if(calif>0 && calif<5){
		printf("\nCalificaci&cn:  No aprobado", 162);
	}else if(calif>=5 && calif<7){
		printf("\nCalificaci%cn:  Aprobado", 162); 
	}else if(calif>=7 && calif<9){
		printf("\nCalificaci%cn:  Notable", 162); 
	}else if(calif>=9 && calif<10){
		printf("\nCalificaci%cn:  Sobresaliente", 162); 
	}else if(calif == 10){
		printf("\nCalificaci%cn:  Excelente" , 162); 
	}
	return 0;
}