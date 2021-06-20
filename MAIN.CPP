#include <iostream>
#include <math.h>
#include "triangulos.h"

using namespace std;

int main() {
  
  float basee, altur;

  cout << "digite o valor da base do triangulo" <<endl;
  cin >> basee;
  cout << "digite o valor da altura do triangulo" <<endl;
  cin >> altur;
  
  tTriangulos triang ;
  // Os dados coletados do usuário são inseridos na biblioteca atraves do seguinte comando.
  triang.inserir(basee,altur);

  triang.cPerimetro();

  triang.cArea();

  triang.cHipo();

  triang.mostrarParametros();
 
}
