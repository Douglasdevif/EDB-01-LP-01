auto atual = this->cabeca->proximo;

for(int j = 1; j < this->quantidade + 1; j++){
    if(atual->valor == referencia){

        auto novoElement = new No<std::string>(novoElemento);

        vizinhoDaDireita = atual;
        vizinhoDaEsquerda = atual->anterior;

        vizinhoDaEsquerda->proximo = novoElement;
        vizinhoDaDireita->anterior = novoElement;

        this->quantidade++;
        return true;
    }
    atual = atual->proximo;
}
	return false;






auto atual = this->cabeca->getProximo();

    for (int j = 1; j < this->quantidade + 1; j++) {
        if (atual->getValor() == referencia) {

            auto vizinhoDaDireita = atual;
            auto vizinhoDaEsquerda = atual->getAnterior();

            auto novoElement = new No<std::string>(novoElemento);

            novoElement->setProximo(vizinhoDaDireita);
            novoElement->setAnterior(vizinhoDaEsquerda);

            vizinhoDaEsquerda->setProximo(novoElement);
            vizinhoDaDireita->setAnterior(novoElement);

            this->quantidade++;
            return true;
        }
        atual = atual->getProximo();
    }
    return false;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 auto atual = this->cabeca->getProximo();

	 for(int j = 1; j< this->quantidade+1; j++){
		if(atual->getValor() == referencia){
			auto novoElement = new No<std::string>(novoElemento);

			novoElement->setProximo(atual);
			novoElement->setAnterior(atual->getAnterior());

			atual->getAnterior()->setProximo(novoElement);
			atual->setAnterior(novoElement);

			this->quantidade++;
			return true;
		}
		atual = atual->getProximo();
	 }
	 return false;

}

