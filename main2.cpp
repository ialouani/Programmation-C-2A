#include<iostream>
//#include<eight_all_end.h>
#include<string>
#include<cmath>
#include<seven.h>
//tout est connu a cet instant ; l'affectation en est a forte et l'evaluation fonctionnelle.(ATTENTION AUX TYPES: avanat l'affect. r=..
//on fera Rationnal r=Rationnal(); et pour un autre constructeur pour hériter et instancier voire un modèle de ptotypage à partir d'une classe dans javascript
/*on FERA CELUI-ci: Rational r2;r2=Rationnal(2,3) tout simple tout est connu on a un nouveau objet sous classé qui a hérité des attributs c'est une classe 'générique'.*/
using namespace std;
int main(){
  Rational r=Rational();//c'est l'état courant de l'objet et bien c'est l'objet instancié en ce qui concerne sa partie d'or: sa partie d'or d'abstraction privée.*/ //  r=Rational;*/NN!!!!!!!!!!!!!!!!!
  r.set__one(3);
  std::cout<<r.get__one()<<endl;
  std::cout<<(double)r.get__two()<<endl;
  Rational r2;
  r2=Rational(2,3);
  std::cout<<r2.get__one()<<endl;
  std::cout<<(double)r2.get__two()<<endl;
  return 0;
}
//les getters et les setters masquent l'acces aux attributs d'une classe objet en C++.
