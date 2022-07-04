#include<iostream>
using namespace std;


  
void allocation_one_byte(){
  char* ptr=new char;
  *ptr='z';
  std::cout<<"le premier resultat est: "<< *ptr <<endl; 
}

void allocation_one_byte(char a){
  std::cout<<"le deuxième resultat est: "<< a <<endl; 
}

void allocation_one_byte(char** b){
  std::cout<<"le troisième resultat est: " << *(++b) <<endl; 
}

void allocation_one_byte(char **b, char a, char c){
  std::cout <<"Le quatrième en est: "<< *(b++) <<endl;
}

void demo__simple(int* ptr){
  std::cout << "simple demo with a pointer parameter" <<endl;
}

void demo__simple2(const char* s, int a){
  std::cout<<"simple demo with two parameters"<<endl;
}

int main(){
  std::cout<<"Rien de special (ensemble de testing)"<<endl;
  allocation_one_byte();


  char a=65;
  char* ptr=new char;
  ptr=&a;
  char* ptr2=new char;
  char* ptr3=new char;
  *ptr3=*ptr;
  delete ptr3;
  //complément au contraire du printf direct.
  //char a='a';//le deuxieme type est : char** est un pointeur vers un
  //un pointeur.
  char*c=&a;
  char** b=&c;
  
  char** ptr22=new char*;//new avec le type qui est char**.
  ptr22=b;
  allocation_one_byte(ptr22);
  
  /*delete[][] ptr;*/


  char aa=67;char bb=90;//le suivant en sautant et l'avant dernier.
  char** ptr4=new char*;
  //avec le type ptr qui permet de declarer un new malloc
  //suivie d'un new (malloc) et de type de la variable allouée.(char**->char*).
  *ptr4=&aa;
  ptr4++;
  //*++ptr3=&bb;//a eviter.
  *ptr4=&bb;
  int d=3;int e=7;
  allocation_one_byte(ptr4,(char)d,(char)e);demo__simple(nullptr);
  demo__simple2("toto",1);//plus avance;selon l'entree globale des parametres. 
  return 0;
  //tous les resultats obtenues dans le termial sont logiques.
}
