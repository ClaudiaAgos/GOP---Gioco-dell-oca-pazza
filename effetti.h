#ifndef EFFETTI_H
#define EFFETTI_H
#include<iostream>
#include "dado.h"
#include "player.h"
using namespace std;

class effetti{
	
	player *p[100];
	public:
		dado d;
		int num_estratto;
		effetti(){
		};
	
		int tira_di_nuovo();
		int vai_avanti(int pos);
		void salta_turno();   
		//void pesca_carta();
		int fortuna(int num);
	};
		

#endif 
