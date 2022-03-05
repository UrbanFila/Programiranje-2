#include <stdio.h>

void print(int cifra){
	
	if(cifra == 0)return;
	
	
	print(cifra/10);
	
	putchar(cifra%10 + '0');
	
}

int main(){
	
	int stevka = getchar() - '0';
	int counter = -1;
	int samoNule = 1;
	int daliIde = 0;
	
	while(stevka == 0){
		stevka = getchar() - '0';
	}
	
	
	while( stevka != '\n'){
		
		if(stevka == '\n'){
			break;
		}
		
		stevka = getchar();
		
		if(stevka - '0' == 1 && daliIde == 0){
			daliIde = 1;
			samoNule = 0;
		}
		
		counter++;
	}
	
	
	if( samoNule == 1){
		
		if(counter == 0){
			putchar('0');
		}
		else{
			print(counter);
		}
		
	}
	else{
		counter = counter + 1;
		print(counter);
	}
	
	putchar('\n');


return 0 ;
}
