#include "livro.h"
#include "impresso.h"
#include "eletronico.h"
#include "audiobook.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <typeinfo>

using namespace std;



vector<Livro*>* searchPLanguage(string, vector<Livro*>&);


vector<Livro*>* eletronicosOrdenados(vector<Livro*>);


bool existisAudiobookWriter(vector<Livro*>&,string);


// //Fazer uma função pra processar a linha lida do arquivo e transformar em vetor de string
// vector<string> processarString(string &s){
//     vector<string> resultado;
// }

// void loadFile(vector<Livro*> &livros){}