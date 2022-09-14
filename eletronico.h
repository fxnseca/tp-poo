#ifndef ELETRONICO_H
#define ELETRONICO_H

#include <vector>
#include "livro.h"

using namespace std;
typedef const char* String;

class Eletronico : public Livro{
    String url;
    String formatoArquivo;

public:
    String getUrl();
    void setUrl(String);
    String getFormatoArquivo();
    void setFormatoArquivo(String);
};

#endif