#include <stdio.h>

int main(){
	int op;
	float calif;
	
	printf("Digite la calificaci%cn: ", 162);
	scanf("%f", &calif);
	
	if(calif>0 && calif<5){
		op = 1;
	}else if(calif>=5 && calif<7){
		op = 2;
	}else if(calif>=7 && calif<9){
		op = 3;
	}else if(calif>=9 && calif<10){
		op = 4;
	}else if(calif == 10){
		op =5;
	}
	
	switch(op){
		case 1:
			printf("\nCalificaci&cn:  No aprobado", 162); 
		break;
		
		case 2:
			printf("\nCalificaci%cn:  Aprobado", 162); 
		break; 
		
		case 3:
			printf("\nCalificaci%cn:  Notable", 162); 
		break; 
		
		case 4:
			printf("\nCalificaci%cn:  Sobresaliente", 162); 
		break; 
		
		case 5:
			printf("\nCalificaci%cn:  Excelente" , 162); 
		break;  
	}
	
	return 0;
}