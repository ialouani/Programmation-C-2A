#include <iostream>
using namespace std;//important!!(explications apres le #include<iostream> comme #include<cmath> sans .h.
#include "Point.h"
/*
Utilisez l'instruction "using namespace std" dans les définitions de fonction ou de classe, les définitions de struct. Ce faisant, les définitions d'espace de noms sont importées dans une portée locale, et nous savons au moins d'où peuvent provenir les erreurs éventuelles si elles surviennent.
*/
int main()
{
  Point A, B, C;//On définit trois points A et B et C après avoir inclus le Point.h.
  //instances de la classe Point.
  //comme une définition d'un objet exemple exempt de structure.
double d;
 cout << "SAISIE DU POINT A" << endl;//principe de printf en C++.
 //count<<"SAISIE DU POINT A <<endl;
 cout << "Tapez l'abscisse : "; cin >> A.x;//principe du scanf en C++
 //count <<"TAPEZ L'ABSCISSE: "; cin >> A.x car entrée dans le système pas sortie en affichage standard "".
 cout << "Tapez l'ordonnée : "; cin >> A.y;//de même.
 cout << endl;//fin du scanf (obligée).
cout << "SAISIE DU POINT B" << endl;
cout << "Tapez l'abscisse : "; cin >> B.x;
cout << "Tapez l'ordonnée : "; cin >> B.y;
//on a définit des types de structures soit classes en C++ avec les membres données et avec les fonctions dans le fichier ou a utilise la syntaxe Point Point::milieu(struct Point &P) par exemple.
//c'est une instance en publique(A ouB)=>les deuxcontiennent la définition des deux fonctions en questions milieu et distance.
//avec les deux instances la simple syntaxe de A.milieu(B) va calculer le milieu entre A et B et le tradure en une instance nommée C comme le type de retour de la fonction milieu.
C = A.milieu(B);
d = A.distance(B);
//de même la distance entre les deux avec une pré-déclaration(typage statique pour le moment,..) pour d.
 cout << endl;//<=>equivalent ) printf("\n");
 cout << "MILIEU DE AB" << endl;//impression du mileiu de AB pas de type comme printf("%lf",__const_char__**):..
 cout << "L'abscisse vaut : " << C.x << endl;//entrée de C.x pour l'absicesse du mielieu de AB avec endl pour marquer la fin; le retour à la ligne.
 cout << "L'ordonnée vaut : " << C.y << endl;//de même.
 cout << endl;//retour à la ligne(saut le ligne)
 cout << "La distance AB vaut :" << d << endl;//de même pour la distance en double du segment AB.
 return 0;//$?===0
}
