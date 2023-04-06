#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  
  Time t(16,40,0);
  
  cout << "Testando construtor com os parametros escritos diretamente." << endl;
  t.printUniversal();

  Time t1;
  cout << "Testando horario atual." << endl;
  t1.printUniversal();

  return 0;
}
