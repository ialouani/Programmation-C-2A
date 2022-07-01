#ifndef POINT_H3
#define POINT_H3
#include <iostream>
using namespace std;
class Point
{
public:
void setX(double x);
void setY(double y);
double getX();
double getY();
void saisir();
void afficher();
double distance(const Point &P);
Point milieu(const Point &P);
void operator>>(ostream &out);
void operator<<(istream &in);
private:
double x, y;
};
#endif
