/*Escreva um programa, utilizando funcoes, que determine se uma sala de 
conferencia esta violando as normas legais de incendio relativas a sua capacidade
maxima. O programa lera a maxima capacidade da sala e o numero de pessoas que 
comparecerao a conferencia. Se o numero de pessoas for menor ou igual a capacidade
maxima da sala, o programa anuncia que a conferencia esta de acordo com as normas
legais e diz quantas outras pessoas poderao participar conforme essas normas. 
Se o numero de pessoas exceder a capacidade maxima da sala, o programa anuncia 
que a conferencia nao podera ocorrer, devido as normas de incendio, e diz quantas 
pessoas dever ser excluıdas a fim de obedecer as normas.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

int calcularcapacidade(int& quantidade, int& verdade, int capacidade, int pessoas);
void imprimir (int quantidade, int verdade);


int main(void) {
    
    int capacidade, pessoas;
    int quantidade, verdade;

    cout << "Qual e a capacidade da sala?\n";
    cin >> capacidade;
    cout << "Quantas pessoas entao previstas para a reuniao?\n";
    cin >> pessoas;

    calcularcapacidade(quantidade, verdade, capacidade, pessoas);
    imprimir(quantidade, verdade);

    return 0;
}


int calcularcapacidade(int& quantidade, int& verdade, int capacidade, int pessoas){

    if(pessoas <= capacidade){
        quantidade = capacidade - pessoas;
        verdade = 1;
    }else{
        quantidade = pessoas - capacidade;
        verdade = 0;
    }

}

void imprimir (int quantidade, int verdade){

    if(verdade == 1 && quantidade != 0){
        cout << "A conferencia esta de acordo com a norma, e ainda podem entrar " << quantidade << " pessoas\n";
    }else if(verdade == 1 && quantidade == 0){
        cout << "A conferencia esta de acordo com a norma, Porem esta cheia e nao podem entrar mais pessoas\n";
    }else{
        cout << "A conferencia nao esta de acordo com a norma pois tem " << quantidade << " pessoas a mais\n";
    }

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