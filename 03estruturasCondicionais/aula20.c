// revisao de tipos

/*

Aqui está uma lista dos tipos de dados em C, suas variações, e como eles são expressos nos comandos `printf` e `scanf`:

### Tipos Inteiros

1. **`int`**
   - **Uso**: Tipo inteiro padrão, para números inteiros.
   - **Exemplo no `printf`**: `%d` ou `%i`
   - **Exemplo no `scanf`**: `%d`

2. **`long int` ou `long`**
   - **Uso**: Tipo inteiro com capacidade maior que `int`.
   - **Exemplo no `printf`**: `%ld` ou `%li`
   - **Exemplo no `scanf`**: `%ld`

3. **`short int` ou `short`**
   - **Uso**: Tipo inteiro com capacidade menor que `int`.
   - **Exemplo no `printf`**: `%hd`
   - **Exemplo no `scanf`**: `%hd`

4. **`long long int` ou `long long`**
   - **Uso**: Tipo inteiro com capacidade ainda maior que `long int`.
   - **Exemplo no `printf`**: `%lld`
   - **Exemplo no `scanf`**: `%lld`

5. **`unsigned int`**
   - **Uso**: Tipo inteiro sem sinal (não pode representar números negativos).
   - **Exemplo no `printf`**: `%u`
   - **Exemplo no `scanf`**: `%u`

6. **`unsigned long int`**
   - **Uso**: Tipo inteiro sem sinal com maior capacidade.
   - **Exemplo no `printf`**: `%lu`
   - **Exemplo no `scanf`**: `%lu`

7. **`unsigned short int`**
   - **Uso**: Tipo inteiro sem sinal com capacidade menor que `unsigned int`.
   - **Exemplo no `printf`**: `%hu`
   - **Exemplo no `scanf`**: `%hu`

8. **`unsigned long long int`**
   - **Uso**: Tipo inteiro sem sinal com maior capacidade que `unsigned long`.
   - **Exemplo no `printf`**: `%llu`
   - **Exemplo no `scanf`**: `%llu`

---

### Tipos de Ponto Flutuante (Reais)

1. **`float`**
   - **Uso**: Tipo para números de ponto flutuante de precisão simples.
   - **Exemplo no `printf`**: `%f` (ou `%e`, `%g` para notação científica)
   - **Exemplo no `scanf`**: `%f`

2. **`double`**
   - **Uso**: Tipo para números de ponto flutuante de precisão dupla.
   - **Exemplo no `printf`**: `%lf` (não confundir com `%f` em `printf` para `double`)
   - **Exemplo no `scanf`**: `%lf`

3. **`long double`**
   - **Uso**: Tipo para números de ponto flutuante de precisão estendida (geralmente maior que `double`).
   - **Exemplo no `printf`**: `%Lf`
   - **Exemplo no `scanf`**: `%Lf`

---

### Tipos de Caracteres

1. **`char`**
   - **Uso**: Tipo para armazenar um único caractere (ou pequeno inteiro, no intervalo de -128 a 127 em sistemas com 1 byte).
   - **Exemplo no `printf`**: `%c`
   - **Exemplo no `scanf`**: `%c`

2. **`unsigned char`**
   - **Uso**: Tipo para armazenar um caractere sem sinal (geralmente no intervalo de 0 a 255).
   - **Exemplo no `printf`**: `%c`
   - **Exemplo no `scanf`**: `%c`

---

### Tipos de Strings

1. **`char[]` ou `char*`**
   - **Uso**: Tipo para uma string (sequência de caracteres).
   - **Exemplo no `printf`**: `%s`
   - **Exemplo no `scanf`**: `%s`

---

### Outros Tipos

1. **`void`**
   - **Uso**: Tipo especial que indica a ausência de tipo, utilizado para funções que não retornam valor (funções `void`), ou para ponteiros genéricos.
   - **Exemplo no `printf` e `scanf`**: Não aplicável, pois `void` não é utilizado diretamente em entrada e saída.

---

### Resumo

Aqui está a tabela completa para facilitar a visualização:

| Tipo de Dados                | Exemplo em `printf` | Exemplo em `scanf` |
|------------------------------|---------------------|--------------------|
| `int`                        | `%d`, `%i`          | `%d`               |
| `long int` ou `long`         | `%ld`, `%li`        | `%ld`              |
| `short int` ou `short`       | `%hd`               | `%hd`              |
| `long long int` ou `long long`| `%lld`             | `%lld`             |
| `unsigned int`               | `%u`                | `%u`               |
| `unsigned long int`         | `%lu`               | `%lu`              |
| `unsigned short int`        | `%hu`               | `%hu`              |
| `unsigned long long int`    | `%llu`              | `%llu`             |
| `float`                      | `%f`, `%e`, `%g`    | `%f`               |
| `double`                     | `%lf`               | `%lf`              |
| `long double`                | `%Lf`               | `%Lf`              |
| `char`                       | `%c`                | `%c`               |
| `unsigned char`              | `%c`                | `%c`               |
| `char[]` ou `char*`          | `%s`                | `%s`               |
| `void`                       | Não aplicável       | Não aplicável      |

### Observações:
- Em **`scanf`**, quando usamos tipos como `char[]` ou `char*` para strings, o argumento deve ser um array de caracteres (ou ponteiro para o primeiro caractere de uma string).
- A precisão de tipos como `float`, `double`, e `long double` pode variar dependendo do compilador e da plataforma.

*/