#include <math.h>

using namespace std;

// Estrutura que comporta as funçoes da biblioteca.
struct tTriangulos{

  float l1;
  float l2;
  float l3;
  float peri;
  float area;
  float hipo;
  float aux;
  
  // Funçao que importa os valores do código principal.
  void inserir(float ll1, float ll2){
  l1 = ll1;
  l2 = ll2;
 
  }
  
  //Funçao que faz o *Cálculo do perímetro do triângulo.
  void cPerimetro(){
    l3 = ((l1 * l1) + (l2 * l2));
    l3 = sqrt(l3);
    peri = l1 + l2 + l3;

  }
 
 // Funçao que faz o *Cálculo da área do triângulo.
  void cArea(){
    area = ((l1 * l2) / 2);
    
  }
 
 //Funçao que faz o  *Cálculo da hipotenusa dado o valor dos outros dois lados.
  void cHipo(){
   hipo = ((l1 * l1) + (l2 * l2));
   hipo = sqrt(hipo);
    
  }
  
// Funçao que retorna os valores calculados para o usuário.
 void mostrarParametros(){
 cout<<endl;
 cout <<"Valores : "<<endl;
 cout <<"Perimetro... : "<< peri <<endl;
 cout <<"Area........ : "<< area <<endl;
 cout <<"Hipotenusa...: "<< hipo <<endl;

 }


};
