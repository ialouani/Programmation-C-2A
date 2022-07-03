#ifndef POINT_H4
#define POINT_H4
#include<iostream>//a inclure toujours dans un .cpp.
#include <string>//a inclure
#include<istream>//a inclure istream
#include<ostream>//a inclure facile a retenir: ostream
class Point
{
  friend std::istream & operator>>(std::istream & out, Point &P);
  //std:: important puis istream pour le out (moyen methechnique d'avant)
  //std:: ostream pour le 3ieme package avec comme arguments:
  //const Point &p et ostream &in(()) ca va s'ecrire dont reste constant ne bouge pas d'ou le const Point.
  friend std::ostream & operator<<(std:: ostream & in , const Point &P);
  //ni dans la partie publique ni dans la partie privee.
public:
void setX(double x);
void setY(double y);
void saisir();
void afficher();  
double getX();
double getY();
double distance(const Point &P);
Point milieu(const Point &P);
private:

double x, y;
};
#endif
 /*Explications
• Nous avons défini deux fonctions amies de la classe Point : ce ne sont pas des méthodes membres.
• Leurs définitions sont les suivantes :
friend istream & operator>>(istream &, Point &P);
friend ostream & operator<<(ostream &, const Point &P
*/
//ce sont des fonctions amies autres laternatives pour afficher autrement d'une facon stylée les infos qui nous intèressent tout en respectant les conventions:
/* (les fonctions amies pour ne pas rompre le principe primordiale d'necpsulation et de respect disons au droit le la partie privée)*/
/*
les prototypes à retenir sont les suivant:
friend istream & operator>>'istream &n Point &P);
ON repete pour le suivant pour le retenir;
friend istream & operator << (&istream(REPETITION!!LE COEUR!!!!!, const Point &P) (c'est pour cela c'est pas une methode objet sionon elle prenerait pas const point &p comme parametree typée et nommée si elle agit sur la classe suelement ce qui est le cas ICI*/
