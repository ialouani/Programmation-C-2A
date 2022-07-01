#include "Point.h"
#include <cmath> //inclusion du module math en C++

double Point::distance(Point &P)
//implémentation de la membre méthode distance(const Point &P)
//qui a été rendu publique dans le header coeur de la chose. 
{
  double dx,dy;//on récupère les coordonées à manipuler.
  dx=x-P.x;//on calcule les prévisbles.
  dy=y-P.y;
  return sqrt(dx*dx+dy*dy);//on poursuit avec la formule mathématique connue.
}

Point Point::milieu(Point &P)//de même pour celle-ci.
//on définit une classe objet M qui aura comme attribut x
//P.x+x/2 soit le milieu entre le point &P et M le résultat.
//avec x <=> this soit l'abcissse de M declarée pour le remplir à l'avance.
{
  Point M;
  M.x=(P.x+x)/2;
  M.y=(P.y+y)/2;
  return M;//et voilà.
}
//avec cela; on a réussi à implémenter les deux membres méthodes de la classe
//objet Point avec la syntaxe:
//type de retour::nom de la méthode en question(distance(const Point &P)).
