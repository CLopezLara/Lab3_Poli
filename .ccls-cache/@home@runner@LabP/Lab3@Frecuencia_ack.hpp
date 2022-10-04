#pragma once
#include "Lectura.hpp"
#include<iostream>
using namespace std;
/************************************************
*                 CLASE
************************************************/
class Frecuencia_ack : public Lectura{
	private:
		int _ack;
	public:
		Frecuencia_ack();
	  void capturaF(int);
};

