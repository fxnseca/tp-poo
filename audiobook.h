#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include <vector>
#include "livro.h"

using namespace std;


class AudioBook : public Livro{
    float duracao;
    string formatoAudio;

public:
    AudioBook(float, string, vector<string>, string, vector<string>, int, string, vector<string>);
    ~AudioBook();
    float getDuracao();
    void setDuracao(float);
    string getFormatoAudio();
    void setFormatoAudio(string);
};

#endif