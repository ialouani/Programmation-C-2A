#include <iostream>
using namespace std;//important apres le include isotreamcomme cmath.
#include "Point2.h"
#include <cmath>//voila, on revient sur ce qu'on a dit.
void Point::setX(double x)//pointeur this adresse instantanée..///
//1er fonction publique a implementer
//la synatxe tjrs tiré de l'objet méthode non sous-classe nommé: setX
//=>void Point::setX(double x) type nom de la fonction précédée de la source Point:: la classe en question.
//de même pour tous les  suivantes.
//this fait reférence au Point qu'on maipule à l'instant , c'est comme un pointeur instantanée géré par le système lui-même.
{
this->x = x;
}
void Point::setY(double y)
{
this->y = y;
}
double Point::getX()
{
return x;
}
double Point::getY()
{
return y;
}
double Point::distance(const Point &P)
{
double dx, dy;
dx = x - P.x;
dy = y - P.y;
return sqrt(dx*dx + dy*dy);
}
Point Point::milieu(const Point &P)
{
Point M;
M.x = (P.x + x) /2;
M.y = (P.y + y) /2;
return M;
}void Point::saisir()
{
  cout << "Tapez l'abscisse : "; cin >> x;//scanf copie conforme
  //equivalent à count << "Taper l'abscisse(affichage seulement jusqu'à là (explication--->RAPPELS) puis ; >> cin enregistrement comme scanf("%lf,&a) pour un double a declaree avant sur la pile puis entree sur le numero suivant en cours d'avant vie >>x.
cout << "Tapez l'ordonnée : "; cin >> y;
}
void Point::afficher()
{
  cout << "L'abscisse vaut " << x << endl;//printf
  //<=>count("L'abcisse est")<<x<<e,dl pour faire un retour à la ligne.
cout << "L'abscisse vaut " << y << endl;
}
//on implémente la partie publique ; nulle partie privée n'est touchée dans le fichier main2.cpp. Contrairement au fichier main.cpp correspondant à lancement target make file premier
