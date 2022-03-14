#include <stdio.h>



long long Obrni(long n){

    long long rnum = 0;

    while(n > 0){

        int  stevka = n % 10;

        rnum = (rnum * 10) + stevka;

        n /= 10;
    }

    return rnum;
}

long long AliJePalindrom(long long n){

    long long st1 = Obrni(n);

    //printf("st1 %d n %d\n", st1, n);

    if(st1 == n){
        return 1;
    }

    return 0;
}

long long AliJeLy(long long i, long long k){

    long long number1 = i;
    long long pali = 0;

    for(i = 0; i < k; i++){

        number1 = number1 + Obrni(number1);

        if(number1 > 100000000000000000){
            pali = AliJePalindrom(number1);

            if(pali == 1){
                return 1;
            }
            else{
                return 0;
            }

        }

        pali = AliJePalindrom(number1);

        if(pali == 1){
            break;
        }
    }
    

    return pali;
}

int main(){

    long long iteracija = 0;
    long long spMeja = 0;
    long long zgMeja = 0;

    scanf("%lld %lld %lld", &iteracija, &spMeja, &zgMeja);

    int counter = 0;

    for(long long i = spMeja; i <= zgMeja; i++){

        long long num = AliJeLy(i, iteracija);

        //printf("%lld %lld\n", i, num);

        if(num == 0){
            counter++;
        }
    }

    printf("%d\n", counter);
    return 0;
}
