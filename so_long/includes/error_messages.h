/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/13 15:34:39 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_MESSAGES_H
# define ERROR_MESSAGES_H

# define MALLOC_ERROR "malloc() Failed"

//					ARG Errors
# define INVALID_NBR_ARGS "Invalid Number of Arguments" 

//					Map Errors
# define INVALID_MAP_FILE "Invalid Map File Type"
# define NULL_MAP "NULL Map Argument"
# define EMPTY_MAP_FILE "Map File is Empty"
# define INVALID_FORMAT "Map isn't a Square or a Rectangle"
# define MAP_NOT_CLOSED "Map isn't Closed by Walls"
// Tiles Specific Errors
# define INVALID_NBR_EXITS "Invalid Number of Exits (E)"
# define NO_COLLECTIBLES "Map Doesn't have any Collectibles (C)"
# define INVALID_NBR_PLAYER "Invalid Number of Player (P)"
# define INVALID_TILE "Invalid Type of Tile"
# define EXIT_BLOCK "Player Cant Finish Game"


//					Open Map File Error
# define FAILED_OPEN_MAP_FILE "Failed to Open Map File"

//					MLX Errors
# define MLX_INIT_ERROR "Failed to Initialize MLX"
# define MLX_WINDOW_ERROR "Failed to Open the Window"
//					Textures Errors
# define WALL_TEXTURE_ERROR "Failed to Open Wall Texture"
# define FLOOR_TEXTURE_ERROR "Failed to Open Floor Texture"
# define PLAYER_TEXTURE_ERROR "Failed to Open Player Texture"
# define COLLECTIBLE_TEXTURE_ERROR "Failed to Open Collectible Texture"
# define EXIT_TEXTURE_ERROR "Failed to Open Exit Texture"
#endif
