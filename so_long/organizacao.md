Como organizarias este projeto de codigo inteiro? Estas livre de alterar por completo os ficheiros que existem e como as funcoes em si funcionam. No caso, para um pouco de contexto, este codigo e para o projeto so_long da 42. Como se trata de um ficheiro para a 42, existem as regras de norma, sendo as principais que um ficheiro tem um maximo de 5 funcoes e cada funcao, so pode ter um maximo de 25 linhas nela.

```bash
.
├── includes
│   ├── error_messages.h
│   ├── game.h
│   ├── get_next_line.h
│   ├── keys.h
│   ├── libft.h
│   ├── so_long.h
│   └── textures.h
├── Makefile
├── maps
│   ├── correct
│   │   ├── map01 - 1p1e1c.ber
│   │   └── map01 - 1p1e1c.BER
│   └── error
│       ├── map01 - no_walls_around.ber
│       ├── map02 - wrong_extension.txt
│       ├── map03 - empty_map.ber
│       ├── map04 - bad_shape_of_map.ber
│       ├── map05 - exit_bad.ber
│       ├── map06 - no_collectables.ber
│       ├── map07 - player_bad.ber
│       └── map08 - wrong_tile.ber
├── minilibx-linux.tgz
├── srcs
│   ├── checkers
│   │   ├── args_check.c
│   │   ├── maps_check.c
│   │   └── specific_tile_check.c
│   ├── engine
│   │   ├── ft_exit_game.c
│   │   └── ft_hook_and_run.c
│   ├── main.c
│   ├── maps
│   │   ├── ft_get_map.c
│   │   ├── ft_map_check.c
│   │   └── ft_render_map.c
│   ├── player
│   │   ├── player_first_tile.c
│   │   └── player_movement.c
│   ├── textures
│   │   └── ft_render_textures.c
│   └── utils
│       ├── errors.c
│       ├── get_next_line
│       │   ├── get_next_line.c
│       │   └── get_next_line_utils.c
│       ├── init.c
│       └── libft
│           ├── ft_itoa.c
│           ├── ft_putstr_fd.c
│           ├── ft_strlen.c
│           ├── ft_strncmp.c
│           ├── ft_strrchr.c
│           └── ft_trim_free.c
├── textures
│   ├── collectible.xpm
│   ├── enemie.xpm
│   ├── exit.xpm
│   ├── floor.xpm
│   ├── originals
│   │   ├── collectible.png
│   │   ├── enemie.png
│   │   ├── exit.png
│   │   ├── floor.png
│   │   ├── player.png
│   │   ├── wall.png
│   │   ├── Ws.png
│   │   └── Ws_Yokai.png
│   ├── player.xpm
│   ├── player.xpm.backup
│   └── wall.xpm
└── TODO.md
```

```txt
- main.c
	- int	main(int argc, char **argv)
- utils
	- init.c
		- void	ft_init_textures(t_game *game)
		- int	ft_init_mlx(t_game *game)
		- t_game	ft_init_game(void)
	- errors.c
		- void	ft_error(t_game *game, char *error_msg)
		- void	ft_free_game(t_game *game)
		- void	ft_free_game_map(char **map)
		- void	ft_check_errors_in_textures(t_game *game)
		- void	ft_free_game_tiles(t_game *game)
- textures
	- ft_render_textures.c
		- void	ft_render_textures(t_game *game)
- player
	- player_first_tile.c
		- void	ft_put_first_player_tile(t_game *game)
	- player_movement.c
		- void	ft_update_player_pos(t_game *game, char c, int length)
		- void	ft_behaviour_of_new_tile(t_game *game)
		- void	ft_update_behind_tile(t_game *game)
		- void	ft_draw_new_player_pos(t_game *game)
- maps
	- ft_get_map.c
		- void	ft_get_map(char *map_file, t_game *game)
		- void	ft_get_nbr_map_lines(char *map_file, t_game *game)
		- void	ft_complete_map(char *map_file, t_game *game)
		- int	ft_valid_filetype(char *map_file)
	- ft_map_check.c
		- int	ft_map_check(t_game *game)
	- ft_render_map.c
		- void	ft_render_map(t_game *game)
- engine
	- ft_exit_game.c
		- int	ft_exit_game(t_game *game)
	- ft_hook_and_run.c
		- void	ft_hook_and_run(t_game *game)
		- int	ft_key_press(int key, t_game *game)
- checkers
	- args_check.c
		- int	ft_args_check(int argc, char **argv)
	- maps_check.c
		- int	ft_valid_tile_input(char c)
		- int	ft_is_covered_by_walls(t_map *map)
		- int	ft_check_invalid_requirements(t_game *game)
		- int	ft_check_tiles(t_game *game)
		- int	ft_valid_format(t_game *game)
	- specific_tile_check.c
		- int	ft_current_tile_is_collectible(t_game *game)
		- int	ft_current_tile_is_exit(t_game *game)
```