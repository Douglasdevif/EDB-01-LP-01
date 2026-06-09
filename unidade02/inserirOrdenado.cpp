

auto atual = this->cabeca->proximo;

while(atual != cauda && atual->valor > s){
    atual = atual->proximo;
}

if (atual != this->cauda && atual->valor == s) {
    return false;
}

auto vizinhoDireita = atual
auto vizinhoEsquerda = atual->anterior;

auto novoElement = new no<std::string>(s);

novoElement->proximo = vizinhoDireita;
novoElement->anterior = vizinhoEsquerda;

vizinhoEsquerda->proximo = novoElement;
vizinhoDireita->anterior = novoElement;

this->quantidade++;
return true;