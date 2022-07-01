#include <iostream>
using namespace std;
#include "Point4.h"
int main()
{
Point A, B, C;
double d;
 cout << "SAISIE DU POINT A" << endl;//affichage standard
 cin >> A;//direct cin>>A l'entree de l'utilisateur via A qui contient les fonctions amis accompagnés au besoin!!!
 cout << endl << "SAISIE DU POINT B" << endl;//3ieme partie<=>(*)///../////
 cin >> B;//de meme
 cout << endl;//saut a la ligne(*)
C = A.milieu(B);
d = A.distance(B);
 cout << "MILIEU DE AB" << endl << C << endl;//enchainement ce sont des isntances
 //on ecrit direct apres endl << C << endl en meme temps; c'est ca le but, de paralléliser systématiquement et d'une facon masquée l'éxecutuon d'affichage ultime.
 cout << "La distance AB vaut :" << d << endl;//c'est la meme chose chose car ca sert a rien ici.
 /* ..et voila la vraie utilite de l'utilisation de la 3ieme methode d'aggisement sur le systeme(disons deux) en responctons les criteres forts de l'encapsulation.*/
return 0;
}
