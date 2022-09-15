#include <iostream>
#include "livro.h"
#include "impresso.h"

//CONSTRUTOR
Impresso::Impresso(vector<string> livrarias, int colunas, vector<string> esc, string tit, vector<string> cap,
int anoPub, string idi, vector<string> key) : Livro(esc, tit, cap, anoPub, idi, key), 
livrarias(livrarias), colunas(colunas){}

Impresso :: ~Impresso(){}

vector<string> Impresso :: getLivrarias(){
    return livrarias;
}

void Impresso :: setLivrarias(vector<string> livrarias){
    this->livrarias = livrarias;
}

int Impresso :: getColunas(){
    return colunas;
}

void Impresso :: setColunas(int colunas){
    this->colunas = colunas;
};
