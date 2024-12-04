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

    rows[row_count].char_id1 = assign_char_id(rows[row_count].char1);
    rows[row_count].char_id2 = assign_char_id(rows[row_count].char2);
    row_count++;
  }
  return row_count;
}

char_id assign_char_id(const char* name) {
  // AOKO
  if (strcmp(name, "C-Aoko") == 0) {
    return CAOKO;
  } else if (strcmp(name, "H-Aoko") == 0) {
    return HAOKO;
  } else if (strcmp(name, "F-Aoko") == 0) {
    return FAOKO;
    // TOHNO
  } else if (strcmp(name, "C-Tohno") == 0) {
    return CTOHNO;
  } else if (strcmp(name, "H-Tohno") == 0) {
    return HTOHNO;
  } else if (strcmp(name, "F-Tohno") == 0) {
    return FTOHNO;
    // HIME
  } else if (strcmp(name, "C-Hime") == 0) {
    return CHIME;
  } else if (strcmp(name, "H-Hime") == 0) {
    return HHIME;
  } else if (strcmp(name, "F-Hime") == 0) {
    return FHIME;
    // NANAYA
  } else if (strcmp(name, "C-Nanaya") == 0) {
    return CNANAYA;
  } else if (strcmp(name, "H-Nanaya") == 0) {
    return HNANAYA;
  } else if (strcmp(name, "F-Nanaya") == 0) {
    return FNANAYA;
    // KOUMA
  } else if (strcmp(name, "C-Kouma") == 0) {
    return CKOUMA;
  } else if (strcmp(name, "H-Kouma") == 0) {
    return HKOUMA;
  } else if (strcmp(name, "F-Kouma") == 0) {
    return FKOUMA;
    // MIYAKO
  } else if (strcmp(name, "C-Miyako") == 0) {
    return CMIYAKO;
  } else if (strcmp(name, "H-Miyako") == 0) {
    return HMIYAKO;
  } else if (strcmp(name, "F-Miyako") == 0) {
    return FMIYAKO;
    // CIEL
  } else if (strcmp(name, "C-Ciel") == 0) {
    return CCIEL;
  } else if (strcmp(name, "H-Ciel") == 0) {
    return HCIEL;
  } else if (strcmp(name, "F-Ciel") == 0) {
    return FCIEL;
    // SION
  } else if (strcmp(name, "C-Sion") == 0) {
    return CSION;
  } else if (strcmp(name, "H-Sion") == 0) {
    return HSION;
  } else if (strcmp(name, "F-Sion") == 0) {
    return FSION;
    // RIES
  } else if (strcmp(name, "C-Ries") == 0) {
    return CRIES;
  } else if (strcmp(name, "H-Ries") == 0) {
    return HRIES;
  } else if (strcmp(name, "F-Ries") == 0) {
    return FRIES;
    // VSION
  } else if (strcmp(name, "C-V.Sion") == 0) {
    return CVSION;
  } else if (strcmp(name, "H-V.Sion") == 0) {
    return HVSION;
  } else if (strcmp(name, "F-V.Sion") == 0) {
    return FVSION;
    // WARA
  } else if (strcmp(name, "C-Wara") == 0) {
    return CWARA;
  } else if (strcmp(name, "H-Wara") == 0) {
    return HWARA;
  } else if (strcmp(name, "F-Wara") == 0) {
    return FWARA;
    // ROA
  } else if (strcmp(name, "C-Roa") == 0) {
    return CROA;
  } else if (strcmp(name, "H-Roa") == 0) {
    return HROA;
  } else if (strcmp(name, "F-Roa") == 0) {
    return FROA;
    // MAIDS
  } else if (strcmp(name, "C-Maids") == 0) {
    return CMAIDS;
  } else if (strcmp(name, "H-Maids") == 0) {
    return HMAIDS;
  } else if (strcmp(name, "F-Maids") == 0) {
    return FMAIDS;
    // AKI
  } else if (strcmp(name, "C-Akiha") == 0) {
    return CAKI;
  } else if (strcmp(name, "H-Akiha") == 0) {
    return HAKI;
  } else if (strcmp(name, "F-Akiha") == 0) {
    return FAKI;
    // ARC
  } else if (strcmp(name, "C-Arc") == 0) {
    return CARC;
  } else if (strcmp(name, "H-Arc") == 0) {
    return HARC;
  } else if (strcmp(name, "F-Arc") == 0) {
    return FARC;
    // PCIEL
  } else if (strcmp(name, "C-P.Ciel") == 0) {
    return CPCIEL;
  } else if (strcmp(name, "H-P.Ciel") == 0) {
    return HPCIEL;
  } else if (strcmp(name, "F-P.Ciel") == 0) {
    return FPCIEL;
    // WARC
  } else if (strcmp(name, "C-Warc") == 0) {
    return CWARC;
  } else if (strcmp(name, "H-Warc") == 0) {
    return HWARC;
  } else if (strcmp(name, "F-Warc") == 0) {
    return FWARC;
    // VAKI
  } else if (strcmp(name, "C-V.Akiha") == 0) {
    return CVAKI;
  } else if (strcmp(name, "H-V.Akiha") == 0) {
    return HVAKI;
  } else if (strcmp(name, "F-V.Akiha") == 0) {
    return FVAKI;
    // MHISUI
  } else if (strcmp(name, "C-M.Hisui") == 0) {
    return CMHISUI;
  } else if (strcmp(name, "H-M.Hisui") == 0) {
    return HMHISUI;
  } else if (strcmp(name, "F-M.Hisui") == 0) {
    return FMHISUI;
    // SEI
  } else if (strcmp(name, "C-S.Akiha") == 0) {
    return CSEI;
  } else if (strcmp(name, "H-S.Akiha") == 0) {
    return HSEI;
  } else if (strcmp(name, "F-S.Akiha") == 0) {
    return FSEI;
    // SATS
  } else if (strcmp(name, "C-Satsuki") == 0) {
    return CSATS;
  } else if (strcmp(name, "H-Satsuki") == 0) {
    return HSATS;
  } else if (strcmp(name, "F-Satsuki") == 0) {
    return FSATS;
    // LEN
  } else if (strcmp(name, "C-Len") == 0) {
    return CLEN;
  } else if (strcmp(name, "H-Len") == 0) {
    return HLEN;
  } else if (strcmp(name, "F-Len") == 0) {
    return FLEN;
    // RYOU
  } else if (strcmp(name, "C-Ryougi") == 0) {
    return CRYOU;
  } else if (strcmp(name, "H-Ryougi") == 0) {
    return HRYOU;
  } else if (strcmp(name, "F-Ryougi") == 0) {
    return FRYOU;
    // WLEN
  } else if (strcmp(name, "C-W.Len") == 0) {
    return CWLEN;
  } else if (strcmp(name, "H-W.Len") == 0) {
    return HWLEN;
  } else if (strcmp(name, "F-W.Len") == 0) {
    return FWLEN;
    // NERO
  } else if (strcmp(name, "C-Nero") == 0) {
    return CNERO;
  } else if (strcmp(name, "H-Nero") == 0) {
    return HNERO;
  } else if (strcmp(name, "F-Nero") == 0) {
    return FNERO;
    // NAC
  } else if (strcmp(name, "C-NAC") == 0) {
    return CNAC;
  } else if (strcmp(name, "H-NAC") == 0) {
    return HNAC;
  } else if (strcmp(name, "F-NAC") == 0) {
    return FNAC;
    // KOHAMECH
  } else if (strcmp(name, "C-KohaMech") == 0) {
    return CKOHAMECH;
  } else if (strcmp(name, "H-KohaMech") == 0) {
    return HKOHAMECH;
  } else if (strcmp(name, "F-KohaMech") == 0) {
    return FKOHAMECH;
    // HISUI
  } else if (strcmp(name, "C-Hisui") == 0) {
    return CHISUI;
  } else if (strcmp(name, "H-Hisui") == 0) {
    return HHISUI;
  } else if (strcmp(name, "F-Hisui") == 0) {
    return FHISUI;
    // NECO
  } else if (strcmp(name, "C-Neko") == 0) {
    return CNECO;
  } else if (strcmp(name, "H-Neko") == 0) {
    return HNECO;
  } else if (strcmp(name, "F-Neko") == 0) {
    return FNECO;
    // KOHA
  } else if (strcmp(name, "C-Kohaku") == 0) {
    return CKOHA;
  } else if (strcmp(name, "H-Kohaku") == 0) {
    return HKOHA;
  } else if (strcmp(name, "F-Kohaku") == 0) {
    return FKOHA;
    // NECOMECH
  } else if (strcmp(name, "C-NekoMech") == 0) {
    return CNECOMECH;
  } else if (strcmp(name, "H-NekoMech") == 0) {
    return HNECOMECH;
  } else if (strcmp(name, "F-NekoMech") == 0) {
    return FNECOMECH;
  } else {
    printf("\n---*-*- UNKNOWN CHARACTER -*-*---\n\n");
    return UNKNOWN;
  }
}

void print_csv_rows(row rows[], int row_count) {
  for (int i = 0; i < row_count; i++) {
    printf("---=-=- Row %d: -=-=---\n\n", i + 1);
    printf("P1: %s\n", rows[i].p1);
    printf("Char 1: %s\n", rows[i].char1);
    printf("Win 1: %d\n\n", rows[i].win1);

    printf("P2: %s\n", rows[i].p2);
    printf("Char 2: %s\n", rows[i].char2);
    printf("Win 2: %d\n", rows[i].win2);
    printf("Time: %ld\n", rows[i].time);
    printf("\n");
  }
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

  printf("Successfully read %d entries.\n\n", row_count);

  print_csv_rows(rows, row_count);

  // GROUP BY CHARACTER PLAYED

  return 1;
}
