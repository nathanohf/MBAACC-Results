#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#define MAX_FILE_NAME 1024
#define MAX_LINE_LEN 1024
#define MAX_STR_LEN 256
#define MAX_ROW 1024

// Struct for each row
typedef struct {
  charid charid1;
  charid charid2;
  long time;
  int win1;
  int win2;
  char p1[MAX_STR_LEN];
  char char1[MAX_STR_LEN];
  char p2[MAX_STR_LEN];
  char char2[MAX_STR_LEN];
} row;

// Enum for every character
typedef enum {
  CAOKO, HAOKO, FAOKO,
  CTOHNO, HTOHNO, FTOHNO,
  CHIME, HHIME, FHIME,
  CNANAYA, HNANAYA, FNANAYA,
  CKOUMA, HKOUMA, FKOUMA,
  CMIYAKO, HMIYAKO, FMIYAKO,
  CCIEL, HCIEL, FCIEL,
  CSION, HSION, FSION,
  CRIES, HRIES, FRIES,
  CVSION, HVSION, FVSION,
  CWARA, HWARA, FWARA,
  CROA, HROA, FROA,
  CMAIDS, HMAIDS, FMAIDS,
  CAKI, HAKI, FAKI,
  CARC, HARC, FARC,
  CPCIEL, HPCIEL, FPCIEL,
  CWARC, HWARC, FWARC,
  CVAKI, HVAKI, FVAKI,
  CMHISUI, HMHISUI, FMHISUI,
  CSEI, HSEI, FSEI,
  CSATS, HSATS, FSATS,
  CLEN, HLEN, FLEN,
  CRYOU, HRYOU, FRYOU,
  CWLEN, HWLEN, FWLEN,
  CNERO, HNERO, FNERO,
  CNAC, HNAC, FNAC,
  CKOHAMECH, HKOHAMECH, FKOHAMECH,
  CHISUI, HHISUI, FHISUI,
  CNECO, HNECO, FNECO,
  CKOHA, HKOHA, FKOHA,
  CNECOMECH, HNECOMECH, FNECOMECH
} charid;

int read_csv(FILE *file, row rows[]);
void print_csv_rows(row rows[], int row_count);

#endif
