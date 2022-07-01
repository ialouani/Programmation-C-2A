#include <iostream>
using namespace std;
#include "Point4.h"
int main()
{
Point A, B, C;
double d;
cout << "SAISIE DU POINT A" << endl;
cin >> A;
cout << endl << "SAISIE DU POINT B" << endl;
cin >> B;
cout << endl;
C = A.milieu(B);
d = A.distance(B);
cout << "MILIEU DE AB" << endl << C << endl;
cout << "La distance AB vaut :" << d << endl;
return 0;
}
