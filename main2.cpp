#include <iostream>
#include"Point2.h"
using namespace std;
int main()
{
Point A, B, C;
double d;
cout << "SAISIE DU POINT A" << endl;
A.saisir();
cout << endl;
cout << "SAISIE DU POINT B" << endl;
B.saisir();
cout << endl;
C = A.milieu(B);
d = A.distance(B);
cout << "MILIEU DE AB" << endl;
C.afficher();
cout << endl;
cout << "La distance AB vaut :" << d << endl;
return 0;
}
