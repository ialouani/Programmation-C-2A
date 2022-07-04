#include<iostream>
using namespace std;
//La normalisation ISO du C++ en 1998 a défini que <iostream> serait l'en-tête standard pour les entrées-sorties. L'absence de . h dans son nom indique qu'il s'agit désormais d'un en-tête standard, et donc que toutes ses définitions font partie de l'espace de nommage standard std. Inclure <iostream>.
int main(){
  std::cout<<"!!!Bonjour tout le monde!!!"<<std::endl;

  int a=33;
  int b=44;
  int c=55;


  cout << a << " " << b << " " << c << endl;
  //enchaînement d'informations de print puis retour a la ligne. 
  
  return 0;
}
/*
Ainsi, lorsque nous exécutons un programme pour imprimer quelque chose, "using namespace std" indique que si vous trouvez quelque chose qui n'est pas déclaré dans la portée actuelle, allez vérifier std. En utilisant l'espace de noms std ; sont utilisés. C'est parce que l'ordinateur a besoin de connaître le code des fonctionnalités cout, cin et il a besoin de savoir dans quel espace de noms elles sont définies.
*/
