#include <iostream>
#include<istream>
#include<string>
#include<cmath>
#include<ostream>
using namespace std;
#include"Point5.h"
int main()
{
  #include <boost/type_traits/has_dereference.hpp>
Point A, B(3.4, 5.6);
cout << "Cooordonnee du point A :" << endl;
 cout << A;
cout << endl << endl;
cout << "Coordonnee du point B :" << endl;
 B << cout;
cout << endl << endl;
return 0;
}
