#include "Point3.h"
#include <cmath>
#include <iostream>
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
void Point::operator>>(ostream &out)
{
out << "L'abscisse vaut " << x << endl;
out << "L'ordonnée vaut " << y << endl;
}
void Point::operator<<(istream &in)
{
cout << "Tapez l'abscisse : "; in >> x;
cout << "Tapez l'ordonnée : "; in >> y;
}
