#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include <vector>
#include "livro.h"

using namespace std;
typedef const char* String;

class AudioBook : public Livro{
    float duracao;
    String formatoAudio;

public:
    float getDuracao();
    void setDuracao(float);
    String getFormatoAudio();
    void setFormatoAudio(String);
};

#endif