#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <vector>

using namespace std;


class Livro{
    vector<string> escritores;
    string titulo;
    vector<string> capitulos;
    int anoPublicacao;
    string idiomaOriginal;
    vector<string> keywords;

public:
    Livro(vector<string>, string, vector<string>, int, string, vector<string>);
    Livro();
     vector<string>getEscritores();
     void setEscritores(vector<string>);
     string getTitulo();
     void setTitulo(string);
     vector<string>getCapitulos();
     void setCapitulos(vector<string>);
    int getAnoPublicacao();
    void setAnoPublicacao(int);
    string getIdiomaOriginal();
    void setIdiomaOriginal(string);
    vector<string>getKeywords();
    void setKeywords(vector<string>);
    friend ostream& operator <<(ostream&, Livro&);
};

#endif