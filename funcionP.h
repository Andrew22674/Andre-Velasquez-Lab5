#include <vector>
#include <iostream>

using namespace std;
#ifndef FUNCIONP_H
#define FUNCIONP_H


class funcionP{
private:
  int grado;
  vector<int> coeficientes;


public:
  funcionP();
  funcionP (int);


  int getGrado();
  void setGrado(int);
  int getCoeficiente(int);
  void setCoeficiente(int);

  int getSize();

  funcionP operator+(funcionP*);
  /*funcionP* operator-(funcionP*);
  funcionP* operator*(funcionP*);
*/
  friend ostream& operator << (ostream& out, funcionP* funcion){
    int cont = funcion -> getGrado();
    for (int i = 0; i < funcion -> getSize(); i++) {
      if(i<funcion -> getSize()-1 && cont != 1)
        out << funcion -> getCoeficiente(i) << "x^" << cont << " + ";
      else if(cont == 1)
        out << funcion -> getCoeficiente(i) << "x + ";
      else
        out << funcion -> getCoeficiente(i) << endl;
      cont--;
    }
  }
};

#endif
