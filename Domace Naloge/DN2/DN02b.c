#include <stdio.h>

int BeriDoKonca(char z){

    if(z == '\n'){

        return 1;
    }
    else if(z == ' '){
        return 0;
    }

    while(z != ' ' && z != '\n'){

        z = getchar();

        if(z == '\n'){
            return 1;
        }
        else if(z == ' '){
            return 0;
        }
    }

    return 0;
}

int Exit(char z){

    int vrni = 0;

    if(z >= '1' && z <= '9'){

       while(z != 'a'){
            z = getchar();

            if(z == '\n'){
            
                putchar('1');
                return 1;
            }
            else if(z == ' '){
           
                putchar('1');
                return 0;
            }
            else if(z >= '0' && z <= '9'){

            }
            else{

                vrni = BeriDoKonca(z);
                putchar('0');
                return vrni;
            }
        }
    }
    else if(z == '0'){
        
        z = getchar();

        if(z == '\n'){
            
            putchar('1');
            return 1;
        }
        else if(z == ' '){
            
            putchar('1');
            return 0;
        }
        else if(z >= '0' && z <= '7'){
            
            z = getchar();

            if(z == '\n'){
                putchar('1');
                return 1;
            }
            else if(z == ' '){
                putchar('1');
                return 0;
            }
            else if(z >= '0' && z <= '7'){
               
                while(z != ' '){

                    z = getchar();

                    if(z == '\n'){
    
                        putchar('1');
                        return 1;
                    }
                    else if(z == ' '){
                        
                        putchar('1');
                        return 0;
                    }
                    else if(z >= '0' && z <= '7'){
                    }
                    else{
                        
                        vrni = BeriDoKonca(z);
                        putchar('0');
                        return vrni;
                    }
                }
               
            }
            else{
                vrni = BeriDoKonca(z);
                putchar('0');
                return vrni;
            }
        }
        else if(z == 'x'){
         
            z = getchar();

            if(z == '\n'){
            
                putchar('0');
                return 1;
            }
            else if(z == ' '){
           
                putchar('0');
                return 0;
            }
            else if(z >= '0' && z <= '9'){

                while(z != ' '){

                    z = getchar();

                    if(z == ' '){
                        putchar('1');
                        return 0;
                    }
                    else if(z == '\n'){
                        putchar('1');
                        return 1;
                    }
                    else if(z >= '0' && z <= '9'){
                    }
                    else if(z >= 'A' && z <='F'){
                    }
                    else{

                        vrni = BeriDoKonca(z);
                        putchar('0');
                        return vrni;
                    }
                }
            }
            else if(z >= 'A' && z <= 'F'){
    
                while(z != ' '){

                    z = getchar();

                    if(z == ' '){
                        putchar('1');
                        return 0;
                    }
                    else if(z == '\n'){
                        putchar('1');
                        return 1;
                    }
                    else if(z >= '0' && z <= '9'){
                    }
                    else if(z >= 'A' && z <='F'){
                    }
                    else{

                        vrni = BeriDoKonca(z);
                        putchar('0');
                        return vrni;
                    }
                }
            }
        }
        else if(z == 'b'){

            z = getchar();

            if(z == '\n'){
                putchar('0');
                return 1;
            }
            else if(z == ' '){
                putchar('0');
                return 0;
            }
            else if(z >= '0' && z <= '1'){

                while(z != ' '){

                    z = getchar();

                    if(z == '\n'){
                        putchar('1');
                        return 1;
                     }
                    else if(z == ' '){
                        putchar('1');
                        return 0;
                    }
                    else if(z >= '0' && z <= '1'){

                    }
                    else{
                        vrni = BeriDoKonca(z);
                        putchar('0');
                        return vrni;
                    }
                }
            }
            else{

                vrni = BeriDoKonca(z);
                putchar('0');
                return vrni;
            }

        }
        else{
            
            vrni = BeriDoKonca(z);
            putchar('0');
            return vrni;
        }
    }
    else{

        vrni = BeriDoKonca(z);
        putchar('0');
        return vrni;
    }

    return 0;
}

int main(){

    int exit = 0;
    char znak;

    while(exit == 0){

     
        znak = getchar();

        exit = Exit(znak);

        if(exit == 1){
            break;
        }
    }

    putchar('\n');

    return 0;
}