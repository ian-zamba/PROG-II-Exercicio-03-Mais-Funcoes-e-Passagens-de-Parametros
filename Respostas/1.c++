/*Um laboratorio de pesquisas governamentais conclui que um adocante artificial
comumente usado em refrigerantes dieteticos causa a morte de ratos de laboratorio.
Um amigo seu quer saber quanto refrigerante dietetico e possıvel tomar sem morrer.
Escreva um programa, utilizando funcoes, para dar essa resposta. Os dados de 
entrada serao a quantidade de adocante artificial necessaria para matar um rato, 
o peso do rato e o peso da pessoa em dieta. Para garantir a seguranca do seu 
amigo, faca com que o programa requisite o peso com o qual ele deseja ficar, em 
vez do peso atual. Assuma que o refrigerante dietetico contem um decimo de 1% de 
adocante artificial. Utilize uma declaracao de variavel com o modificador const 
para dar um nome a esta fracao. Voce pode querer expressar a porcentagem com o 
valor double 0.001.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

void calculaquant (int quantadoc, int pesorat, int pesopessoa, float& quantidaderefri);
void pedirinformacao (float& quantadoc, float& pesorat, float& pesopessoa);


int main(void) {
    
    float quantadoc, pesorat, pesopessoa;
    float quantidaderefri;

    pedirinformacao (quantadoc, pesorat, pesopessoa);
    calculaquant (quantadoc, pesorat, pesopessoa, quantidaderefri);

    round(quantidaderefri);
    printf("A quantidade de refrigerante que e preciso tomar para morrer e: %.0lf unidades", quantidaderefri);

    return 0;
}


void pedirinformacao (float& quantadoc, float& pesorat, float& pesopessoa){

    cout << "Qual foi a quantidade de adocante ultilizado?(em gramas)\n";
    cin >> quantadoc;
    cout << "Qual foi o peso do rato?(em gramas)\n";
    cin >> pesorat;
    cout << "Qual o peso que voce deseja ficar apos a sua dieta?(em kilos)\n";
    cin >> pesopessoa;

}

void calculaquant (int quantadoc, int pesorat, int pesopessoa, float& quantidaderefri){

    pesopessoa *= 1000;
    double porcentagem = 0.001;

    quantidaderefri = pesopessoa * quantadoc / pesorat / porcentagem;
/*
    if(quantidaderefri % 1 != 0){
        quantidaderefri++;
    }    
*/
}


/*
                 .eeeeeeeee
                .$$$$$$$$P"
               .$$$$$$$$P
              z$$$$$$$$P
             z$$$$$$$$"
            z$$$$$$$$"
           d$$$$$$$$"
          d$$$$$$$$"
        .d$$$$$$$P
       .$$$$$$$$P
      .$$$$$$$$$.........
     .$$$$$$$$$$$$$$$$$$"
    z$$$$$$$$$$$$$$$$$P"
   -**********$$$$$$$P
             d$$$$$$"
           .d$$$$$$"
          .$$$$$$P"
         z$$$$$$P
        d$$$$$$"
      .d$$$$$$"
     .$$$$$$$"
    z$$$$$$$beeeeee
   d$$$$$$$$$$$$$*
  ^""""""""$$$$$"
          d$$$*
         d$$$"
        d$$*
       d$P"
     .$$"
    .$P"
   .$"
  .P"
 ."
/"

ZAMBA
*/