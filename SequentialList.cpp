#include "SequentialList.h"
#include <iostream>

SequentialList::SequentialList() : lista(100, 0), tamAtual(0), tamMax(100) {}

bool SequentialList::vazia() {
    return tamAtual == 0;
}

bool SequentialList::cheia() {
    return tamAtual == tamMax;
}

int SequentialList::tamanho() {
    return tamAtual;
}

bool SequentialList::insere(int pos, int dado) {
    if (cheia() || pos <= 0 || pos > tamAtual + 1) return false;

    for (int i = tamAtual; i >= pos; i--) {
        lista[i] = lista[i - 1];
    }

    lista[pos - 1] = dado;
    tamAtual++;
    return true;
}

int SequentialList::remove(int pos) {
    int dado;
    if (vazia() || pos <= 0 || pos > tamAtual) return -1;

    dado = lista[pos - 1];

    for (int i = pos - 1; i < tamAtual - 1; i++) {
        lista[i] = lista[i + 1];
    }

    tamAtual--;
    return dado;
}

int SequentialList::modificar(int pos, int dado) {
    int dadoAntigo;
    if (vazia() || pos <= 0 || pos > tamAtual) return -1;

    dadoAntigo = lista[pos - 1];
    lista[pos - 1] = dado;
    return dadoAntigo;
}

int SequentialList::obterDado(int pos) {
    if (vazia() || pos <= 0 || pos > tamAtual) return -1;

    return lista[pos - 1];


}

void SequentialList::listar() {
    if (vazia())  std::cout << "A lista esta vazia!";

    for (int i = 0; i < tamAtual; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;
}