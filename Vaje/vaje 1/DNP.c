#include <stdio.h>

int main(){

    int iteracija = getchar() - '0';
    getchar();


    int max = 0;
    int secondMax = 0;
    int cifra = 0;

    for(int i = 0; i < iteracija; i++){
        
        cifra = getchar() - '0';
        getchar();

        if(cifra > max){

            secondMax = max;
            max = cifra;
        }  
        else if(cifra > secondMax){

            secondMax = cifra;
        }
    }

    printf("%d\n", secondMax);

    return 0;
}
