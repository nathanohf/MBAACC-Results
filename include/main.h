#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#define MAX_FILE_NAME 1024
#define MAX_LINE_LEN 1024
#define MAX_STR_LEN 256
#define MAX_ROW 1024

// Struct for each row
typedef struct {
  char p1[MAX_STR_LEN];
  char char1[MAX_STR_LEN];
  int win1;
  char p2[MAX_STR_LEN];
  char char2[MAX_STR_LEN];
  int win2;
  long time;
} row;

int read_csv(FILE *file, row rows[]);
void print_csv_rows(row rows[], int row_count);

#endif
