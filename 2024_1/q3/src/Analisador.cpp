//
//  ListaEncadeada.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#include "../header/Analisador.h"
#include <string>
#include <stack>

using namespace std;

Analisador::Analisador()
{
    
}

bool Analisador::eBemFormada(std::string str)
{
    // como declarar a pilha que armazenará caracteres do tipo char
    stack<char> pilha;

    // como iterar os carecteres da string de entrada
    for(char ch : str)
    {
        // como verificar se o caractere é um parêntese de abertura
        if(ch == '(' || ch == '{' || ch == '[')
        {
            // como empilhar o caractere na pilha
            pilha.push(ch);
        }
        // como verificar se o caractere é um parêntese de fechamento
        else if(ch == ')' || ch == '}' || ch == ']')
        {
            // como verificar se a pilha está vazia (caso haja um parêntese de fechamento sem um correspondente de abertura)
            if(pilha.empty())
                return false;

            // como desempilhar o caractere do topo da pilha
            char topo = pilha.top();
            pilha.pop();

            // como verificar se o parêntese de fechamento corresponde ao parêntese de abertura desempilhado
            if((ch == ')' && topo != '(') ||
               (ch == '}' && topo != '{') ||
               (ch == ']' && topo != '['))
            {
                return false;
            }
        }
    }

    
}
