#include <iostream>
#include "eletronico.h"
#include "livro.h"

using namespace std;

Eletronico:: Eletronico(string url, string formatoArquivo, vector<string> escritores, string titulo, vector<string>capitulos, 
int anoPublicacao, string idiomaOriginal, vector<string> keywords): Livro(escritores,titulo, capitulos, anoPublicacao, idiomaOriginal, keywords), url(url), formatoArquivo(formatoArquivo){}

Eletronico :: ~Eletronico(){}

string Eletronico :: getUrl()
{
    return url;
}

void Eletronico :: setUrl(string url)
{
    this->url = url;
}


string Eletronico :: getFormatoArquivo()
{
    return formatoArquivo;
}

void Eletronico :: setFormatoArquivo (string formatoArquivo)
{
    this->formatoArquivo = formatoArquivo;
}