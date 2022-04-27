// KIT107 Assignment 2
/*
 * Implementation for game
 * Author <<YOUR STUDENT ID AND NAME HERE>>
 * Version <<DATE>>
 */

#include <stdio.h>
#include <stdlib.h>
#include "game.h"


/* Constants */

extern const char *TEAMS[2];	// team names
extern const int NUM_QUARTERS;	// number of quarters in the game


/* Types */

struct game_int
{
	game_format the_quarters;
	int quarter_num;
};


/* Functions */

/*
* 'Constructor' for game
* Param gp pointer to game being constructed
*/
void init_game(game *gp)
{
	// create the game
	COMPLETE ME

	// create the quarters
	COMPLETE ME
	
	// initialise the current quarter (game is yet to start)
	COMPLETE ME
}

/*
* Getter for quarters
* Param g game variable to examine
* Return the_quarters field
*/
game_format get_quarters(game g)
{
	return g->the_quarters;
}

/*
* Getter for quarter number
* Param g game variable to examine
* Return quarter_num field
*/
int get_current_quarter(game g)
{
	return g->quarter_num;
}

/*
* Setter for quarters
* Param g game variable to update
* Param q value to be placed into the game's the_quarters field
*/
void set_quarters(game g, game_format q)
{
	g->the_quarters = q;
}

/*
* Setter for quarter number
* Param g game variable to update
* Param n value to be placed into the game's quarter_num field
*/
void set_current_quarter(game g, int n)
{
	g->quarter_num = n;
}

/*
* Doer function to add a score to the game
* Param g game variable to update
* Param a_score value to be added to the game at the end of the appropriate quarter
*/
void add_score_to_game(game g, score a_score)
{
	COMPLETE ME
}

/*
* Doer function to display vertical worm of the changing lead in the game
* Param g game variable to process
*/
void show_vert_worm(game g)
{
	COMPLETE ME
}

/*
* Doer function to display scores of requested and previous quarters in the game
* Param g game variable to process
*/
void show_quarter_scores(game g)
{
	COMPLETE ME
}

/*
* Doer function to calculate and display final margin in the game
* Param g game variable to process
*/
void show_final_margin(game g)
{
	COMPLETE ME
}
