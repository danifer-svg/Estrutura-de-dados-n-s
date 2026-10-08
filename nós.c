// Inserção no Início - O(1)

int inserirInicio(No **inicio, int valor) {
    // 1. Alocar novo nó
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) return 0;

    // 2. Preencher o nó
    novo->dado = valor;
    novo->prox = *inicio;

    // 3. Atualizar inicio
    *inicio = novo;
    return 1;
}

// Inserção no Fim - O(n)

int inserirFim(No **inicio, int valor) {
    // 1. Alocar novo nó
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) return 0;
    novo->dado = valor;
    novo->prox = NULL;

    // 2. Se lista vazia, novo é o início
    if (*inicio == NULL) {
        *inicio = novo;
        return 1;
    }

    // 3. Percorrer até o último nó
    No *aux = *inicio
    while (aux->prox != NULL)
        aux = aux->prox;
    
    // 4. Conectar ao último nó
    aux->prox = novo;
    return 1;
}
