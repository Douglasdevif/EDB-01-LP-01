auto atual = this->cabeca->proximo;

for(int j = 1; j < this->quantidade+1; j++){
    if(atual->valor == referencia){
        auto novoElement = No<std::string>(novoElemento);

        novoElement->proximo = novoElemento;
        novoElement->anterior = atual->anterior;

        atual->anterior->proximo = novoElemento;
        atual->anterior = novoElemento;

        this->quantidade++;
        return true;
    }
    atual = atual->proximo;
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

