//#include<seven.h>
#include<stdexcept>
#include<eight.cpp>
#include<iostream>
using namespace std;
Rational::Rational() : one(0), two(1) {
}
//la liste d'initialisation ca permet d'eviter les warning mais pas a 100%
//retourne par eclipse pas utilisation de la liste avant le pas vers les propres methodes de la classe.
  
Rational::Rational(int num, int den){
  this->one=num;
  this->set__two(den);
}
int Rational::get__one() const{
  return this->one;
}

void Rational::set__one(int new_value){
      this->one=new_value;
    }
  
int Rational::get__two() const{
      return this->two;
    }

    //les contenues des structures <=> les attributs d'une classe ##!!
    //a ne pas cinfindre avec kes nale space un module ne sera jamais implemente en C contrairement en C++....
void Rational::set__two(int new_value_for_the_other){
  if(new_value_for_the_other==0){throw runtime_error("denominator cannot be null");}
  this->two=new_value_for_the_other;
}
/*on peut meme faire la meme syntaxe puis changer en evoquant les methodes de la classe*/
//par exemple tout simplement:
//surcharge ;

/*
Rational:Rational(int a, int b) : one(0),two(1){
Rational::set__one(3);
Rationnal::set_two(3);
}
et voilà pour eviter les warning avec l'activation des flags -wall -werror ..
*/
