#include<iostream>
#include<cmath>
#include<string>
/*notions de suffixes:
u,U(non signé)
5000u/U par exemple(suit la même procédure~~~ pour tous les autres)
f,F(Flottant)
L,l(Long int, Long double)
LL(Long Long int)
*///a apprendre (pas tres important)


//prefixes:
/*//decimilisation binaire.
Ob(binaire)
0(octal)
Ox(héxadécimal)
*/

void display(char * d){
  do{
    std::cout<<*d++;
  }while(*d);//pas while(d!=nullptr car \0 ne "reference pas la page NULL  --contenu--  sur C++).
  std::cout<<"\n"<<std::endl;
    }

int main(){
  char a={'a'};//1er type de declaration de variables.
  //comme char qlqchose on sait si un tabeau on le fait la forme {'','',etc..}
  char a2[]="abcde";//<=>declaration de reference seulement
  // a e=ne pas confondre avec le seglent de donnees dont l'adresse ne peut pas
  //changer.
  char a3[]={'a','b','c','d','e','\0'};
    std::cout<<a2<<std::endl;
  std::cout<<a<<std::endl;
  display(a3);
  int file_rights=0b11010;
  std::cout<<file_rights<<std::endl;//conversion immediate LOGIQUE.
  std::cout<<"\n"<<std::endl;
  //autres methodes plus fortes(on verra pour les chines de characteres):
  //les std::string comme l'inclusion de iostream qui nous impose le namespace std..
  std::string welcome_message{"Hello World"};//ca fait un truc en plus.
  //la variable va etre detruite des le passage a la ligne suivante.
  std::cout<<"Bonjour:!!"<<std::endl;
  std::cout<<welcome_message<<std::endl;
  //comme ca c'est mieux en un seul block..(ca revient tous simplement a ce qui precede)
  //retenons: std::string comme methode <=> type char et le nom du char <=> le tout jusqu'a maintenant <=> char a reste[] se traduit par ={} encapsuler le resultat dans des "" permet de vsualiser ce qu'on voulait dire, exprimer depuis le debut.

  
  long long big_number = 14'815'100;
  std::cout<<big_number<<std::endl;//ecriture normale a assurer a la fin .////
  int const some_number2={1455};//equivalentes aux chaines a un seul charactère.
  int some_number={1455};
  std::cout<<some_number<<std::endl;
  std::string hello {"hello"};
  std::cout<<hello<<std::endl;
  hello="allô";
  std::cout<<hello<<std::endl;
  /*  some_number2=166;//pour en contourner impossible!!!*/
  std::cout<<some_number2<<std::endl;
  //conformite: affichage avec ce qui a ete declare statiquelent sur la PILE!!!!!!
  //1ere faille: deja traitee.
  int some_code{2000};
  std::cout<<some_code<<std::endl;
  //2ieme faille: a ne pas changer const int / int const.

  //rq: le flux permettant l'affichage(bas niveau) interndit la sortie d'une valeur courante'''''' dans le terminal apres make et execution//..////////////////
  auto some_code2{1455};
  std::cout<<some_code2<<std::endl;
  //3ieme faille: typage statique et synamique grace aumot cle AUTO.(mais pas top)
  //si c'est un flottant (obligé: 1555.0??? àajouter).
  //pas de problemes sur les char* simples?
  auto some_string4{"Hello World"};
  std::cout<<some_string4<<std::endl;
  ///mais il a fallu faire cela POUR FAIRE DU C++ PAS DU C:
  using namespace std::literals;
  auto some_string44{"Hello World"};
  //tu lui dis dicretement vu que t'as inclus le namespace std::literals
  //que le type a la compilation sera fixe a std::string objet de classe(###).
  std::cout<<some_string44<<std::endl;
  auto variabl{true};//et voila la non completude.
  std::cout<<variabl<<std::endl;
  return 0;
}
