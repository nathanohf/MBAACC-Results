#ifndef STATS_H
#define STATS_H

struct char_id;

typedef struct {
  struct char_id* character;
  int total_games;
  int win;
  int loss;
} char_stat;

/* struct for stats */

void calculate_stats();
void print_stats();
#endif
