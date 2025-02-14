# Lista Sequencial em C++

Este projeto implementa uma **lista sequencial** em C++ utilizando a classe `SequentialList`. A lista é baseada em um `vector<int>` e oferece operações básicas como inserção, remoção, modificação e consulta de elementos. O programa permite interação manual ou automática para testar as funcionalidades da lista.

---

## Estrutura do Projeto

O projeto consiste nos seguintes arquivos:

1. **`SequentialList.h`**: Contém a declaração da classe `SequentialList` e seus métodos.
2. **`SequentialList.cpp`**: Implementa os métodos da classe `SequentialList`.
3. **`main.cpp`**: Contém o código de teste para demonstrar o uso da lista sequencial, com opções de interação manual e automática.

---

## Funcionalidades

A classe `SequentialList` oferece as seguintes operações:

- **`SequentialList()`**: Construtor que inicializa a lista com um tamanho máximo padrão (100).
- **`bool vazia()`**: Verifica se a lista está vazia.
- **`bool cheia()`**: Verifica se a lista está cheia.
- **`int tamanho()`**: Retorna o número de elementos na lista.
- **`bool insere(int pos, int dado)`**: Insere um elemento em uma posição específica.
- **`int remove(int pos)`**: Remove um elemento de uma posição específica.
- **`int modificar(int pos, int dado)`**: Modifica o valor de um elemento em uma posição específica.
- **`int obterDado(int pos)`**: Retorna o valor de um elemento em uma posição específica.
- **`void listar()`**: Exibe todos os elementos da lista.

---

## Como Compilar e Executar

### Compilação

Para compilar o projeto, use o seguinte comando no terminal:

```bash
g++ main.cpp SequentialList.cpp -o lista_sequencial
```
Isso gerará um executável chamado lista_sequencial.

Execução
Execute o programa com:
```bash
./lista_sequencial
```
## Modo de Uso
O programa oferece dois modos de interação:

### 1. Modo Automático
No modo automático, o programa executa uma série de operações predefinidas para demonstrar as funcionalidades da lista, como:
- **`Inserção de elementos.`**
- **`Verificação de lista vazia/cheia.`**
- **`Modificação e remoção de elementos.`**
- **`Exibição da lista.`**

## 2. Modo Manual
No modo manual, o usuário pode interagir com a lista por meio de um menu, escolhendo entre as seguintes opções:

1. Criar lista.

2. Verificar se a lista está vazia.

3. Verificar se a lista está cheia.

4. Inserir elemento.

5. Remover elemento.

6. Modificar elemento.

7. Obter dado de uma posição.

8. Listar elementos.

0. Sair.

## Exemplo de Saída
### Modo Automático:

```plaintext
Deseja que seja automatico ou manual? (1 - automatico, 2 - manual): 1
Lista criada com sucesso!
Verificando se a lista esta vazia...
A lista esta vazia? Sim
Verificando se a lista esta cheia...
A lista esta cheia? Não
Inserindo 5 elementos na lista...
Inserido o elemento 83 na posicao 1
Inserido o elemento 86 na posicao 2
Inserido o elemento 77 na posicao 3
Inserido o elemento 15 na posicao 4
Inserido o elemento 93 na posicao 5
Lista Atual: 83 86 77 15 93 
Verificando se a lista esta vazia...
A lista esta vazia? Não
Verificando se a lista esta cheia...
A lista esta cheia? Não
Tamanho da lista: 5
Modificando o elemento na posicao 3...
Elemento antigo: 77
Elemento novo: 100
Lista Atual: 83 86 100 15 93 
Removendo o elemento na posicao 2...
Elemento removido: 86
Tamanho da lista: 4
Lista Atual: 83 100 15 93 
Limpando a lista...
Removendo o elemento 83
Removendo o elemento 100
Removendo o elemento 15
Removendo o elemento 93
Verificando se a lista esta vazia...
A lista esta vazia? Sim
Fim do programa!
```
### Modo Manual
```plaintext
Deseja que seja automatico ou manual? (1 - automatico, 2 - manual): 2

Qual ação deseja realizar?

1 - Criar Lista
2 - Verificar se a lista esta vazia
3 - Verificar se a lista esta cheia
4 - Inserir elemento
5 - Remover elemento
6 - Modificar elemento
7 - Obter dado
8 - Listar
0 - Sair
1
Lista criada com sucesso!

Qual ação deseja realizar?

1 - Criar Lista
2 - Verificar se a lista esta vazia
3 - Verificar se a lista esta cheia
4 - Inserir elemento
5 - Remover elemento
6 - Modificar elemento
7 - Obter dado
8 - Listar
0 - Sair
4
Digite a posição que deseja inserir o elemento: 1
Digite o elemento que deseja inserir: 50
Elemento inserido com sucesso!

Qual ação deseja realizar?

1 - Criar Lista
2 - Verificar se a lista esta vazia
3 - Verificar se a lista esta cheia
4 - Inserir elemento
5 - Remover elemento
6 - Modificar elemento
7 - Obter dado
8 - Listar
0 - Sair
8
Lista Atual: 50 

Qual ação deseja realizar?

1 - Criar Lista
2 - Verificar se a lista esta vazia
3 - Verificar se a lista esta cheia
4 - Inserir elemento
5 - Remover elemento
6 - Modificar elemento
7 - Obter dado
8 - Listar
0 - Sair
0
Fim do programa!
```
## Observações
- O tamanho máximo da lista é fixo (100 elementos).

- As posições válidas para operações são de 1 até o tamanho atual da lista.

- No modo manual, é necessário criar a lista antes de realizar qualquer operação.

