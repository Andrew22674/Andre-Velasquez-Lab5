#include <iostream>
#include <vector>
#include "funcionP.h"

using namespace std;

int main() {

  vector<funcionP*> funciones;
  vector<funcionP*> resultados;
  /*
  int grado;
  cout << "Ingrese grado de la funcion: " << endl;
  cin >> grado;

  int funcion[grado];

  for (size_t i = funcion.size(); i >0; i--) {
    cout << "Ingrese coeficiente en posicion " << i << endl;
    int coeficiente;
    cin >> coeficiente;
    grado[i] = coeficiente;
  }


  funcionP a(grado);
  funcionP b(3);

  */

  int menu = 0;

  while(menu != 10){
    cout << "Ingrese opcion " << endl<<
    "1. Agregar funcion" << endl <<
    "2. Sumar funciones" << endl <<
    "3. Restar funciones" << endl <<
    "4. Multiplicar funciones" << endl <<
    "5. Dividir funciones" << endl <<
    "6. Factor comun" << endl <<
    "7. Funciones iguales" << endl <<
    "8. Funciones diferentes" << endl <<
    "9. Operador de flujo" << endl <<
    "10. Salir" << endl;
    cin >> menu;

    if(menu == 1){
      int grado;
      cout << "Ingrese grado de la funcion: " << endl;
      cin >> grado;
      funcionP*  funcion = new funcionP(grado);
      for (int i = 0; i < grado+1; i++) {
        cout << "Ingrese coeficiente " << endl;
        int coef;//coeficiente
        cin >> coef;
        funcion -> setCoeficiente(coef);
      }
      funciones.push_back(funcion);
    }
    if(menu == 2){
      cout << "Ingrese posicion de funcion 'A': " << endl;
      int pos1;
      cin >> pos1;
      funcionP* A = funciones.at(pos1);
      cout << "Ingrese posicion de funcion 'B': " << endl;
      int pos2;
      cin >> pos2;
      funcionP* B = funciones.at(pos2);

      funcionP* C = new funcionP();

      *C = *A + B;
      cout << C;

    }

    if(menu == 3){
      cout << "Ingrese posicion de funcion 'A': " << endl;
      int pos1;
      cin >> pos1;
      funcionP* A = funciones.at(pos1);
      cout << "Ingrese posicion de funcion 'B': " << endl;
      int pos2;
      cin >> pos2;
      funcionP* B = funciones.at(pos2);

      funcionP* C = new funcionP();

      *C = *A - B;
      cout << C;
    }

    if(menu == 7){
      cout << "Ingrese posicion de funcion 'A': " << endl;
      int pos1;
      cin >> pos1;
      funcionP* A = funciones.at(pos1);
      cout << "Ingrese posicion de funcion 'B': " << endl;
      int pos2;
      cin >> pos2;
      funcionP* B = funciones.at(pos2);


      if(*A == B){
        cout << "Son iguales";
      }else{
        cout << "No son iguales";
      }
    }

    if(menu == 8){
      cout << "Ingrese posicion de funcion 'A': " << endl;
      int pos1;
      cin >> pos1;
      funcionP* A = funciones.at(pos1);
      cout << "Ingrese posicion de funcion 'B': " << endl;
      int pos2;
      cin >> pos2;
      funcionP* B = funciones.at(pos2);


      if(*A != B){
        cout << "No son iguales";
      }else{
        cout << "Son iguales";
      }
    }

    if(menu == 9){
      cout << "Ingrese posicion de funcion: " << endl;
      int pos1;
      cin >> pos1;
      funcionP* A = funciones.at(pos1);
      cout << A;
    }
    cout << endl;
  }







  return 0;
}
