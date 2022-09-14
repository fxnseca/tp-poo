#ifndef IMPRESSO_H
#define IMPRESSO_H
#include <vector>
#include "livro.h"

using namespace std;
typedef const char* String;

class Impresso : public Livro{
    vector<String> livrarias;
    int colunas;
public:
    Impresso(vector<String> esc, vector<String> tit, vector<String> cap, int anoPub, String idi, vector<String> key, vector<String> liv, int col);
    vector<String> getLivrarias();
    void setLivrarias(vector<String>);
    int getColunas();
    void setColunas(int);
};

#endif 