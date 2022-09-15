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


vector<Livro*> searchPLanguage(string& language,vector<Livro*>& lista){
    vector<Livro*> colection;
    copy_if(lista.begin(),lista.end(),colection.begin(),
    [language](Livro* livro){return language.compare((*livro).getIdiomaOriginal());});   
}

bool existsAudioBookWriter(string name,vector<Livro*> &colection){
    vector<Livro*>::iterator itr;
    vector<string> escritores;
   
    for(itr=colection.begin();itr!=colection.end();++itr){
        if(typeid(*(*itr)) == typeid(class AudioBook)){
           vector<string> escritores((*itr)->getEscritores());
           auto it find(escritores.begin(),escritores.end(),name);
           if(it!=escritores.end()){
              return true;
           }
           escritores.clear();
        }        
    }
    return false;
}



// //Fazer uma função pra processar a linha lida do arquivo e transformar em vetor de string
// vector<string> processarString(string &s){
//     vector<string> resultado;
// }

// void loadFile(vector<Livro*> &livros){}