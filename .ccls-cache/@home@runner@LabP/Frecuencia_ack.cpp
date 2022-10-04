#include "Frecuencia_ack.hpp"

Frecuencia_ack::Frecuencia_ack(){
  
}
void Frecuencia_ack::capturaF(int fr){
  Lectura::capturaF(fr);
  _ack=Lectura::getF();
  cout<<"Frecuencia de muestreo calculada"<<endl;
  _ack=(8000000/_ack);
  Lectura::capturaF(_ack);
}