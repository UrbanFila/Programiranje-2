#include <stdio.h>

int main(){
zo
	int n;

	scanf("%d", &n);

	int najvecje = 0;
	int drugo = 0;
	int worth = 0;


	while(n > 0){

		scanf("%d", &cifra);

		if(cifra >= najvecje){
			drugo = najvecje;
			najvecje = cifra;
		}
		else if(cifra > drugo){
			drugo = cifra;
		}
		n--;
	}
	
	for(int i = 0; i < 10; i++){
		 
	}
	
	printf("%d\n", drugo);
	return 0;
}
