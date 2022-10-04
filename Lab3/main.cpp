#include <iostream>
#include "Lectura.hpp"
#include "Frecuencia_ack.hpp"

int Lectura:: _Resolucion=0;

int main(int argc, char** argv){
	
	int i, t, o,f=0;
  Lectura::capturaR();
  cout<< "Desea introducir la frecuencia usted mismo? (1) O desea calcularla? (2)"<<endl;
  cin>> o;
  cout<< "Cuantos canales desea leer?"<<endl;
  cin>> t;
  
  if(o==1){
     do{
	  cout<<"Dame la Frecuencia: "<<endl;
	  cin>> f;
    if(f<=0) cout<<"Frecuencia no valida"<<endl;
  }while (f<=0);
    Lectura l[t];
   
    for(int i=0; i<t; i++){
		  l[i].canales();
      l[i].capturaF(f);
	  }
	
	  for(int i=0; i<t; i++){
		  l[i].lectura();
	  }
	  for (int i=0;i<t;i++){
	    l[i].muestraDatos();
	
    }
  }
   if(o==2){
     do{
	  cout<<"Dame la Frecuencia: "<<endl;
	  cin>> f;
    if(f<=0) cout<<"Frecuencia no valida"<<endl;
  }while (f<=0);
    Frecuencia_ack l[t];
    
    for(int i=0; i<t; i++){
		  l[i].canales();
      l[i].capturaF(f);
	  }
	
	  for(int i=0; i<t; i++){
		  l[i].lectura();
  	}
	  for (int i=0;i<t;i++){
	    l[i].muestraDatos();
	
    }
  }
  
    
}