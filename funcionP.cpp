#include "funcionP.h"
#include <iostream>

using namespace std;

funcionP::funcionP(){
  grado = 0;
}

funcionP::funcionP(int x){
  grado = x;
}

funcionP funcionP::operator+(funcionP* otra){
  funcionP temp;
  if(this -> grado == otra -> getGrado()){
    temp.setGrado(this -> grado);
    for (int i = 0; i < this -> coeficientes.size(); i++){
      temp.setCoeficiente(this -> getCoeficiente(i) + otra -> getCoeficiente(i));
    }
  }else{
      if(this -> grado > otra -> getGrado()){
        temp.setGrado(this -> grado);
        int count = 0;
        for (int i = 0 ; i < this -> coeficientes.size()-1; i++) {
          if(count < otra -> getGrado()){
            temp.setCoeficiente(this -> getCoeficiente(i));
          }else{
            temp.setCoeficiente(this -> getCoeficiente(i) + otra -> getCoeficiente(i));
          }
          count++;
        }

      }
      else{
        temp.setGrado(otra -> getGrado());
        int count = 0;
        for (int i = 0 ; i < otra -> getSize()-1 ; i++) {
          if(count < this -> grado){
            temp.setCoeficiente(otra -> getCoeficiente(i));
          }else{
            temp.setCoeficiente(this -> getCoeficiente(i) + otra -> getCoeficiente(i));
          }
          count++;
        }
      }
    }

  return temp;
}

int funcionP::getSize(){
  return coeficientes.size();
}

int funcionP::getGrado(){
  return grado;
}

void funcionP::setGrado(int x){
  grado = x;
}

funcionP funcionP::operator-(funcionP* otra){
  funcionP temp;
  if(this -> grado == otra -> getGrado()){
    temp.setGrado(this -> grado);
    for (int i = 0; i < this -> coeficientes.size(); i++){
      temp.setCoeficiente(this -> getCoeficiente(i) - otra -> getCoeficiente(i));
    }
  }

}

bool funcionP::operator==(funcionP* otra){
  bool iguales = false;
  if(this->getGrado() == otra-> getGrado()){
    for (int i = 0; i < this -> getSize(); i++) {
      if(this -> getCoeficiente(i) == otra -> getCoeficiente(i)){
        iguales = true;
      }else{
        iguales = false;
        break;
      }
    }
  }else{
    iguales = false;
  }
  return iguales;
}

bool funcionP::operator!=(funcionP* otra){
  bool noiguales = true;
  if(this->getGrado() == otra-> getGrado()){
    for (int i = 0; i < this -> getSize(); i++) {
      if(this -> getCoeficiente(i) != otra -> getCoeficiente(i)){
        noiguales = true;
        break;
      }else{
        noiguales = false;
      }
    }

  }else{
    noiguales = true;
  }
  return noiguales;
}




/*
funcionP* funcionP::operator*(funcionP* otra){


}*/

void funcionP::setCoeficiente(int x){
  this -> coeficientes.push_back(x);
}

int funcionP::getCoeficiente(int index){
  int coef = this -> coeficientes.at(index);
  return coef;//coeficiente
}
