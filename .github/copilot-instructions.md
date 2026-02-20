# Instruções para agentes (Copilot / AI coding agents)

Objetivo: permitir que um agente AI seja imediatamente produtivo neste repositório C do desafio "Super Trunfo - Países".

Resumo rápido
- Projeto: pequenos programas C que implementam níveis do desafio (Novato/Aventureiro/Mestre).
- Arquivos principais: `xadrez.c` (implementação do fluxo interativo), `CartasSuperTrunfo.c` (esqueleto), `README.md` (requisitos e níveis).

Build & Execução
- Compilação local: `gcc -g xadrez.c -o xadrez` (usa `-g` para depuração).
- VS Code: existe uma task em `.vscode/tasks.json` que chama `/usr/bin/gcc` com `-g` e gera um binário com o mesmo nome do arquivo.
- Execução: `./xadrez` (o programa espera entradas via terminal com `scanf`).

Padrões e convenções do projeto (observáveis no código)
- Programa(s) são orientados a fluxo interativo via `scanf`/`printf` — não há parsing de ficheiros nem bibliotecas externas.
- Tipos: `int` para população/pontos, `float` para área/PIB/densidade/PIB per capita.
- Entradas de texto usam buffers fixos (`char nome[20]`, `char codigo[10]`) sem proteções; prefira usar especificadores de largura em `scanf` quando modificar o código (ex.: `%19s`).
- Cálculos: densidade = `populacao / area` e `pib_per_capita = pib / populacao` — atenção a divisões por zero.

Arquitetura / Por que o código está assim
- O repositório é um conjunto de exercícios didáticos em C: foco em leitura/saída simples, sem modularização. Alterações grandes (ex.: divisão em módulos) devem ser discutidas antes.

Padrões de alteração que o agente deve seguir
- Faça alterações mínimas e explicáveis; preserve o comportamento de entrada/saída interativo a menos que o PR peça refatoração.
- Ao introduzir validações (ex.: checar `area != 0` antes de dividir), inclua mensagens ao usuário para manter a UX igual.
- Não reescreva a interação por completo para interfaces batch ou GUI sem aprovação.

Debug e testes manuais
- Para reproduzir: compilar com `-g` e rodar no terminal. Use `printf` adicionais para depuração local.
- Não há testes automatizados no repositório. Crie testes somente se houver pedido explícito; prefira um binário de teste separado (ex.: `test_cartas.c`) em vez de alterar o binário principal.

Exemplos úteis (que o agente pode usar em commits/PRs)
- Compilar e executar rapidamente:
```
gcc -g xadrez.c -o xadrez
./xadrez
```
- Corrigir buffer overflow em `scanf` (exemplo): substituir `scanf("%s", nome);` por `scanf("%19s", nome);` para `char nome[20]`.

Coisas que NÃO modificar sem pedir
- Mudanças de arquitetura (transformar em múltiplos ficheiros C, adicionar Makefile, ou alterar I/O para ficheiros) sem sinal verde do mantenedor.
- Remover mensagens em português do usuário (o exercício espera interação em PT-BR).

Arquivos de referência
- README.md — descreve os níveis do desafio e requisitos (Novato/Aventureiro/Mestre).
- xadrez.c — implementação interativa de cadastro e exibição das cartas.
- CartasSuperTrunfo.c — esqueleto/arquivo auxiliar.

Perguntas para o mantenedor (se necessário)
- Deseja que eu adicione validação de entrada (ex.: limites, tratamento de divisão por zero)?
- Posso refatorar o código para funções auxiliares (`ler_carta()`, `calcular_metricas()`) ou prefere PRs pequenos e focados?

Se quiser mudanças, responda com qual nível (Novato/Aventureiro/Mestre) e eu adapto as alterações propostas.
