#pragma once
#define SEQUENTIALLIST_H


#include <vector>
using namespace std;

class SequentialList {
private:
    vector<int> lista;
    int tamAtual;
    int tamMax;

public:
    SequentialList();
    bool vazia();
    bool cheia();
    int tamanho();
    bool insere(int pos, int dado);
    int remove(int pos);
    int modificar(int pos, int dado);
    int obterDado(int pos);
    void listar();
};
