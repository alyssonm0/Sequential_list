#include "SequentialList.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n = 0;
    cout << "Deseja que seja automatico ou manual? (1 - automatico, 2 - manual): ";
    cin >> n;

    if (n == 1 )
    {
        SequentialList lista;
        cout << "Lista criada com sucesso!" << endl;

        cout << "Verificando se a lista esta vazia..." << endl;
        cout << "A lista esta vazia? " << (lista.vazia() ? "Sim" : "Não") << endl;

        cout << "Verificando se a lista esta cheia..." << endl;
        cout << "A lista esta cheia? " << (lista.cheia() ? "Sim" : "Não") << endl;

        cout << "Inserindo 5 elementos na lista..." << endl;

        for (int i = 1; i <= 5; i++) {
            int j = rand() % 100;
            lista.insere(i,j);
            cout << "Inserido o elemento " << j << " na posicao " << i << endl;
        }
        cout << "Lista Atual: ";
        lista.listar();

        cout << "Verificando se a lista esta vazia..." << endl;
        cout << "A lista esta vazia? " << (lista.vazia() ? "Sim" : "Não") << endl;

        cout << "Verificando se a lista esta cheia..." << endl;
        cout << "A lista esta cheia? " << (lista.cheia() ? "Sim" : "Não") << endl;

        cout << "Tamanho da lista: " << lista.tamanho() << endl;

        cout << "Modificando o elemento na posicao 3..." << endl;
        cout << "Elemento antigo: " << lista.modificar(3, 100) << endl;
        cout << "Elemento novo: " << lista.obterDado(3) << endl;

        cout << "Lista Atual: ";
        lista.listar();

        cout << "Removendo o elemento na posicao 2..." << endl;
        cout << "Elemento removido: " << lista.remove(2) << endl;
        cout << "Tamanho da lista: " << lista.tamanho() << endl;

        cout << "Lista Atual: ";
        lista.listar();

        cout << "Limpando a lista..." << endl;
        while (!lista.vazia()) {
            cout << "Removendo o elemento " << lista.remove(1) << endl;
        }
        cout << "Verificando se a lista esta vazia..." << endl;
        cout << "A lista esta vazia? " << (lista.vazia() ? "Sim" : "Não") << endl;

        cout << "Fim do programa!" << endl;
        return 0;

    }

    else if (n == 2){



        int escolha = 0;
        int trava = 0;
        SequentialList lista;
        do
        {
            cout << endl << "Qual ação deseja realizar?" << endl << endl << "1 - Criar Lista" << endl << "2 - Verificar se a lista esta vazia" << endl 
            << "3 - Verificar se a lista esta cheia" << endl << "4 - Inserir elemento" << endl << "5 - Remover elemento" << endl 
            << "6 - Modificar elemento" << endl << "7 - Obter dado" << endl << "8 - Listar" << endl << "0 - Sair" << endl;
            cin >> escolha;

            if (escolha == 1)
            {
                SequentialList list;
                cout << "Lista criada com sucesso!" << endl;
                trava =1;
                
            }
            else if (escolha == 2 && trava ==1){
                cout << "A lista esta vazia? " << (lista.vazia() ? "Sim" : "Não") << endl;
            }
            else if (escolha == 3 && trava ==1){
                cout << "A lista esta cheia? " << (lista.cheia() ? "Sim" : "Não") << endl;
            }
            else if (escolha == 4 && trava ==1){
                int pos, dado;
                cout << "Digite a posição que deseja inserir o elemento: ";
                cin >> pos;
                cout << "Digite o elemento que deseja inserir: ";
                cin >> dado;
                if (lista.insere(pos, dado))
                {
                    cout << "Elemento inserido com sucesso!" << endl;
                }
                else
                {
                    cout << "Erro ao inserir o elemento! Posição invalida!" << endl;
                }
            }
            else if (escolha == 5 && trava ==1){
                int pos;
                cout << "Digite a posição que deseja remover o elemento: ";
                cin >> pos;
                int dado = lista.remove(pos);
                if (dado != -1)
                {
                    cout << "Elemento removido: " << dado << endl;
                }
                else
                {
                    cout << "Erro ao remover o elemento! Posição invalida!" << endl;
                }
            }
            else if (escolha == 6 && trava ==1){
                int pos, dado;
                cout << "Digite a posição que deseja modificar o elemento: ";
                cin >> pos;
                cout << "Digite o novo elemento: ";
                cin >> dado;
                int dadoAntigo = lista.modificar(pos, dado);
                if (dadoAntigo != -1)
                {
                    cout << "Elemento antigo: " << dadoAntigo << endl;
                    cout << "Elemento modificado com sucesso!" << endl;
                }
                else
                {
                    cout << "Erro ao modificar o elemento! Posição invalida" << endl;
                }
            }
            else if (escolha == 7 && trava ==1){
                int pos;
                cout << "Digite a posição que deseja obter o dado: ";
                cin >> pos;
                int dado = lista.obterDado(pos);
                if (dado != -1)
                {
                    cout << "Dado: " << dado << endl;}
                else
                {
                    cout << "Erro ao obter o dado! Posição invalida." << endl;
                }}

            else if (escolha == 8 && trava ==1){
                cout << "Lista Atual: ";
                lista.listar();
            }
            else if (escolha == 0){
                cout << "Fim do programa!" << endl;
            }
            else{
                cout << "Você não tem uma lista criada!" << endl;
            }
            

            
        
        } while (escolha != 0);
        
        
    }
    
}