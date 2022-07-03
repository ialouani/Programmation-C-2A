#include"Point5.h"
#include <iostream>//important dans n'importe quel developpement C++.///
#include<istream>
#include<string>
#include<cmath>
#include<ostream>

Point::Point()
{
x = 0;
y = 0;
}
Point::Point(double x, double y)
{
this->x = x;
this->y = y;
}//au tout début; leurs définitions via les instanciations parrait BON.

void Point::setX(double x)
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
}
/*
void Point::saisir()
{
cout << "Tapez l'abscisse : "; cin >> x;
cout << "Tapez l'ordonnée : "; cin >> y;
}
void Point::afficher()
{
cout << "L'abscisse vaut " << x << endl;
cout << "L'abscisse vaut " << y << endl;
}*/
/*
ostream & operator<<(ostream & out, const Point &P)
{
out << "L'abscisse vaut " << P.x << endl;
out << "L'ordonnée vaut " << P.y << endl;
return out;
}
istream & operator>>(istream & in,Point &P)
{
cout << "Tapez l'abscisse : "; in >> P.x;
cout << "Tapez l'ordonnée : "; in >> P.y;
return in;
}*/
//meme remarque que precedente; revient au principe de l'implementation precedente.


//comme les fonctions, cela ce sont des fonctions constructeurs au lieu des fonctions normales par exemple void setX(double x) on! fait comme ca::
//void Point:: distance(Point &P)
//le constructeur suivant les conventions de Point.h se fera via:
//moyen mnemothechnique ..explications plus détaillées:
//on a un Point() et le 1er constructeur est Point() comment se souvenir est:
//.Point() sans argument permet d'instancier un objet immédiatement.
//Cela se fait via Point5.cpp via comme void::PointPoint display(Point point &p)
//moyen se si savoir VIA: Point.display.. on fera:
//Point::Point(){
//x=0;
//y=0;
//}
//et de même a part le constructeur non trivial;donc:
//Point(type de la fonction)::Point(double x,double y) qui permet de faire:
//this->x=x avec this reference pointée à la sous-classe en cours
//this->y=y cela permet de faire en sorte que l'adresse en cours
//l'instanciation ait comme cordonnées x et y.

/*
Explications
• Le constructeur par défaut initialise x et y à la valeur 0.
• Pour le deuxième constructeur this->x désigne la données membre x de la classe et y désigne le paramètre du constructeur.
• Idem pour this->y.
*/
