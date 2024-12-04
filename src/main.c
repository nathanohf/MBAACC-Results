#include "main.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_csv(FILE *file, row rows[]) {
  int row_count = 0;
  int row_status = 0;
  while (row_count < MAX_ROW) {
    row_status = fscanf(file, "%99[^,],%99[^,],%d,%99[^,],%99[^,],%d,%ld\n",
           rows[row_count].p1, rows[row_count].char1, &rows[row_count].win1,
           rows[row_count].p2, rows[row_count].char2, &rows[row_count].win2,
           &rows[row_count].time);

    if (row_status == -1) {
      break;
    }

    assert(row_status == 7);
    row_count++;

  }
  return row_count;
}

void print_csv_rows(row rows[], int row_count) {
  for (int i = 0; i < row_count; i++) {
    printf("Row %d:\n", i + 1);
    printf("P1: %s\n", rows[i].p1);
    printf("Char 1: %s\n", rows[i].char1);
    printf("Win 1: %d\n", rows[i].win1);
    printf("P2: %s\n", rows[i].p2);
    printf("Char 2: %s\n", rows[i].char2);
    printf("Win 2: %d\n", rows[i].win2);
    printf("Time: %ld\n", rows[i].time);
    printf("\n");
  }::
}

int main() {
  FILE *file_ptr = NULL;
  char filename[MAX_STR_LEN];
  printf("Enter CSV file name (with .csv): ");
  scanf("%s", filename);

  // FILE IO

  file_ptr = fopen(filename, "r");
  if (file_ptr == NULL) {
    printf("ERROR: Invalid file name\n");
    return -1;
  } else {
    printf("\n---=-=- FILE LOADED SUCCESSFULLY -=-=---\n\n");
  }

  row rows[MAX_ROW];
  int row_count = read_csv(file_ptr, rows);

  printf("Successfully read %d entries.\n", row_count);

  print_csv_rows(rows, row_count);

  // GROUP BY CHARACTER PLAYED

  return 1;
}
