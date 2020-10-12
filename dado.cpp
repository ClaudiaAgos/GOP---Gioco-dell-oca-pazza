#include<iostream>

using namespace std;


dado::dado(){
}

int dado::lancia_dado(){
	dice = (rand() % 6) + 1;
    return dice;
}

