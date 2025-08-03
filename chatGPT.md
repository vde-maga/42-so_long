## Organização do Projeto "So Long and Thanks for all the Fish!"

Com base no enunciado do projeto, aqui está uma organização das etapas necessárias para concluir o projeto:

**I. Planejamento e Preparação:**

1.  **Leitura e Compreensão Completa do Enunciado:** Leia o documento PDF detalhadamente, certificando-se de entender todos os requisitos da parte obrigatória e dos bônus.
2.  **Escolha das Ferramentas:** Confirme se você tem acesso à MiniLibX (versão escolar ou instalação via fontes). Decida sobre a linguagem de programação (já definido como C).
3.  **Estrutura do Diretório:** Crie uma estrutura de diretórios organizada para o seu projeto. Uma sugestão:
    ```
    so_long/
    ├── src/          # Código fonte (c)
    │   ├── main.c
    │   ├── game.c      # Lógica principal do jogo
    │   ├── map.c       # Parsing e manipulação de mapas
    │   └── ...        # Outros arquivos .c
    ├── include/      # Arquivos de cabeçalho (h)
    │   ├── so_long.h
    │   ├── map.h
    │   └── ...
    ├── data/         # Arquivos de dados (mapas, texturas)
    │   ├── maps/
    │   │   └── ... (seus arquivos .ber)
    │   └── textures/
    │       └── ... (suas texturas)
    ├── Makefile       # Para compilação do projeto
    └── README.md      # Descrição do projeto e instruções de uso (opcional, mas recomendado)
    ```
4.  **Criação do Makefile Inicial:** Comece com um `Makefile` básico que inclua as regras essenciais (`NAME`, `all`, `clean`, `fclean`, `re`).

**II. Implementação da Parte Obrigatória:**

1.  **Configuração do Projeto:**
    *   Crie o arquivo `so_long` (o nome do seu programa).
    *   Defina as variáveis de ambiente necessárias para a MiniLibX (se necessário).
2.  **Implementação do `main`:**
    *   Crie a função `main()` que:
        *   Lê o nome do arquivo de mapa como argumento da linha de comando.
        *   Inicializa a MiniLibX (abre uma janela).
        *   Carrega o mapa.
        *   Implementa a lógica principal do jogo (movimento do personagem, detecção de colisões com paredes, coleta de itens, escape).
        *   Exibe informações no console (contagem de movimentos).
        *   Trata eventos do teclado e mouse.
        *   Libera a memória alocada.
        *   Fecha a janela e encerra o programa corretamente.
3.  **Implementação das Funções Obrigatórias:**
    *   **`open`, `close`, `read`, `write`, `malloc`, `free`, `perror`, `strerror`, `exit`:** Utilize essas funções conforme necessário para gerenciamento de arquivos e memória, tratamento de erros e encerramento do programa.
    *   **Funções da biblioteca matemática (`math.h`):** Implemente funcionalidades que utilizem as funções da biblioteca matemática (se aplicável ao seu design).
    *   **Funções da MiniLibX:** Utilize as funções da MiniLibX para desenhar a janela, lidar com eventos e renderizar os gráficos do jogo.
    *   **`ft_printf` ou equivalente:** Implemente uma função de impressão formatada se não tiver acesso à biblioteca padrão.
4.  **Implementação do Parser de Mapa:**
    *   Crie uma função para ler o arquivo de mapa (`.ber`) e interpretar os diferentes caracteres (paredes, itens, etc.).
    *   Valide a estrutura do mapa: verifique se há um ponto de partida, um item para coletar e um ponto de saída.
    *   Verifique se o mapa é retangular e se está cercado por paredes.
    *   Implemente a lógica para verificar a existência de um caminho válido no mapa.
    *   Se encontrar erros na estrutura do mapa, exiba uma mensagem de erro e encerre o programa corretamente.

**III. Implementação da Parte dos Bônus (Opcional):**

1.  **Escolha dos Bônus:** Selecione um ou mais bônus para implementar, considerando seu tempo e habilidades.
2.  **Implementação das Funcionalidades Adicionais:**
    *   **Perda ao tocar em patrulhas de inimigos.**
    *   **Animação de sprites.**
    *   **Exibição da contagem de movimentos na tela.**
3.  **Teste dos Bônus:** Garanta que os bônus implementados funcionem corretamente e não causem regressões no código principal.

**IV. Testes e Depuração:**

1.  **Testes Unitários (não obrigatório, mas recomendado):** Crie pequenos programas de teste para verificar o funcionamento de partes específicas do seu código (por exemplo, o parser de mapa).
2.  **Testes de Integração:** Teste o jogo completo com diferentes arquivos de mapa para garantir que todas as funcionalidades funcionem corretamente.
3.  **Depuração:** Utilize um debugger para identificar e corrigir quaisquer erros no seu código.

**V. Documentação e Submissão:**

1.  **Documentação (opcional, mas recomendado):** Adicione comentários ao seu código explicando a lógica e o funcionamento das diferentes partes. Crie um arquivo `README.md` com instruções de compilação e uso do seu programa.
2.  **Preparação para Submissão:** Verifique se você incluiu todos os arquivos necessários (código fonte, arquivos de cabeçalho, arquivos de dados, `Makefile`).
3.  **Submissão via Git:** Envie seu código para o repositório Git designado. Certifique-se de que apenas os arquivos dentro do repositório sejam considerados para avaliação.

**Observações Importantes:**

*   Priorize a conclusão da parte obrigatória com qualidade antes de se dedicar aos bônus.
*   Mantenha um código limpo e bem organizado.
*   Certifique-se de que seu `Makefile` é correto e não realiza relinking desnecessário.
*   Teste seu programa exaustivamente para garantir que ele funcione corretamente em diferentes cenários.

Seguindo estas etapas, você estará bem encaminhado para completar com sucesso o projeto "So Long and thanks for all the fish!".

---

## Organização do Projeto "So Long and Thanks for all the Fish!"

Com base no enunciado do projeto, aqui está uma organização das etapas necessárias para completar o projeto:

**I. Configuração Inicial e Estrutura de Diretórios:**

1.  **Crie um repositório Git:** Utilize um sistema de controle de versão como o Git para gerenciar seu código.
2.  **Estrutura de Diretórios Sugerida:**
    ```
    so_long/
    ├── src/
    │   ├── main.c         # Arquivo principal do programa
    │   ├── game.c         # Lógica principal do jogo (movimento, colisões, etc.)
    │   ├── map.c          # Leitura e análise do arquivo de mapa (.ber)
    │   ├── graphics.c     # Tratamento da interface gráfica (MiniLibX)
    │   └── ...           # Outros arquivos de suporte
    ├── include/
    │   ├── so_long.h       # Arquivo de cabeçalho principal
    │   ├── map.h          # Definições relacionadas ao mapa
    │   ├── graphics.h      # Definições para a biblioteca gráfica
    │   └── ...
    ├── data/
    │   ├── maps/          # Diretório para os arquivos de mapa (.ber)
    │   └── textures/      # Diretório para as texturas (sprites, etc.)
    ├── Makefile           # Arquivo Makefile para compilação
    ├── README.md          # Documentação do projeto (opcional)
    ```

**II. Implementação da Parte Obrigatória:**

1.  **Arquivos Principais (src/):**
    *   `main.c`: Função `main()` que inicializa o programa, carrega o mapa, inicia o loop principal e fecha corretamente.
    *   `game.c`: Implemente a lógica de movimento do jogador, detecção de colisões com paredes, coleta de itens e verificação da rota de fuga.
    *   `map.c`: Desenvolva as funções para ler o arquivo `.ber`, analisar o mapa e verificar a validade (número de entradas, saídas, colecionáveis, formato).
    *   `graphics.c`: Utilize a biblioteca MiniLibX para abrir a janela, desenhar os elementos do jogo (jogador, mapa, itens) e lidar com eventos de teclado e mouse. Implemente o tratamento de `ESC` e clique no 'X'.

2.  **Funções Externas:**
    *   Inclua as funções externas obrigatórias: `open`, `close`, `read`, `write`, `malloc`, `free`, `perror`, `strerror`, `exit`.
    *   Utilize as funções da biblioteca matemática (`math.h`) conforme necessário (ex: cálculo de distância).
    *   Implemente as funções do MiniLibX que forem necessárias para a interface gráfica.
    *   Crie suas próprias funções `ft_printf` ou uma alternativa equivalente, se solicitado.

3.  **Makefile:**
    *   Crie um arquivo `Makefile` que compile todos os arquivos `.c` e gere o executável `so_long`.
    *   Certifique-se de incluir as flags `-Wall`, `-Wextra` e `-Werror`.
    *   Implemente as regras para `$(NAME)`, `all`, `clean`, `fclean` e `re`.

4.  **Tratamento do Mapa:**
    *   Implemente a lógica para analisar o arquivo `.ber` conforme as especificações (formatos de caracteres, número mínimo de elementos).
    *   Verifique se o mapa é retangular e está cercado por paredes.
    *   Implemente a verificação da existência de um caminho válido para a fuga.
    *   Trate erros de formatação no arquivo `.ber` com uma mensagem de erro adequada e saída limpa.

**III. Implementação da Parte Bônus (Opcional):**

1.  Se a parte bônus for considerada (após a aprovação da parte obrigatória), implemente uma ou mais das funcionalidades opcionais:
    *   Adicionar patrulhas de inimigos e fazer o jogador perder ao tocá-los.
    *   Implementar animações para o personagem.
    *   Exibir a contagem de movimentos diretamente na tela.

2.  Organize os arquivos e diretórios necessários para a parte bônus (ex: `bonus/`).

**IV. Testes e Entrega:**

1.  **Crie um arquivo de mapa de teste (.ber):** Crie um arquivo `.ber` simples para testar sua implementação.
2.  **Execute o programa com o arquivo de mapa de teste.**
3.  **Realize testes manuais:** Verifique se o movimento do jogador funciona corretamente, se a coleta de itens e a fuga estão implementadas, e se o tratamento de erros funciona como esperado.
4.  **Prepare a entrega:**
    *   Certifique-se de que todos os arquivos obrigatórios (código fonte, `Makefile`, arquivos de mapa, texturas) estejam no seu repositório Git.
    *   Submeta o código para o repositório designado.

**Observações Importantes:**

*   Siga rigorosamente as instruções do enunciado do projeto.
*   Mantenha o código bem organizado e com comentários claros.
*   Certifique-se de que seu programa seja robusto e lide com erros de forma adequada.
*   A parte bônus só será avaliada se a parte obrigatória for perfeita.

Seguindo essas etapas, você estará bem encaminhado para completar o projeto "So Long and Thanks for all the Fish!".
