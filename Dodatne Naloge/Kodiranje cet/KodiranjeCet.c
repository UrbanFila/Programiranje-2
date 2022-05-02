#include <stdio.h>

void FirstPrint(char z, int c){

    for(int i = 0; i < c; i++){
        putchar(z);
    }

}

void SecondFirstPrint(char z, int c){

    putchar('#');
    putchar(z);
    printf("%d", c);
    putchar('#');
}

void FirstHashPrint(char z){

    z = getchar();

    if(z == '#'){

        z = getchar();

        int iz = z - '0';

        for(int i = 0; i < iz; i++){
            putchar('#');            
        }

        getchar();
    }
    else{

        int iz = 0;
        char moment = z;

        while(z != '#'){
         
            z = getchar();

            if(z == '#'){
                
            }
            else{
                iz = (iz * 10) + (z - '0');
            }

        }
        
        for(int i = 0; i < iz; i++){
            putchar(moment);
        }
    }
}

int main(){

    int k = 0;
    scanf("%d", &k);
    getchar();

    int counter = 1;

    if(k == 1){

        char znak = '1';
        int first = 0;
        char next = '-';

        while(znak != '\n'){

            znak = getchar();

            if(first == 0){
                next = znak;
                first = 1;

            }
            else{


                if(znak == next){
                    counter++;
                }
                else{

                    if(next == '#'){
                        SecondFirstPrint(next, counter);
                        next = znak;
                        counter = 1;
                    }
                    else if(counter < 5){
                        FirstPrint(next, counter);
                        counter = 1;
                        next = znak;
                    }
                    else{
                        SecondFirstPrint(next, counter);
                        counter = 1;
                        next = znak;
                    }               
                }
            }
        }
    }
    else{

        char znak = '1';
        int first = 0;
        char next = '-';

        while(znak != '\n'){

            znak = getchar();

            if(znak == '\n'){
                break;
            }

            if(znak == '#'){

                FirstHashPrint(znak);

            }
            else{
                putchar(znak);
            }
        }
    }

    putchar('\n');

    return 0;
}
