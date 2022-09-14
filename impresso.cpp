#include <vector>
#include "livro.h"
#include "impresso.h"

//CONSTRUTOR
Impresso::Impresso(vector<String> esc, vector<String> tit, vector<String> cap, int anoPub, String idi, vector<String> key, vector<String> liv, int col) : Livro(esc, tit, cap, anoPub, idi, key)
{
    livrarias: liv;
    colunas: col;   
}