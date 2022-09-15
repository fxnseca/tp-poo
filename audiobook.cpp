#include "audiobook.h"
#include "livro.h"

AudioBook :: AudioBook (float duracao, string formatoAudio, vector<string> escritores, string titulo, vector<string>capitulos, 
int anoPublicacao, string idiomaOriginal, vector<string> keywords): Livro(escritores,titulo, capitulos, anoPublicacao, idiomaOriginal, keywords),
duracao(duracao), formatoAudio(formatoAudio){}

AudioBook :: ~AudioBook(){}


float AudioBook :: getDuracao()
{
    return duracao;
}

void AudioBook :: setDuracao(float duracao)
{
    this->duracao = duracao;
}


string AudioBook :: getFormatoAudio ()
{
    return formatoAudio;
}


void AudioBook :: setFormatoAudio(string formatoAudio)
{
    this->formatoAudio = formatoAudio;
}