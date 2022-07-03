/*#ifndef POINT_H5
#define POINT_H5
#include<iostream>//important dans n'importe quel developpement C++.///
#include<istream>
#include<string>
#include<cmath>
#include<ostream>//a inclure facile a retenir: ostream
//attention::(pas utiliser=>pas inclure...)#include<osteream>//a inclure facile a retenir: ostream
//tous les packages pas totalement necessaires a 100% pour s'assurer d'éviter 3 erreurs de compilation(ouverture au monde de compilation): erreure syntaxique, erreur sémantique en 3ième degré et erreur linguistique~~~.
using namespace std;
class Point
{
  
class Point
{*/
  /*
  friend std::istream & operator>>(std::istream & out, Point &P);
  //std:: important puis istream pour le out (moyen methechnique d'avant)
  //std:: ostream pour le 3ieme package avec comme arguments:
  //const Point &p et ostream &in(()) ca va s'ecrire dont reste constant ne bouge pas d'ou le const Point.
  friend std::ostream & operator<<(std:: ostream & in , const Point &P);
  //ni dans la partie publique ni dans la partie privee.
  */
  //c'est une autre méthode ; pas une méthode presque similaire.
/*ostream & operator<<(ostream & out, const Point &P)
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
/*
public:
Point();
Point(double x, double y);
void setX(double x);
void setY(double y);
double getX();
double getY();
double distance(const Point &P);
Point milieu(const Point &P);
private:
double x,y;
};
#endif*/
/*
Explications
Par rapport à l'exemple précédent, nous avons rajouté 2 constructeurs :
• Le constructeur par défaut Point();
• Un autre constructeur Point(double x, double y);
• Le constructeur par défaut va initialiser l'abscisse et l'ordonnée de notre Point à 0.
• Le second constructeur va initialiser l'abscisse et l'ordonnée de notre Point respectivement à x et à y.
*/
#ifndef POINT_H5
#define POINT_H5
#include<iostream>
#include<istream>
#include<string>
#include<cmath>
#include<ostream>
using namespace std;
class Point
{
public:
Point();
Point(double x, double y);
void setX(double x);
void setY(double y);
double getX();
double getY();
double distance(const Point &P);
Point milieu(const Point &P);
  void operator>>(ostream &out);
  void operator<<(istream &in);
private:
double x,y;
};
#endif
