int removidos = 0;

    while(primeiro != nullptr && primeiro->valor == valor){
        No* noparaDeletar = primeiro;
        primeiro = primeiro->proximo;

        delete noparaDeletar;
        this->quantidade--;
        removidos++;
    }
    if(primeiro == nullptr){
        this->ultimo = nullptr;
        return removidos;
    }

    No* atual = primeiro;

    while(atual->proximo != nullptr){
        if(atual->proximo->valor == valor){
            No* noparaDeletar = atual->proximo;

            atual->proximo = atual->proximo->proximo;

            if(atual->proximo == nullptr){
                this->ultimo = atual;
            }

            delete noparaDeletar;
            this->quantidade--;
            removidos++;
            
        } else{
            atual = atual->proximo;
        }
    }
    return removidos;
