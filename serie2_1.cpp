#include <stdio.h>

int main(){
	int n;
	
	printf("Digite el n%cmero maximo: ",163);
	scanf("%i", &n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%i ",(j+1));
		}
		printf("\n");
	}
	
	return 0;
}