#include <stdio.h>

long long obrni(long long number){

    long long rnum = 0;

    while(number > 0){

        long long integer = number % 10;

        rnum = (rnum * 10) + integer;
        
        number = number / 10;
    }

    return rnum;
}

long long rezi(long long f, long long n){

    long long res = 0;

    for(long long i = 0; i < f; i++){

        long long stevka = n % 10;

        res = (res * 10) + stevka;

        n = n / 10;
    }

   // printf("%lld\n", res);
    return res;
}

int main(){

    long long num1, num2;

    scanf("%lld %lld", &num1, &num2);

    long long rnum1 = obrni(num1);
    long long rnum2 = obrni(num2);
   // printf("%lld %lld\n", rnum1, rnum2);
    long long r = 0;

    while(rnum2 > 0){

        long long factor = rnum2 % 10;

        r = rezi(factor, rnum1);
        
        for(int i = 0; i < factor; i++){

            rnum1 = rnum1 / 10;

        }

        printf("%lld\n", r);

        rnum2 /= 10;
    }

    return 0;
}
