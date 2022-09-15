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


void searchPLanguage(string language,const vector<Livro*>& lista,vector<Livro*>& collection){
    copy_if(lista.begin(),lista.end(),collection.begin(),
    [language](Livro* livro){return language.compare((*livro).getIdiomaOriginal());});   
}

bool existisAudiobookWriter(const vector<Livro*> colecao,string name){
    vector<Livro*>::iterator itr;
    vector<string>::iterator found;
    vector<livro*> onlyAudioBooks;
    vector<string> escritores;

    copy_if(colecao.begin(),colecao.end(),onlyAudioBooks.begin(),
    [](Livro* l){return typeid(*livro)==(class AudioBook)});

    for(itr = onlyAudioBooks.begin(),itr!= onlyAudioBooks.end(),itr++){
        escritores = (*itr)->getEscritores;
        found = find(escritores.begin(),escritores.end(),name);
        if(found!=escritores.end()){
            return true;
        }   
    }
    return false;
}





// //Fazer uma função pra processar a linha lida do arquivo e transformar em vetor de string
// vector<string> processarString(string &s){
//     vector<string> resultado;
// }

// void loadFile(vector<Livro*> &livros){}