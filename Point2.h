#ifndef POINT_H
#define POINT_H
class Point
{
public:
void setX(double x);
void setY(double y);
double getX();
double getY();
double distance(const Point &P);
Point milieu(const Point &P);
void saisir();
void afficher();
private:
  double x,y;
};
#endif
