#include "Point4.h"//cela suffit
#include <cmath>
#include <iostream>
#include<string>//a ajouter ces 3 derniers en cas de conflits(gestion exceptionnelle par le compilateur g++)
using namespace std;
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
void Point::saisir()
{
cout << "Tapez l'abscisse : "; cin >> x;
cout << "Tapez l'ordonnée : "; cin >> y;
}
void Point::afficher()
{
cout << "L'abscisse vaut " << x << endl;
cout << "L'abscisse vaut " << y << endl;
}


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
}
//implementation de cette maniere: le prototype reste le meme:
//on enleve friend cetait juste un mot clef pour repere le lien avec non la partie publique non la partie privee de l'interface class Point dans Point4.h.
//donc: ostream(ostrem &out, const Point &P)
//(le contraire) ET: istream(istream &in, Point &P).
// ajouter & operatoir << pour ostream et >> pour istream.
//a l'interieur on va faire: prenons une instance de classe POINT::
//et un systeme d'ecriture et de memorisation voire d'affichage avec std::count : on fait;::
/*
  ostream & operator<<(ostream &out, const Point P)
on va faire normalement de l'affichage normale:
donc on fait: 
out(ce qui ressort) << "L'abcisse vaut" << P.x << endl;
out << "L'ordonée vaut" << P.y << endl;
agit discretement sur la partie privee de l'implementaition(on verra apres avec le fichier main4.cpp.
et avec general:: friend istream & operator >>(istream &in, Point P), on aura:
une memorisation et un affichage ### par la suite d'ou l'utilisation de count; d'ou les commandes suivantes: (suivantes de ceux qui ont ete avant)
count << "Tapez l'abcisse: "; in >> P.x
count << "Tapez l'ordonée: "; in >> P.y
c'est complemtement le contraire:
au lieu d'avoir un friend istream && operator<<(stream &out, const Point P); on aura: comme prototype d'implementation SIMPLE:(i)
ostream && operator>>(ostream &in, Point P);
et sur le premier suivant ce fichier lettant en oeuv re un modele concret d'interface, on aura:
la 1er fonction au lieu de recevoir va afficher donc va faire:
apres la 2ieme pour miuex retenir:
count<<"Tapez l'abscisse svp"<<P.x<<endl;
puis la deuxieme fera l'affichage du resultat compris, guide par l'utilisateur via:
out<< "L'abcisse vait"<<((u))(); in >> P.x;
le ostream retourne out car au contraire de recevoir il va afficher et l'autre in. 
*/
//inspectons maintenant le respect de main4.cpp via-a-vis de l'interface.
