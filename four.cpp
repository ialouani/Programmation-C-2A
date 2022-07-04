#include<iostream>
using namespace std;


struct Pair{
  int first;
  int second;
};

//on redefinit l'operateur << via le mot clef: ostream & operator<< le type
//est referencee pour garder la trace de compilation.
//cout<<1 definit la necessite de <<endl et avec std.. redefinissons cela.
ostream & operator<<(ostream & os, Pair p){//on renvoie le flux de type ostream & qui va permettre d'enchainer d'autres genres d'affichages.
  //opérateur de sortie pas entré de l'utilsiateur sur le clavier. 
  //pour mermettre la cascade cest a dire renvoyer une reference ~ pointeur puis ++ puis afficher d'autres données contigües par exemple.
  //os est de type ostream & donc donnée traitée par le système correspondant à un flux sortant.(re-optimisation des affichages). 


  os << p.first << "-" << p.second;
  return os;//le flux sur lequel je travaille pour que ca s'enchaine.
  //ca renvoie la meme chose qu'on avait en parametre soit ostream & os.
  //comme cout avec des données qui enchainent l'affichage.
}

int main(){
  Pair p;
  p.first=97;
  p.second=47;
  //on redefinit << operator via ostream & operator & mot clef avec ostream & pour faire du chainage protege. donc cout << p va afficher p sans le << endl normalement mais nous on veut une affichage d'une structure P (p!!) direct donc on reprogramme cout comme elle est extern ostream cout on va reprogrammer le reference operator << en prenant en parametre un flux de données limitées en ostream & os et la donnée à traiter. on fera donc le retour en $1 car c'est le flux de reference tracage en cours donc << apres entree de p count<<p enchainement flux ca va faire count << p.first << "-" << p.second <<endl alors count << p <<endl les deux << le premier fera le necessaire soit parametrer le flux depuis std::count<<jusqu'à <<endl et vers la suite.
  //conclusion: voire summary.txt.
  cout << p << endl;
  return 0;
}
