#include<seven.h>
#include<stdexcept>
using namespace std;
Rational::Rational(){
  
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
