#include "livro.h"
#include <vector>
#include <iostream>

using namespace std;


//Construtor
Livro:: Livro (vector<string> esc, string tit, vector<string> cap,
int anoPub, string idi, vector<string> key): escritores(esc), titulo(tit), 
capitulos(cap), anoPublicacao(anoPub), idiomaOriginal(idi), keywords(key) {}

Livro :: ~Livro(){}

void Livro :: teste (){}

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


ostream& operator <<(ostream& out, Livro& l)
{/*
    string caps, keywords;
    string title, escritor, idioma, caracteristicas;
    string outT, outE, outI;

    l.titulo.copy(&title[0], 30, 0);
    l.escritores[0].copy(&escritor[0], 30);
    l.idiomaOriginal.copy(&idioma[0], 10);

    if (sizeof(l.capitulos) < 10)
    {
        caps = "  " + to_string(sizeof(l.capitulos));
    } else if (sizeof(l.capitulos) < 100)
    {
        caps = " " + to_string(sizeof(l.capitulos));
    }

    if (sizeof(l.keywords)<2)
        keywords = "0" + sizeof(l.keywords);
    else
        keywords = to_string(sizeof(l.keywords));


    out << title << endl << escritor << endl << idioma << endl << caps << keywords << endl;
*/
    return out;

}