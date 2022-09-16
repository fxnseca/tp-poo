#include "funcoes.h"
#include <algorithm>
#include <typeinfo>

using namespace std;

bool compara (Livro* l)
{   
    Eletronico* e = dynamic_cast<Eletronico*>(l);
    if(e==nullptr)
        return false;

    return true;
}

bool compareLang(Livro* l){
    AudioBook* e = dynamic_cast<AudioBook*>(l);

    if(e==nullptr)
        return false;

    return true;
}


vector<Livro*>* eletronicosOrdenados(vector<Livro*> colecao)
{
    vector<Livro*> *tpm = new vector<Livro*>;
    
    copy_if(colecao.begin(), colecao.end(), back_inserter(*tpm), compara);

    cout << tpm->size()<< endl;
    sort(tpm->begin(), tpm->end(), 
        [](Livro* l1, Livro* l2){
        return l1->getAnoPublicacao() <= l2->getAnoPublicacao();
        }
    );
    

   for (vector<Livro*>::iterator i = tpm->begin(); i != tpm->end(); i++)
    {
        cout << (*i)->getTitulo() << endl;
    }
    return tpm;
}

bool existisAudiobookWriter(vector<Livro*>& colecao,string name){
    vector<Livro*>::iterator itr;
    vector<string>::iterator found;

    vector<Livro*> onlyAudioBooks;
    vector<string> escritores;

    copy_if(colecao.begin(),colecao.end(),back_inserter(onlyAudioBooks),compareLang);

    for(itr = onlyAudioBooks.begin();itr!= onlyAudioBooks.end();itr++){
        escritores = (*itr)->getEscritores();
        found = find(escritores.begin(),escritores.end(),name);
        if(found!=escritores.end()){
            return true;
        }   
    }
    return false;
}

vector<Livro*>* searchPLanguage(string language,vector<Livro*>& lista){
    vector<Livro*> *collection = new vector<Livro*>;
    copy_if(lista.begin(),lista.end(),back_inserter(*collection),
    [language](Livro* livro){
        string langBook = livro->getIdiomaOriginal();
        return (langBook.compare(language) == 0);   
    });  
    
    return collection; 
}
