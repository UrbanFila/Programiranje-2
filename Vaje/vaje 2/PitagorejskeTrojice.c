#include <stdio.h>
#include <math.h>

int main(){

    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);
    
    int st3 = 0;
    int counter = 0;
    int najden = 0;

    for(int i = a; i <= b; i++){

        for(int c = 1; c < b ; c++){

            st3 = sqrt(i*i - c*c);

            if(st3 * st3 + c*c == i*i && st3 != 0 && najden == 0){
                counter++;
                najden = 1;
                //printf("%d %d %d\n", st3*st3, c*c, i*i);
            }
        }

        najden = 0;
    }

    printf("%d\n", counter);


    return 0;
}
