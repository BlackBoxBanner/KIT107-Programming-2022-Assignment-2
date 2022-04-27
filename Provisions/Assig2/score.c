// KIT107 Assignment 2
/*
 * Implementation for score
 * Author Julian Dermoudy
 * Version 21/3/22
 *
 * THIS FILE IS COMPLETE
 */

#include <stdio.h>
#include <stdlib.h>
#include "score.h"


/* Types */

struct score_int {
	int quarter;
	int team;
	int worth;
};


/* Functions*/

/*
* 'Constructor' for score
* Param sp pointer to score being constructed
* Param q quarter number to be included
* Param s coded score value to be included
*/
void init_score(score* sp, int q, int s)
{
	// create space for the score
	*sp = (score)malloc(sizeof(struct score_int));

	// update the quarter number
	(*sp)->quarter = q;

	// update the team number
	(*sp)->team = (s - 3 > 0) ? 1 : 0;

	// update the score
	switch ((s - 1) % 3)
	{
		case 0: (*sp)->worth = 6;
				break;
		case 1: (*sp)->worth = 1;
				break;
		case 2: (*sp)->worth = 0;
				break;
	}
}

/*
* Getter for quarter
* Param s score variable to examine
* Return quarter field
*/
int get_quarter(score s)
{
	return (s->quarter);
}

/*
* Getter for team
* Param s score variable to examine
* Return team field
*/
int get_team(score s)
{
	return (s->team);
}

/*
* Getter for worth
* Param s score variable to examine
* Return worth field
*/
int get_worth(score s)
{
	return (s->worth);
}

/*
* Setter for quarter
* Param s score variable to update
* Param q value to be placed into the score's quarter field
*/
void set_quarter(score s, int q)
{
	s->quarter = q;
}

/*
* Setter for team
* Param s score variable to update
* Param t value to be placed into the score's team field
*/
void set_team(score s, int t)
{
	s->team = t;
}

/*
* Setter for worth
* Param s score variable to update
* Param w value to be placed into the score's worth field
*/
void set_worth(score s, int w)
{
	s->worth = w;
}

/*
* Display function
* Param s score to be displayed
* Param TEAMS const array of strings holding the team names
* Return s formatted as a string
*/
char *to_string(score s, const char **TEAMS)
{
	char *r=(char *)malloc(35*sizeof(char));
	
	sprintf(r, "Quarter %d, %s for %s", s->quarter, ((s->worth == 6) ? "a GOAL" : ((s->worth == 1) ? "a Behind" : "no score")), TEAMS[get_team(s)]);
	return r;
}
