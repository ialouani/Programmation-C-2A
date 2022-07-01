#include <iostream>
using namespace std;
#include "Point3.h"
int main()
{
Point A, B, C;
double d;
cout << "SAISIE DU POINT A" << endl;
A << cin;
cout << endl;
cout << "SAISIE DU POINT B" << endl;
B << cin;
cout << endl;
C = A.milieu(B);
d = A.distance(B);
cout << "MILIEU DE AB" << endl;
C >> cout;
cout << endl;
cout << "La distance AB vaut :" << d << endl;
return 0;
}
