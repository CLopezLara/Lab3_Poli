#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Lectura{
	private:
		static int _Resolucion;
	  int _Frecuencia;
	  float _voltaje;
    float  _Res;
    int _Frecuencia_ack;
    string _Canal;
    
	public:
		
		Lectura();
		void muestraDatos();
		static void capturaR();
    virtual void capturaF(int);
    void canales();
    void lectura();
    int getF();
};