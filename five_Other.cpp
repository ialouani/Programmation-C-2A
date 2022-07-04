#include<iostream>
#include<five_Other.h>
//#include<five.h>

inline int minimm(int b, int a){
  return (a<b?a:b);
}

int main(){
  std::cout<<minimm(500,600)<<endl;
  return 0;
}
