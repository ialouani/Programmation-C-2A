#include<iostream>
#include<string>
#include<cmath>

int main(){
  /*std::cout<<"Tapez un nombre svp : ";//tant que <<endl on termine pas avec <<
  int number;
  std::cin>>number;//l'entrée se collera à number la variable entiere sur la pile.*/

  std::cout<<"Tapez votre nom complet : ";
  std::string username;//declaration tjrs obligee!!!
    std::getline(std::cin,username);
  //difference cette fois depuis les proprietees d'affichage,des strings en SEGMENT DE DONNEES= ; on appelle la console sur le mode de représentation, puis comme argument quoi dire scanner k'infi dans username NIN DECLAREE soit comme arguments: std::cin,username(le dernier chosi aléatoirement)!!!!!!
    // std::cout<<"Nombre saisi : " << number << std::endl;
  std::cout<<"Vous vous appelez comme suit:  "<< username <<std::endl;
  return 0;
}
