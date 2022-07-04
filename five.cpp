 #include<iostream>
#include<five.h>
#include<five_Other.h>
#define mini2(a,b) ((a)<(b)?(a):(b))//PAS D'OUBLI DE PARENTHESES///
//fini les macros ; se concentrons sur les fonctions inline.
using namespace std;
int main(){
  int a=3;
  int b=66;//66 car pas parentheses dans l'ensemble.ATTENTION!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  std::cout << rslt(a,b) <<endl;
   std::cout << rslt2(a,b) <<endl;
 std::cout << rslt3(a,b) <<endl;
 std::cout << rslt4(a,b) <<endl;//ca va choisir le inline le premier direct dans un cpp le deuxieme doublement divises.(h.cpp)
 //attention aux macros et eviter d'oublier les parentheses memes betes
 //car cela peut couler.
    std::cout << minimm(a,b) <<endl;//on sait qu'elle marche pour différencier les deux manipulations plus avancées d'opéranDES.
         std::cout << minimm(900,100) <<endl;//voir remarque ci-dessus ; un seul choix point pas de réalisation après.(petite erreur)
     //ce qui a ete attendu est TOP.
     //on implemente pas en C++ une macro et une macro est simple void* reference<=>NE TIENT PAS EN COMPTE DES TYPES.
    std::cout<<mini2(100,300)+2<<endl;
  return 0;
}
