#ifndef POINT_H1
#define POINT_H1
#include <iostream>
//header d'interface publique.
class Point
{
 public://accessible à tout le monde; réutilisable à la demande.///
  double x,y;//des membres de données.
  double distance(Point &P);//la 1ere méthode définie.
  Point milieu(Point &P);//la deuxième.
  double getY();
  double distance(const Point &P);
  Point milieu(const Point &P);
  void saisir();
  void afficher();
};//ce que permet pas la structure.
//le fait de rendre publique ces données permet de les réutiliser en une instanciation voir de les modifier ce qui est pas le cas pour une donnée simple dans une structure C.
#endif
//ajuster les macros: rq1.
//eviter a tout prix les const Point &P car cela manipule la 'structure' d'une facon desarragée et peut influencer sur le type deja definie a la compilation..///
