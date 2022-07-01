#include <iostream>
#include"Point2.h"
using namespace std;
int main()
{
Point A, B, C;
double d;
cout << "SAISIE DU POINT A" << endl;
A.saisir();
cout << endl;
cout << "SAISIE DU POINT B" << endl;
B.saisir();
cout << endl;
C = A.milieu(B);
d = A.distance(B);
cout << "MILIEU DE AB" << endl;
C.afficher();
cout << endl;
cout << "La distance AB vaut :" << d << endl;
return 0;
}
//on a pas acceder a A.x ou autre chose de la partie privée en fait on fait de l'encapsulation, on a masqué la partie privée à l'utilisateur pour qu'un testeur logiciel ne='utilise que 'this' soit les parties publiques (les membres fonctionnelles ici tjrs la meme chose) pour y manipuler les données :::data.
