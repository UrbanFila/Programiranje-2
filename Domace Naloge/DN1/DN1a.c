#include <stdio.h>

void print(int vsota){
	
	if(vsota < 0){
		putchar('-');
		vsota = vsota * (-1);
	}
	
	if(vsota/10){
		print(vsota/10);
	}
	
	putchar(vsota%10 + '0');
}

int cifra(char predznak){

    char num = 'a';

    int stevilo = 0;

    if(predznak == '-' || predznak == '+'){
        
    }
    else{
        stevilo = (stevilo * 10) + (predznak - '0');
    }
    
    while(num != '\n' || num != ' '){

        char num = getchar();

        if(num == ' '){
            break;
        }
        else if(num == '\n'){
            break;
        }

        stevilo = (stevilo * 10) + (num - '0');
    }

 //   printf("stevilo %d\n", stevilo);

    return stevilo;
}


int smer(char znak){
    
//    printf("uletu\n");
    
    int stevilo = 0;

    if(znak == '-'){
        stevilo = cifra(znak);
        stevilo = stevilo * (-1);
    }
    else if(znak == '+'){
        stevilo = cifra(znak);
    }
    else{
        stevilo = cifra(znak);
    }

    return stevilo;
}

int main(){

    
    char znak = getchar();

    int st1 = 0;
    int st2 = 0;

    for(int i = 0; i < 2; i++){

        if(i == 0){
            st1 = smer(znak);
            znak = getchar();
        }
        else{
            st2 = smer(znak);
        }
    }

    int vsota = st1 + st2;

    print(vsota);
    return 0;
}
