#include <stdio.h>

int main(){

    int spMeja = 0;
    int zgMeja = 0;

    scanf("%d %d", &spMeja, &zgMeja);

    int d = 0;
    int t = 1;
    int poskus = (spMeja + zgMeja) / 2;

    while(t == 1){

        scanf("%d", &d);

        if(d == 1){

            spMeja = poskus + 1;

            poskus = (spMeja + zgMeja) / 2;
            
        }
        else if(d == -1){

            zgMeja = poskus - 1;

            poskus = (spMeja + zgMeja) / 2;
        }
        else{
            break;
        }


    }

    if(zgMeja == spMeja){
        
        printf("%d\n", poskus);
    }
    else if(spMeja < zgMeja){

        printf("%d %d\n", spMeja, zgMeja);
    }
    else{
        printf("PROTISLOVJE\n");
    }
    
    return 0;
}
