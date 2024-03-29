#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <cstring>
#include <iostream>
#include "dado.h"

using namespace std;

class player{
protected:
   
    char name[50]; 
    int turno ;
public: 
    int pos;
    //dado d;
    player();
    player(int p, char n[]);
    void presenta_giocatore();
    
    int ritorna_pos();
    int indietro_uno();
    int avanza_uno();
    int vai_a_casella(int i);
    
    int vai_avanti_n_caselle(int i);
    int vuota();
    int somma_pos(int n);
    int indietro_n_caselle(int i);
    //fermo, scambia pos.
};

#endif /* player_h */
