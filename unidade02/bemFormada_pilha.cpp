std::stack<char> pilha;

    for (char atual : str) {
        switch (atual) {
            
            case '{':
            case '[':
            case '(':
                pilha.push(atual);
                break;

            case '}':
                if (pilha.empty() || pilha.top() != '{') return false;
                pilha.pop();
                break;

            case ']':
                if (pilha.empty() || pilha.top() != '[') return false;
                pilha.pop();
                break;

            case ')':
                if (pilha.empty() || pilha.top() != '(') return false;
                pilha.pop();
                break;
        }
    }

    return pilha.empty();
