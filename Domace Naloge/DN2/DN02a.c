clude <stdio.h>

int BeriDoKonca(char z){

    int end = 0;

    if(z == '\n'){
        //printf("v\n");
        return 1;
    }
    else if(z == ' '){
       return 0;
    }

    while(z != ' ' || z != '\n'){

        z = getchar();

        if(z == ' '){
            end = 0;
            break;
        }
        else if(z == '\n'){
            end = 1;
            break;
        }
    }

    return end;
}

int Stevilo(char z){

    //

    int jeStevilo = 1;
    int vrni = 0;

    if(z == '0'){

       // printf("tule1\n");

        z = getchar();

        if(z == ' '){

        }
        else if(z == '\n'){
           // printf("tule2\n");
            vrni = 1;
        }
        else{
            //printf("hah\n");
            jeStevilo = 0;
            vrni = BeriDoKonca(z);
            putchar('0');
            return vrni;
        }
    }

    if(z >= '1' && z <= '9'){
        
        while(z != ' ' || z != '\n'){
           
            
            z = getchar();

            if(z == '\n'){
                //printf("vstop\n");
                vrni = 1;
                break;
            }
            else if(z == ' '){
                break;
            }
            else if( z >= '0' && z <= '9'){

            }
            else{
                vrni = BeriDoKonca(z);
                jeStevilo = 0;
                break;
            }

        }
    }

    int prvi = 1;

    if(z == '+' || z == '-'){
        
        z = getchar();

        if(z == '0'){
              
            z = getchar();

            if(z == ' '){
                putchar('1');
                return vrni;
            }
            else if(z == '\n'){
                putchar('1');
                return 1;
            }
            else{
                putchar('0');
                vrni = BeriDoKonca(z);
                return vrni;                
            }            
        }
        else if(z == '+' || z == '-'){
            putchar('0');
            vrni = BeriDoKonca(z);
            return vrni;
        }
        else if(z == ' '){
            putchar('0');
            return 0;
        }
        else if(z == '\n'){
            putchar('0');
            return 1;
        }
        else if(z >= '1' && z <= '9'){
        
            while(z != ' ' || z != '\n'){
                
                z = getchar();

                if(z >= '0' && z <= '9'){
                   
                }
                else if(z == ' '){
                    break;
                }
                else if(z == '\n'){
                    vrni = 1;
                    putchar('1');
                    return 1;
                }
                else{
                    
                    vrni = BeriDoKonca(z);
                    jeStevilo = 0;
                    break;
                }


            }
        }
    }


    if(jeStevilo == 1){
        putchar('1');
    }
    else{
        putchar('0');
    }

    return vrni;
}

int main(){

    int t = 1;
    int exit = 0;

    while(t == 1){

        //printf("a\n");
       
        char znak = getchar();

        exit = Stevilo(znak);

        if(exit == 1){
            break;
        }
    }

    putchar('\n');
    return 0;
}
