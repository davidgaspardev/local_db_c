#include <stdio.h>
#include <sqlite3.h>

int main(int argc, char* const argv[]) {

  sqlite3* db;
  int rc;

  rc = sqlite3_open("test.db", &db);

  if(rc) {
    fprintf(stderr, "[ ERROR ] Can't open database: %s\n", sqlite3_errmsg(db));
    return 1;
  } else {
    fprintf(stderr, "[ OK ] Opened database successfully\n");
    return 0;
  }
}
