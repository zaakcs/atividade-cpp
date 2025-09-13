# 📘 Relatório – Atividade em C++

## 2. Tutorial detalhado sobre como rodar o código

### a) Ferramentas necessárias
Para programar em **C++**, precisamos de:
- Compilador C++ (`g++`)
- Editor de código (**Visual Studio Code**)

---

### b) Instalação do compilador e do VS Code
**Windows**
1. Instale o [MSYS2](https://www.msys2.org/).  
2. Abra o terminal **MSYS2 MinGW64** e rode:
   ```bash
   pacman -Syu
   pacman -S mingw-w64-x86_64-gcc
   ```
3. Adicione `C:\msys64\mingw64\bin` ao **Path do Windows**.  
4. Instale o [Visual Studio Code](https://code.visualstudio.com/).  
5. No VS Code, instale a extensão **C/C++** (Microsoft).

**Linux (Ubuntu/Debian)**
```bash
sudo apt update
sudo apt install g++
```

**macOS**
```bash
xcode-select --install
```

---

### c) Criar e salvar o arquivo com o código-fonte
1. Abra o VS Code.  
2. Crie uma pasta para o projeto (ex.: `meu_projeto`).  
3. Dentro dela, crie um arquivo chamado **`programa.cpp`**.  
4. Cole o seguinte código:

```cpp
#include <iostream>
using namespace std;

// Função que calcula a área de um retângulo
int areaRetangulo(int base, int altura) {
    return base * altura;
}

int main() {
    // 1. Exibir uma mensagem
    cout << "Hello, World!" << endl;

    // 2. Cálculo simples (soma)
    int a = 10, b = 5;
    int soma = a + b;
    cout << "A soma de " << a << " + " << b << " = " << soma << endl;

    // 3. Usar a função para calcular a área
    int base = 4, altura = 3;
    cout << "A area do retangulo (" << base << " x " << altura << ") = "
         << areaRetangulo(base, altura) << endl;

    return 0;
}
```

---

### d) Compilar e executar o código
No VS Code, abra o terminal integrado (Ctrl + `) e digite:

```bash
g++ programa.cpp -o programa
```

Depois execute:
- **Windows**:
  ```bash
  programa.exe
  ```
- **Linux/macOS**:
  ```bash
  ./programa
  ```

**Saída esperada:**
```
Hello, World!
A soma de 10 + 5 = 15
A area do retangulo (4 x 3) = 12
```

---

## 3. Explicação do código

### a) O que cada linha faz
- `#include <iostream>` → importa a biblioteca de entrada e saída.  
- `using namespace std;` → permite usar `cout` sem `std::`.  
- `int areaRetangulo(int base, int altura)` → função que calcula a área.  
- `int main()` → função principal onde o programa começa.  
- `cout << "Hello, World!" << endl;` → imprime mensagem.  
- `int a = 10, b = 5;` → cria duas variáveis inteiras.  
- `int soma = a + b;` → calcula a soma.  
- `cout << ...` → imprime resultado da soma.  
- `int base = 4, altura = 3;` → define valores de um retângulo.  
- `areaRetangulo(base, altura)` → chama a função para calcular área.  
- `return 0;` → finaliza o programa.  

### b) Como C++ lida com variáveis, funções e estruturas
- **Variáveis**: precisam ser declaradas com tipo (`int`, `float`, etc.).  
- **Funções**: têm tipo de retorno (`int`, `void` etc.), podem receber parâmetros e devolver valores.  
- **Estruturas básicas**: C++ suporta `if`, `while`, `for`, funções, classes e objetos, sendo uma linguagem multiparadigma.  
