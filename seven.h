#ifndef R_H_
#define R_H_
class Rational{
 private://important sinon la securite nous bloque::::!!!!!
  //private:(manege via les membres methodes comme dit avant)
  int one;
  int two;//privé donc bcppp d'erreurs de compils..///
  //seul le type de donnée rationnal est capable d'accéder à one,two.
 public:
  //ce sont des methodes; logiquement forcement publiques.
  Rational();
  Rational(int a,int b);
  int get__one() const;
  void set__one(int new_value);
  
  int get__two() const;
  void set__two(int new_value_for_the_other);
  //il faut coder ces fonctions qui sont dans le cpp l'implementation forcement pour varier varier varier.///////
  
  
};

#endif
