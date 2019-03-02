#include <stdio.h>
#include <sqlite3.h>

#include "database.h"

typedef struct {
  sqlite3* db;
  char* filename;
  int open_db;
} database;

int main(int argc, char* const argv[]) {

  database db;

  if(argc > 1) {
    filename = argv[1];
  }else {

    printf("[ RUNNING ] Enter file name ( with extension '.db' ): ");
    scanf("%s", db.filename);

  }

  // Open database
  db.open_db = sqlite3_open(db.filename, &db.db);

  if(db.open_db) {

    fprintf(stderr, "[ ERROR ] Can't open database: %s\n", sqlite3_errmsg(db.db));
    return 1;

  } else {

    fprintf(stderr, "[ OK ] Opened database successfully\n");
    sqlite3_close(db.db);
    return 0;

  }
}
