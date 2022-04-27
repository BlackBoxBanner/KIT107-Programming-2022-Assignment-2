// KIT107 Assignment 2
/*
 * Specification for the quarters ADT
 * Author <<YOUR STUDENT ID AND NAME HERE>>
 * Version <<DATE>>
 */

#ifndef QUARTERS_H
#define QUARTERS_H

#include "node.h"
#include "score.h"

typedef ??? quarter_format; // COMPLETE ME

struct quarters_int;
typedef struct quarters_int *quarters;

void init_quarter(quarters *qp);
quarter_format get_scores(quarters q);
void set_scores(quarters q, quarter_format f);
void add_score_to_quarter(quarters q, score a_score);

#endif