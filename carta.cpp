// CARTA.CCP 
#include "carta.h"
#include "domande.h"
#include <iostream>
#include <string>
using namespace std;

carta::carta(){
valore=0;
msg="";
}
carta::carta(int v,string fr) {
	valore=v;
	msg=fr;
}
void carta::set_valore(int i){
	valore=i;
}
void carta::set_message(string s ){
	msg=s;
	}
int carta::getvalore(){
	return(valore);
}
string carta :: getmsg(){
	return msg;
}

// SERVE PER I TEST stampa il valore di una carta 
void carta::stampa_carta (){
	cout<< " num carta =  "   <<valore << "    "<<"messaggio =  "<<msg <<"\n";
}

