#include "forca.h"
#include "velha.h"
#include "senha.h"


using namespace std;

int main(){
    forca F;
    velha W;
    senha S;
    int op , jogadas;
    string p1 , p2 , letras ;
    char L ;
    bool achei , acertou;
    srand ( time ( NULL ) );
    do{
        system("clear");
        cout<<"bem vindo ao jogo POO..o seu jogo da velha e forca em C++ <3"<<endl;
        cout<< "1 - Jogo da Forca "<< endl;
        cout<<"2 - Jogo da velha  "<<endl;
        cout<<"3 - jogo da senha "<<endl;
        cout<<"4-sair"<<endl;
        cin>>op;
        switch (op){
            case 1:
                p1 = F. Sortear() ;
                letras = "";
                jogadas = 0;
                p2 = F. montarP2( p1 );
                acertou = false;
                do{
                    system (" clear ") ;
                    cout<< " Palavra: " << p2 << endl ;
                    cout<< " Letras : " << letras << endl ;
                    cout<< " Jogadas: " << jogadas << endl ;
                    cout<< " Informe uma letra : " ;
                    cin>> L;
                    p2 = F.verificarLetra (p1 , p2 , L , & achei );
                    if (! achei ){
                        jogadas++;
                    }
                    acertou = F.verificaFimJogo(p2);
                }while(jogadas<6 && !acertou);
                if(acertou){
                    cout<< " Parabéns !!! acertou a palavra: " << p2 << endl ;
                }
                else {
                    cout<< " Que pena !! a palavra era: " << p1 << endl ;
                }
            break;
            case 2:


                     char V [3][3];
                     int i , j , jogadas , cont , k ;
                     bool J1 , J2 , linha , coluna , diagP , diagS ;
                     char continua;


                     jogadas = 0;
                     J1 = false ;
                     J2 = false ;

W.inicializar(V);


                     do{
W.desenhaMatriz(V);

                     do{
                     cout<< " Jogador 1 , faça sua jogada informando linha e coluna :"<<endl;
                     cin>> i >> j;
                     } while (V [i][j] != NULL );

                     V[i][j] ='x';
                        J1 =W.verificaVencedor(V , 'x', i , j);

                        if( J1 )
                        break ;

                        jogadas ++;

                        if( jogadas < 9) {

W.desenhaMatriz(V);
                        do{
                        cout<< " Jogador 2 , faça sua jogada informando linha e coluna : "<<endl;
                        cin>> i >> j;
                         } while ( V[i][j] != NULL );

                         V [i][j] = 'o';

                         J2 = W.verificaVencedor(V , 'o', i , j) ;

                         if( J2 )
                         break;

                         jogadas ++;

                         }

                         } while (( jogadas < 9) && (! J1 ) && (! J2 )) ;

                         if( J1 ){
                         cout<< " Jogador 1 venceu !!!!! "<<endl;
                         } else if( J2 ) {
                         cout << " Jogador 2 venceu !!!! "<<endl;
                         } else{
                         cout<< " Empatou !!!! "<<endl;
                         }
break;
              case 3:
              int acertos;
              system("clear");
              S.gerarsenha();
              jogadas=1;
              acertou=false;
              do{
                cout<<"informe um palpite: "<<endl;
                cout<<" | V-vermelho | a-azaul |  p-preto | b-branco| "<<endl;
                cout<<"jogadas: "<<jogadas<<":"<<endl;
                for(i=0;i <4; i++){
                cin>>S.palpites[i];
                }
                acertos=S.verificaracertos();
                if(acertos==4){
                acertou=true;
                }else{
                   jogadas++;
                   cout<<acertos<<"acertos"<<endl;
                }
              }while(jogadas<=10&& ! acertou);
               if(acertou){
               cout<<"parabens voce acertou"<<endl;
               }else{
               cout<<" que pena voce perdeu, a senha era: "<<endl;
                 for(i=0;i<4;i++)
                 cout<<S.senhagerada[i]<<" ";
               }
break;

              case 4:
                cout<<"Tchau!! "<<endl;
              break;
              default:
                cout<<"Opção Inválida "<<endl;
        }
                cin.ignore().get();
    }while(op=!3);
               return 0;
}
