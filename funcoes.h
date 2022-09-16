#include "livro.h"
#include "impresso.h"
#include "eletronico.h"
#include "audiobook.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <typeinfo>

using namespace std;

template<typename T>
bool filter (Livro* l);



vector<Livro*>* searchPLanguage(string, vector<Livro*>&);


vector<Livro*>* eletronicosOrdenados(vector<Livro*>);


bool existisAudiobookWriter(vector<Livro*>&,string);

int countPkeyword (vector<Livro*>, string);

vector <Livro*> impressosEmLivrarias (vector <Livro*>, int);