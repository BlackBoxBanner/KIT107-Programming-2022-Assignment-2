// KIT107 Assignment 2
/*
 * Specification for the score ADT
 * Author Julian Dermoudy
 * Version 21/3/22
 *
 * THIS FILE IS COMPLETE
 */

#ifndef SCORE_H
#define SCORE_H

struct score_int;
typedef struct score_int *score;

void init_score(score *sp, int q, int s);
int get_quarter(score s);
int get_team(score s);
int get_worth(score s);
void set_quarter(score s, int q);
void set_team(score s, int t);
void set_worth(score s, int w);
char *to_string(score s, const char **TEAMS);

#endif