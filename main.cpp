#include "funcoes.h"
#include "impresso.h"
#include "eletronico.h"
#include "audiobook.h"
#include "livro.h"
#include <list>
#include <string>

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include <string> 
#include <sstream> 
#include <algorithm> 
#include <iterator>

using namespace std;

void split(const string& str, vector<string>& cont, char delim = ' ') {
 stringstream ss(str); 
 string token;
 while (getline(ss, token, delim)) 
 cont.push_back(token); 
}

int main(){

    vector<Livro*> lista;
    ifstream arquivo;
    string name;

    int tipo;
    
    vector<string> escritores; 
    string escritoresSemFormatacao;
    string titulo;
    vector<string> capitulos;
    string capitulosSemFormatacao;
    int ano;
    string idioma;
    vector<string> keywords;
    string keywordsSemFormatacao;

    string livrariasSemFormatacao;
    vector<string> livrarias;
    int colunas;

    string url;
    string formatoArquivo;

    float duracao;
    string formatoAudio;
    
    for(int i=1;i<=16;i++){
        name = "livros/";
        name += to_string(i);
        name += ".txt";
        arquivo.open(name,ios::in);
       if(!arquivo){
            cout<<"Error: File "<<name<<" cannot be open";
            continue;
        }
        
        //Lendo tipo do livro
        arquivo>>tipo;
        
        //Lendo o nome do livro
        arquivo.seekg(2*sizeof(char));
        getline(arquivo,titulo);
        
        //lendo os escritores
        getline(arquivo,escritoresSemFormatacao);       
        split(escritoresSemFormatacao,escritores,';');


        //Lendo ano do livro
        arquivo>>ano;
        //Lendo idioma
        arquivo>>idioma;
        //Lendo as keywords
        

        string trash;
        getline(arquivo,trash);

        getline(arquivo,keywordsSemFormatacao);
        split(keywordsSemFormatacao,keywords,';');
        
        getline(arquivo,capitulosSemFormatacao);
        split(capitulosSemFormatacao,capitulos,';');


        switch(tipo){
            case 1:{
                //Lendo as livrarias
                getline(arquivo,livrariasSemFormatacao);
                split(livrariasSemFormatacao,livrarias,';');
                //Lendo numero de colunas
                arquivo>>colunas;
                //criando e inserindo o objeto impresso a lista

                lista.push_back(new impresso(escritores,titulo,capitulos,ano,
                idioma,keywords,livrarias,colunas));
                break;
            }
            case 2:{
                 //Lendo url 
                arquivo>>url;
                //Lendo formatoArquivo
                arquivo>>formatoArquivo;
                //criando e inserindo o objeto livro a lista

                lista.push_back(new eletronico(escritores,titulo,capitulos,ano,
                idioma,keywords,url,formatoArquivo));
                break;
            }
            case 3:{
                //Lendo duracao
                arquivo>>duracao;
                //Lendo formatoAudio
                arquivo>>formatoAudio;
                //criando e inserindo o objeto livro a lista

                lista.push_back(new audiobook(escritores,titulo,capitulos,ano,
                idioma,keywords,duracao,formatoAudio));
                break;
            }
            default:
                printf("Error: Invalid type of book!\n");
        }

        escritores.clear();
        capitulos.clear();
        keywords.clear();   
        livrarias.clear();
        arquivo.close();

    }//finalizou leitura  
  

    return 0;
}