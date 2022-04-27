// KIT107 Assignment 2
/*
 * Implementation for driver
 *
 * Author Julian Dermoudy
 * Version 21/3/22
 *
 * THIS FILE IS COMPLETE
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "score.h"
#include "game.h"


/* Constants */

const char *TEAMS[2] = { "Carlton", "Losers" };	// the names of the teams
const int NUM_QUARTERS = 4;						// the number of quarters in the game


/* Global Variables */

game the_game;	// the game!


/* Functions*/

void read_in_data()
{
	const char *FILENAME = "scores.txt";	// the name of the text file
	const int LIMIT = 1000;  // set to a small number, e.g. 10 when debugguing

	char *line;		// a line of text from the file
	char *tokens;	// the line of text broken up into a stream of comma separated tokens
	int quarter;	// the value of the current quarter
	int raw_score;	// the raw value of the current composite score

	FILE *fp;		// the file itself

	score a_score;	// a score
	int count = 0;  // the number of lines (scores) read from the file

	// open the file
	fp = fopen(FILENAME, "r");
	if (fp == NULL)
	{
		// couldn't open the file, so quit
		fprintf(stderr,"Cannot open file.\n");
		exit(1);
	}
	else
	{
		line = (char *)malloc(100 * sizeof(char));

		// read in all the score data, one line at a time
		while (fscanf(fp, "%[^\n]\n", line) != EOF)
		{
			count++;
			// stop at LIMIT if required for debugging, and skip comments
			if ((count <= LIMIT) && (line[0] != '#'))
			{
				//printf("count is %d\t",count);	// uncomment when debugging
				//printf("%s\n", line);	// uncomment when debugging

				// break up input line into components
				tokens = strtok(line, ",");
				raw_score = atoi(tokens);
				tokens = strtok(NULL, ",");
				quarter = atoi(tokens);

				// create a score based on the components of input line
				init_score(&a_score, quarter, raw_score);

				// add created score to the game
				add_score_to_game(the_game,a_score);
			}
		}
	}
	fclose(fp);
}

/*
* Entry point
*/
int main(int argc, char *argv[])
{
	char heading[35];	// heading

	// create, print, and underline heading
	sprintf(heading, "%s v %s", TEAMS[0], TEAMS[1]);
	printf("%s\n", heading);
	for (int i = 0; i < strlen(heading); i++)
	{
		printf("=");
	}
	printf("\n");

	// initialise collection
	init_game(&the_game);

	// read in data
	read_in_data();

	// process and show the results
	show_quarter_scores(the_game);
	show_vert_worm(the_game);
	show_final_margin(the_game);
}