#include "velha.h"


void velha::inicializar(char V[3][3]){
     for( int i = 0; i<3; i ++)
          for( int j=0; j<3;j++)
                 V [i][j] = NULL;

};



void velha::desenhaMatriz(char V[3][3]){
 system ("clear");
 std::cout<< "------- ------- -------" <<std::endl;
 for( int i =0; i<3; i ++){
 for( int j =0; j<3; j ++){
 std::cout<< "|   " << V[i][j] << "   |";
 }
 std::cout<<std::endl << " ------- ------- -------" <<std::endl;
   }
 };

bool velha::verificaVencedor ( char V [3][3] , char jog , int linha , int coluna ){
// verificando a linha
         int cont = 0;
               for( int k =0; k<3; k ++){
                   if(V[ linha][k] == jog){
                             cont ++;
      }
  }
              if( cont == 3){
                    return true;
  }
  // verificando a coluna
                cont = 0;
                   for( int k = 0; k <3; k ++){
                            if(V[k][coluna] == jog ){
                                cont ++;
  }
  }
               if(cont == 3){
                        return true;
  }
  // diagonais
                 if(( V [0][0] == 'x' && V [1][1] == 'x'  && V [2][2] == 'x' ) ||
                    (V [2][0] == 'x'  && V [1][1] == 'x'  && V [0][2] == 'x' )){
               return true;
 }
                    return false;
 };
