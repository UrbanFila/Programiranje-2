#include <stdio.h>

int array[1000000];

int main(){

    int velikost = 0;

    scanf("%d", &velikost);

    for(int i = 0; i < velikost; i++){
        scanf("%d", &array[i]);
    }

    int vsota = 0;
    int max = -10000;

    for(int i = 0; i < velikost; i++){

        /*if(i == 0){
            vsota = vsota + array[i];
            max = vsota;
        }
        else{
            vsota = vsota + array[i];

            if(vsota > max){

               // printf("%d\n", array[i]);
                max = vsota;
            }
        
            if(vsota <= 0){
                vsota = 0;
            }
        }*/

        vsota = vsota + array[i];

        if(vsota > max){

               // printf("%d\n", array[i]);
                max = vsota;
        }
        
        if(vsota <= 0)vsota = 0;
    }

    printf("%d\n", max);
    return 0;
}
