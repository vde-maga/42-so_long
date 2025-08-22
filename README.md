# 42-so_long

[![42 Porto](https://img.shields.io/badge/42%20Porto-School-blue?style=for-the-badge&logo=42)](https://www.42porto.com)
[![Language](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg?style=for-the-badge)](https://projects.intra.42.fr/)

This project is a small 2D game. Its purpose is to have you work with textures, sprites, and other basic gameplay elements.

> Thanks to [. Null Tale](https://nulltale.itch.io/) for the [visual resources of my project](https://nulltale.itch.io/white-scape).

## Screenshots

### Evaluation

![Screenshot Evaluation](/screenshots/grade.png)

### Game

![Game Screenshot](/screenshots/game.png)

## Testing

For my testing, I used all the maps include in the project, and didnt find any leaks or bugs.

## Instructions

### Compiling

For this project to work, you need to the [minilibx](https://github.com/42paris/minilibx-linux). It should by place, inside the project folder, with the name `minilibx-linux`. Then, you can use `make` to compile it.

### Playing the Game

For playing the game, you need to give it a argument. This argument, needs to be a map. There are some rules for a map to be valid to play, such as:

- Valid file type
- The map should be cover by walls
- The game must be winnable
- ...

I have some maps in the project folder. Most of them are invalid maps, that I use to test my program, but most with the name `ok` are valid!

```bash
./so_long map.ber
```

