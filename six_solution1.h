//en terme d'implémentation, je doit raccrocher mon implémentation au namespace encapsulé nn à l'intèrieure!.//
#ifndef B
#define B
namespace six_solution1{
  int function(int a){
    return a*a*a*a;
  }
}
#endif//implémnt entation directe pour eviter de faire de la compilation separee
//unique ; ainsi on evite la confusion du linker en precisant le bon.h qui le doit avec surement les mots phars:
//using namespace six_solution1 (same name as the main header name file)
//six_solution1::function(5) pour executer sans un type de retour initial en un void.
//include <IOstream> ; string ; cmath ; cstdio et le fichier phare six_solution1.h qui va implémenter tout le namespace pour que la compilation rapporte des la 1ere etape le namespace en entier=>>a memoriser...!!!!!!!!!!
//On peut definir des namespaces tendues de meme ; c'est une initiaiation astucieuse a l'approche objet:
/*
UN NAMESPACE n'est pas une structure, un objet classe mais un objet portant un ensemble d'objets imbriqués regroupés entre eux les buts sont diverses lais ca tient sur la memoire quand meme par exemple:
namespace fooot{
namespace equipes{
void display(struct equipe &equipe){
int i=0;
while(i<12){
std::cout<<equipe->i<<std::endl;
i+=1;
}
}
}
}
pour l'utiliser direct car pas de retour:
foot::equipes::display(&equipe10)
ou bien using name space foot::equipes
et après directement l'acces tout est dedans comme l'inclusion du .h des le depart qui contient l'implémentation ; ca va donner comme structure syntaxique:
diqplay(&equipe111);sur une base de données par exemple d'equipes DISPOS.*/
//implementation directe possible en reprenant tout le monde du name space.
