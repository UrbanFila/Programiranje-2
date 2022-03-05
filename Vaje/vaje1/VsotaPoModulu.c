#include <stdio.h>

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    int vsota = a + b;

    printf("%d\n", vsota % 10);

    return 0;
}
