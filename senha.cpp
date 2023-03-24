#include "senha.h"

void senha::gerarsenha(){
    for(int i=0;i<4;i++){
        senhagerada[i]=cores[rand()%4];
    }
};
int senha::verificaracertos(){
    int total=0;
    for(int i=0;i<4;i++){
        if(palpites[i]==senhagerada[i]){
            total++;
        }
    }
    return total;
};
