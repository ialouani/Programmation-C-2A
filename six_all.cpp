#include<iostream>
#include"six_solution1.h"
//#include<six_solution2.h>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
using namespace six_solution1;
/*int six_solution1(int a){
  return six_solution1::function(a);
  }*/
//using namespace six_solution23;

namespace koor{ 
		namespace App{

		  void test(){
		    std::cout  << "Cela a marché" << endl;
		  }
		}
}

int main(){
  std::cout << six_solution1::function(4) << endl;
  //std::cout << six_solution23::function(4) << endl;
  koor::App::test();//1er essai ### CONCLUANT A 100%.
  using namespace koor::App;
  test();//DEUXIEME ESSAI apres using namespace koor::App donc contient test()
  //qui est void => lancement direct par de printf.//
  return 0;
}
