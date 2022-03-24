#include <stdio.h>

int main(){

    int velikost = 0;

    scanf("%d", &velikost);

    int tabela[velikost];

    for(int i = 0; i < velikost; i++){
        scanf("%d", &tabela[i]);
    }

    int counter = 0;
    int pojavitev = 0;
    int je = 1;

    for(int i = 0; i < velikost; i++){
        
        if(tabela[i] == counter){
            pojavitev++;
        }
        else if(tabela[i] >= velikost){
            je = 0;
            break;
        }

        if(pojavitev >= 2){
            je = 0;
            break;
        }
        else{
            pojavitev = 1;
            counter++;
        }
    }

    if(je == 0){
        printf("NE\n");
    }
    else{
        printf("DA\n");
    }

    return 0;
}