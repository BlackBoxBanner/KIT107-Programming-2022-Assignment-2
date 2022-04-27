// KIT107 Assignment 2
/*
 * Implementation for quarters
 * Author <<YOUR STUDENT ID AND NAME HERE>>
 * Version <<DATE>>
 */

#include <stdio.h>
#include <stdlib.h>
#include "quarters.h"


/* Types */

struct quarters_int
{
	quarter_format scores;
};


/* Functions */

/*
* 'Constructor' for quarters
* Param qp pointer to quarters being constructed
*/
void init_quarter(quarters *qp)
{
	COMPLETE ME
}

/*
* Getter for scores
* Param q quarters variable to examine
* Return scores field
*/
quarter_format get_scores(quarters q)
{
	return q->scores;
}

/*
* Setter for scores
* Param q quarters variable to update
* Param f value to be placed into the quarter's scores field
*/
void set_scores(quarters q, quarter_format f)
{
	q->scores = f;
}

/*
* Doer function to add a score to a quarter
* Param q quarters variable to update
* Param a_score value to be added into the quarters at the end of the appropriate quarter
*/
void add_score_to_quarter(quarters q, score a_score)
{
	COMPLETE ME
}
