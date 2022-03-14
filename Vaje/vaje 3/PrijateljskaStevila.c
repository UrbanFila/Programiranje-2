#include <stdio.h>

int aliJePrijatelj(int st1, int st2){

    int v = 0;

    for(int i = 1; i < st2; i++){

        if(st2 % i == 0){
            
            v += i;

        }
    }

    if(v == st1){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){

    int stevilo;

    scanf("%d", &stevilo);

    int drugoStevilo = 0;

    for(int i = 1; i < stevilo; i++){

        if(stevilo % i == 0){

            drugoStevilo = drugoStevilo + i;

        }
    }

    //printf("%d\n" drugoStevilo);

    int friend = aliJePrijatelj(stevilo, drugoStevilo);

    if(friend == 1 && drugoStevilo != stevilo){
        printf("%d\n", drugoStevilo);
    }
    else{
        printf("NIMA\n");
    }


    return 0;
}
