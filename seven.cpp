#include<iostream>
using namespace std;
#include<seven.h>
int main(){
  Rational r;//contient en partie privee par defaut d'un one two 2 attributs.
  r.set__one(1);//propriete d'acces aux attributs.
  r.set__two(2);
  std::cout << "[" << r.get__one() << "/" << r.get__two() << "]" << std::endl;
  return 0;
}
