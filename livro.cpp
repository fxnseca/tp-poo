#include "livro.h"
#include <vector>
#include <iostream>

using namespace std;


//Construtor
Livro:: Livro (vector<string> esc, string tit, vector<string> cap,
int anoPub, string idi, vector<string> key): escritores(esc), titulo(tit), 
capitulos(cap), anoPublicacao(anoPub), idiomaOriginal(idi), keywords(key) {}

Livro :: ~Livro(){}

vector<string> Livro :: getEscritores(){
    return escritores;
}

void Livro ::setEscritores(vector<string> esc)
{
    this->escritores = esc;
}

string Livro :: getTitulo()
{
    return titulo;
}

void Livro :: setTitulo(string title)
{
    this->titulo = title;
}

vector<string> Livro :: getCapitulos()
{
    return capitulos;
}

void Livro :: setCapitulos(vector<string> caps)
{
    this->capitulos = caps;
}

int Livro :: getAnoPublicacao()
{
    return anoPublicacao;
}

void Livro :: setAnoPublicacao(int ano)
{
    this->anoPublicacao = ano;
}

string Livro :: getIdiomaOriginal()
{
    return idiomaOriginal;
}

void Livro :: setIdiomaOriginal(string idiomaOriginal)
{
    this->idiomaOriginal = idiomaOriginal;
}

vector<string> Livro ::getKeywords()
{
    return keywords;
}

void Livro :: setKeywords(vector<string> keywords)
{
    this->keywords = keywords;
}

/*ostream& operator <<(ostream&, Livro&)
{
    
}*/