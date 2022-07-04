#ifndef __FIVE
#define __FIVE
//#define minimm(a,b) ((a)<(b)?(a):(b+2))
//pas fonction inline de prorposition pour un succes.
#include<iostream>
int rslt(int b,int a){
  return a>b?a:b+2;
}int rslt2(int b,int a){
  return (a>b?a:b+2);
}int rslt3(int b,int a){
  return (a>b?a:(b+2));
}
 int rslt4(int b,int a){
   return (a>b?a:b)+2;//et cest celle ci evidemment qui marche!!!!
}
int minimm(int b, int a){
  return a<b?a:b;
}
#endif
