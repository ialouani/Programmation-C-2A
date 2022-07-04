#include<iostream>
using namespace std;

void swap(int a, int b){
  std::cout << "a==" << a << " - b==" << b << std::endl;
  int temp=a;
  a=b;
  b=temp;
  std::cout << "a==" << a << " - b==" << b << std::endl;
}

void swap(int* a, int* b){//passage par adresse
  //les deux adresses changent
  //la valeur affectee a chaque block change
  //du coup *a devient *b et reciproquement.
  std::cout << "a==" << a << " -b==" << b << std::endl;
  int temp=*a;
  *a=*b;
  *b=temp;
  std::cout  << "a==" << *a << " -b==" << *b << std::endl;
}
//---------------------passage de âraùètres par références.::>>>
void swapR(int & a, int & b){
  std::cout << "a==" << a << "=" << " - b ==" << b << std::endl;
  int temp=a;
  a=b;
  b=temp;
  std::cout << "a==" << a << "=" << " - b ==" << b << std::endl;
  
  return;
}
//le but de cette approfondissement en applications C++: passage par reference.
//passage par adresse le type un ptr (int* par exemple) passage par reference
//presque mais ca reference la donnee donc le type int &)

//enchainements des operations << "" << value comme dans
//la structure syntaxique de printf.

int & mini(const int & a, const int & b){
  return const_cast<int &> (a<b ? a: b);
}


int   mini2(int a, int b){
  return (a>b)?a:b;
}



//la donnée d'origine second a été récupéré sur une adresse éventuellement rslt
//et celle-ci a ete modifiee elle aussi car via le prototype: int & --type de retour fonctionnel--.///

int main(){
  int first=10;
  int second=20;
  swap(first,second);
  std::cout<<"first one\t"<<first<<"\tsecond\t"<<second<<endl;
  swap(&first,&second);//PASSAGE DE PARAMETRES PAR REFERENCES.
  //NOTRE PREMIERE APPLICATION C++.
  std::cout<<"first one\t"<<first<<"\tsecond\t"<<second<<endl;
  second=20;first=10;//modification en cours d'execution bien sur.
  swapR(first,second);
  std::cout<<"first one\t"<<first<<"\tsecond\t"<<second<<endl;
  //reconsidere l'adresse de a meme si on le manipulera comme un
  //entier normal et fait en sorte que l'enchainement tient en compte des
  //operations 'mises en valeurs' normales tout en faisant le boulot discretement cat de type int & avec espace considere la int et repositionne la (sa reference liee au typage) a la bonne place memoire.Voilà.
  //std::cout << "first==" << first << " - second==" << second << std::endl;
  int a2=55;
  int & alias = a2; //par valeur portant le terme collé de position referencee en memoire.
  alias=66;
  //comme un *a=8 dont a est une adresse le 
  std::cout<<"\n\nmain a2==\t\t\t\t\t"<<a2<<endl;
  //On remarque que presque meme mecanisme alias a change c'est celui declare
  //en reference qui change de 'pointage' tjrs comme a avec int * qlqchose passée en paramètres par adresse.
  //le fait de declarer int & a <=> a pointe sur disons c'est une reference memoire a a. Mais son utilisation l'indique seulement, son utilisation se revient au passage par valeurs.
  //c'est comme le print alias qui est devenu a2 a fixe son meme type pour 66 ; cela vaut le plus de passages par adresses.

  int & result=mini(first,second);//tout simple l'ajout de & pour faire signe seulement.
  std::cout<<result<<std::endl;
  std::cout<<"\n\n*********************************************\n\n"<<std::endl;
  result++;//reference recuperee de la donnee d'origine la VALEUR.
  //result soit une adresse donc a ete modifiee ; effectivement ; 
  std::cout<<"second\t"<<second<<"\nresult\t"<<result<<endl;
  //result n'a pas changé mais second qui est 20 devient 21
  //la recuperation du pointeur d'origine se fait via la donnée manipulée du coup un int on avance d'une valeur spécialement ICI.
  //un avancement d'adresse de int reference la conventiond des 4 BLOCKS SOIT +1.

  //verification de first et second pas de modification enfin presque car
  //second est une reference placée par optimisation dans la meme bloqck memoire que le resultat fonctionnel fort: resul.
  first=10;second=10;  int & resul =mini(first,second);
  resul++;
   std::cout<<resul <<endl;
   std::cout<<first <<endl;
   std::cout<<"\n\n\n"<<endl;
  //ENTREE puis allocation via 'valgrind' ''automatique'' du resultat dans une zone memoire ou va se trouver colle la reference soit l'adresse le pointage ### vers la valeur elle-même. une fois l'affectation se fait avec ce genre de parametre la reference de change pas de second mais la valeur de second(EFFET DE BORD)se realise et permet de referencer le resultat a second ainsi ils sont liées car c'est du pointage d'adresses mutuelles seulement.
  //un result++ permet (type int & ) donne l'incrementation aux deux car resul est desormais avec ++et un type &<=>*&++ surtout car l'adresse a ete recuperere du resultat.//le M-x et uncomment.. de result++ ne change pas resul :
 //           TOUT CE QU'ON A DIT CONCERNE LE 1ER CAS.
    resul++;
   std::cout<<first<<" \t\t\t\t\t\n\n"<<endl;
   std::cout<<resul <<endl;//et voila 12 la reference le minimum change de case dans la pile d'elements.
   std::cout<<"\n"<<second<<endl;//et lui aussi bien sur referencenet desormais le meme truc.
   //dernier truc.
   int   rssl  =mini2(10   ,40    );//out simple l'ajout de & pour faire signe seulement.
   rssl++;
   std::cout<<"ssl"<< rssl <<endl;
   std::cout<<"ssl"<<second<<endl;
    std::cout<<"ssl"<<first <<endl;
    //voilà ; tout est logique et permanent ; passons à la 3ième partie:
    //la surchage des fonctions et des operateurs.
  return 0;
}
