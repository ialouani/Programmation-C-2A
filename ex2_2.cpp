#include<iostream>
#include<string>
#include<cmath>

int main(){
  std::cout<<"Tapez un nombre svp : ";//tant que <<endl on termine pas avec <<
  int number;
  std::cin>>number;//l'entrée se collera à number la variable entiere sur la pile.

  /*std::cout<<"Tapez votre nom complet : ";
  std::string username;//declaration tjrs obligee!!!
    std::getline(std::cin,username);
    //difference cette fois depuis les proprietees d'affichage,des strings en SEGMENT DE DONNEESK= ; on appelle la console sur le mode de représentation, puis comme argulent quoi dire scanner k'infi dans usernale NIN DECLAREE soit comme arguments: std::cin,username(le dernier chosi akéatoirement)!!!!!!*/
     std::cout<<"Nombre saisi : " << number << std::endl;
     //     std::cout<<"Vous vous appelez comme suit:  "<< username <<std::endl;
  return 0;
}
