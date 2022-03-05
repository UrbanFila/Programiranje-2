#include <stdio.h>

int main(){

    int iteracije;

    scanf("%d", &iteracije);

    int cifra = 0;
    int prejsnaCifra = 0;
    int res = 1;

    for(int i = 0; i < iteracije; i++){
        
        scanf("%d", &cifra);

        if(i == 0){

            prejsnaCifra = cifra;
        }
        else{

            if(prejsnaCifra != cifra){

                res = 0;

                break;
            }
        }
    }
    
    if(res == 1){

        putchar(res + '0');
        putchar('\n');

    }
    else{

        putchar(res + '0');
        putchar('\n');
    }

    return 0;
}