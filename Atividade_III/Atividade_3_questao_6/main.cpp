#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main() {
  Time t1;          //todos os argumentos default
  Time t2(2);       //hora especificada
  Time t3(21, 40);  //hora e minuto especificados
  Time t4(12,40,30);// H, M, S

  Time t5(30,40,50);//valores inválidos

  cout << "Construtor com valores default" << endl;
  t1.printStandard();

  cout << "Construtor com hora" << endl;
  t2.printStandard();

  cout << "Construtor com hora e minutos" << endl;
  t3.printStandard(); 

  cout << "Construtor com hora, minutos e segundos" << endl;
  t4.printStandard(); 

  cout << "Construtor com valores inválidos" << endl;
  t5.printStandard();

  t1.setTime(11, 50, 59);
  t1.Tick();
  
  cout << "Passar para o proximo minuto" << endl;
  t1.printUniversal();

  t1.setTime(11, 59, 59);
  t1.Tick();

  cout << "Passar para a proxima hora" << endl;
  t1.printUniversal();

  t1.setTime(23, 59, 59);
  t1.Tick();

  cout << "Passar para o proximo dia" << endl;
  t1.printUniversal();

  
  


  return 0;
}