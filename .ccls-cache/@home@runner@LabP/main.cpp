#include "Lectura.hpp"
#include "Frecuencia_ack.hpp"

int Lectura:: _Resolucion=0;

int main(int argc, char** argv){
	
	int i, t, o,f;
  Lectura::capturaR();
  cout<< "Desea introducir la frecuencia usted mismo? (1) O desea calcularla? (2)"<<endl;
  cin>> o;
  cout<< "Cuantos canales desea leer?"<<endl;
  cin>> t;
  
  if(o==2){
     do{
	  cout<<"Dame la Frecuencia: "<<endl;
	  cin>> f;
    if(f<=0) cout<<"Frecuencia no valida"<<endl;
  }while (f<=0);
    Lectura l[t];
    l[t].capturaF(f);
    for(int i=0; i<t; i++){
		  l[i].canales();
	  }
	
	  for(int i=0; i<t; i++){
		  l[i].lectura();
	  }
	  for (int i=0;i<t;i++){
	    l[i].muestraDatos();
	
    }
  }
   if(o==3){
     do{
	  cout<<"Dame la Frecuencia: "<<endl;
	  cin>> f;
    if(f<=0) cout<<"Frecuencia no valida"<<endl;
  }while (f<=0);
    Frecuencia_ack l2[t];
    l2[t].capturaF(f);
    for(int i=0; i<t; i++){
		  l2[i].canales();
	  }
	
	  for(int i=0; i<t; i++){
		  l2[i].lectura();
  	}
	  for (int i=0;i<t;i++){
	    l2[i].muestraDatos();
	
    }
  }
  
    
}