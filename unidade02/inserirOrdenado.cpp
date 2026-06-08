

auto atual = this->cabeca->proximo;

while(atual != cauda && atual->valor > s){
    atual = atual->proximo;
}

if ((atual != this->cauda && atual->valor == s) || 
    (atual->anterior != this->cabeca && atual->anterior->valor == s)) {
    return false;
}

auto vizinhoDireita = atual
auto vizinhoEsquerda = atual->anterior;

auto novoElement = new no<std::string>(s);

novoElement->proximo = vizinhoDireita;
novoElement->anterior = vizinhoEsquerda;

vizinhoDireita->proximo = novoElement;
vizinhoEsquerda->anterior = novoElement;

this->quantidade++;
return true;