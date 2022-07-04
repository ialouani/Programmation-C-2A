
#include<iostream>
#include<six_solution2.h>

namespace six_solutions23{//implementation directe possible mais necessitant des techniques de compilation/poo/sgbd.
  int function(int a){//non pas via globalement namespaces;utiliser pauvrement A:: dans six_all le main() bien sur pour differencier les deux lini_causes_symboles.
    return a*a;
  }
}

//contraire du .h on declare le prototype seulement à l'intèrieur du spacename.
