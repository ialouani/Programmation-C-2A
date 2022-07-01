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
  void afficher();//partie publique: l'interface:: plusieurs implémentations possibles.
private:
  double x,y;//implémentation fixe: partie privée:: réservée à l'implémenteur de 'interface non modifiable du tout.
};
#endif
