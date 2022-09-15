#ifndef ELETRONICO_H
#define ELETRONICO_H

#include <vector>
#include "livro.h"

using namespace std;

class Eletronico : public Livro{
    string url;
    string formatoArquivo;

public:
    Eletronico(string, string, vector<string>, string, vector<string>, int, string, vector<string>);
    ~Eletronico();
    string getUrl();
    void setUrl(string);
    string getFormatoArquivo();
    void setFormatoArquivo(string);
};

#endif