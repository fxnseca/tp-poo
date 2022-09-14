#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <vector>

using namespace std;
typedef const char* String;

class Livro{
    vector<String> escritores;
    String titulo;
    vector<String> capitulos;
    int anoPublicacao;
    String idiomaOriginal;
    vector<String> keywords;

public:
    Livro(vector<String> esc, vector<String> tit, vector<String> cap, int anoPub, String idi, vector<String> key);
    Livro();
    vector<String>getEscritores();
    void setEscritores(vector<String>);
    String getTitulo();
    void setTitulo(String);
    vector<String>getCapitulos();
    void setCapitulos(vector<String>);
    int getAnoPublicacao();
    void setAnoPublicacao(int);
    String getIdiomaOriginal();
    void setIdiomaOriginal(String);
    vector<String>getKeywords();
    void setKeywords(vector<String>);
};

#endif