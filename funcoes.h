#include "livro.h"
#include "impresso.h"
#include "eletronico.h"
#include "audiobook.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;


void searchPLanguage(string& language,const vector<Livro*>& lista,vector<Livro*>& collection){
    copy_if(lista.begin(),lista.end(),collection.begin(),
    [language](Livro* livro){return language.compare((*livro).getIdiomaOriginal());});   
}







// //Fazer uma função pra processar a linha lida do arquivo e transformar em vetor de string
// vector<string> processarString(string &s){
//     vector<string> resultado;
// }

// void loadFile(vector<Livro*> &livros){}