#ifndef IMPRESSO_H
#define IMPRESSO_H

#include <vector>
#include "livro.h"

using namespace std;

class Impresso : public Livro{
    vector<string> livrarias;
    int colunas;
    
public:
    Impresso(vector<string>, int, vector<string>, string, vector<string>, int, string, vector<string>);
    ~Impresso();
    vector<string> getLivrarias();
    void setLivrarias(vector<string>);
    int getColunas();
    void setColunas(int);
};

#endif 