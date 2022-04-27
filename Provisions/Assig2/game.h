// KIT107 Assignment 2
/*
 * Specification for the game ADT
 * Author <<YOUR STUDENT ID AND NAME HERE>>
 * Version <<DATE>>
 */

#ifndef GAME_H
#define GAME_H

#include "node.h"
#include "score.h"
#include "quarters.h"
#include "game.h"

typedef ??? game_format; // COMPLETE ME

struct game_int;
typedef struct game_int *game;

void init_game(game *gp);
game_format get_quarters(game g);
int get_current_quarter(game g);
void set_quarters(game g, game_format q);
void set_current_quarter(game g, int n);
void add_score_to_game(game g, score a_score);
void show_vert_worm(game g);
void show_quarter_scores(game g);
void show_final_margin(game g);

#endif