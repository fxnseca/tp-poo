#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <vector>

using namespace std;

//Comentario teste
class Livro{
    vector<string> escritores;
    string titulo;
    vector<string> capitulos;
    int anoPublicacao;
    string idiomaOriginal;
    vector<string> keywords;

public:
    Livro(vector<string>, string, vector<string>, int, string, vector<string>);
    ~Livro();
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
    friend vector<Livro> eletronicosOrdenados(vector<Livro>);
};

vector<Livro> eletronicosOrdenados(vector<Livro> colecao)
{
    list<Livro> tmp;
    
    tmp.assign(colecao.begin(), colecao.end());
    tmp.sort();
    vector<Livro> retorno (tmp.begin(), tmp.end());
    return retorno;

}


#endif