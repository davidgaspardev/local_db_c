# Local DataBase (C language)

DataBase Local made with C programming language, using the SQLite3 library. It has CRUD structure (Create, Read, Update and Delete) for data manipulation.

## Getting Started

Use GCC compiler in version 7 or higher. In the build uses the *-lsqlite3* or *-l sqlite3* argument, to associate the SQLite3 library with the GCC.

### Prerequisites

What things you need to install the software and how to install them (Linux - Debian base)

```
sudo apt install sqlite3 libsqlite3-dev
```

If you want to read the docs

```
sudo apt install sqlite3-doc
```

## SQLite3 Library in C language

```
sqlite3_open(const char *filename, sqlite3 **ppDb)
```

This routine opens a connection to an SQLite database file and returns a database connection object to be used by other SQLite routines.

If the filename argument is NULL or ':memory:', sqlite3_open() will create an in-memory database in RAM that lasts only for the duration of the session.

If the filename is not NULL, sqlite3_open() attempts to open the database file by using its value. If no file by that name exists, sqlite3_open() will open a new database file by that name.

```
sqlite3_exec(sqlite3*, const char *sql, sqlite_callback, void *data, char **errmsg)
```

This routine provides a quick, easy way to execute SQL commands provided by sql argument which can consist of more than one SQL command.

Here, the first argument sqlite3 is an open database object, sqlite_callback is a call back for which data is the 1st argument and errmsg will be returned to capture any error raised by the routine.

SQLite3_exec() routine parses and executes every command given in the sql argument until it reaches the end of the string or encounters an error.

```
sqlite3_close(sqlite3 *db)
```

This routine closes a database connection previously opened by a call to sqlite3_open(). All prepared statements associated with the connection should be finalized prior to closing the connection.

If any queries remain that have not been finalized, sqlite3_close() will return SQLITE_BUSY with the error message Unable to close due to unfinalized statements.
