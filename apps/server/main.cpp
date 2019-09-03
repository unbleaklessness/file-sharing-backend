#include <iostream>

#include "postgresql/libpq-fe.h"

int main(int argc, char **argv) {
    PGconn *connection = PQsetdbLogin(
        "localhost",
        "5432",
        "",
        "",
        "filesharing",
        "postgres",
        "password"
    );
    PGresult *result = PQexec(connection,
        "create table if not exists users (id integer);"
    );
    std::cout << PQresultStatus(result) << std::endl;
    return 0;
}