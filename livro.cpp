#include "livro.h"
#include <vector>
#include <iostream>

using namespace std;
typedef const char* String;

//Construtor
Livro::Livro(vector<String> esc, vector<String> tit, vector<String> cap,
 int anoPub, String idi, vector<String> key){
    escritores: esc;
    titulo: tit;
    capitulos: cap;
    anoPublicacao: anoPub;
    idiomaOriginal: idi;
    keywords: key;
}