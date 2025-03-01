

Um jogo 2D simples usando a biblioteca MLX (MiniLibX) para gráficos.

## Visão Geral do Programa

O "so_long" é um jogo onde o jogador deve coletar todos os itens colecionáveis ('C') em um mapa e depois chegar à saída ('E'). O jogador se move pelo mapa usando as teclas WASD ou as setas direcionais.

## Fluxo Principal do Programa

1. **Inicialização (main.c)**:
   - Verifica se o usuário forneceu o caminho correto para um arquivo de mapa (.ber)
   - Inicializa a estrutura do jogo e do mapa
   - Carrega o mapa do arquivo
   - Inicializa a MLX
   - Configura os hooks para jogabilidade
   - Carrega as imagens
   - Inicia o loop principal do MLX

2. **Carregamento do Mapa (start.c e utils.c)**:
   - `load_map`: Lê o arquivo do mapa e preenche a estrutura `t_map`
   - `fill_in_map_bytes`: Lê cada linha do arquivo e preenche o array `map_bytes`
   - `find_player_position`: Localiza a posição inicial do jogador ('P')
   - `find_exit_position`: Localiza a posição da saída ('E')
   - `check_map_validity`: Verifica se o mapa é válido

3. **Validação do Mapa (mapcheck.c e floodfill.c)**:
   - `check_line_length`: Verifica se todas as linhas têm o mesmo comprimento
   - `check_map_elements`: Verifica se há exatamente 1 jogador, 1 saída e pelo menos 1 colecionável
   - `check_walls`: Verifica se o mapa está completamente cercado por paredes ('1')
   - `check_map_char`: Verifica se só há caracteres válidos ('0', '1', 'P', 'E', 'C')
   - `check_accessibility`: Usa o algoritmo flood fill para verificar se todos os itens são acessíveis

4. **Jogabilidade (game_keys.c e utils2.c)**:
   - `gameplay`: Configura os hooks de teclado e de fechamento da janela
   - `keypress`: Processa as teclas pressionadas (movimento e saída)
   - `game_events`: Gerencia os eventos do jogo, como movimento do jogador
   - `handle_movement`: Atualiza as coordenadas com base na tecla pressionada
   - `move_player`: Atualiza a posição do jogador no mapa

5. **Renderização (game_draw.c)**:
   - `load_img`: Carrega as imagens dos elementos do jogo
   - `render_img`: Renderiza os elementos do mapa na tela
   - `put_image`: Função principal de renderização chamada pelo loop da MLX

6. **Animação do Jogador (game_update.c)**:
   - Funções para movimentação do jogador: `player_w`, `player_s`, `player_d`, `player_a`
   - `player_update_image`: Atualiza a imagem do jogador

7. **Finalização (exit_game.c)**:
   - `exit_game`: Finaliza o jogo, exibindo mensagem de vitória se aplicável
   - `free_game` e `free_map`: Liberam a memória alocada

## Fluxo de Execução Detalhado

1. O programa começa verificando os argumentos e o nome do arquivo de mapa.
2. O mapa é carregado e validado (formato .ber, paredes, elementos necessários).
3. O algoritmo flood fill verifica se o jogador pode acessar todos os colecionáveis e a saída.
4. A biblioteca gráfica MLX é inicializada e as imagens são carregadas.
5. O jogo entra no loop principal, onde:
   - As teclas do usuário são processadas
   - O jogador se move pelo mapa
   - Os colecionáveis são contados quando coletados
   - A renderização atualiza a tela
6. O jogo termina quando o jogador chega à saída após coletar todos os itens, ou quando o usuário pressiona ESC ou Q.

Este projeto implementa conceitos importantes como gerenciamento de memória, manipulação de arquivos, estruturas de dados, validação de entrada e programação gráfica básica, que são habilidades fundamentais para um desenvolvedor.
