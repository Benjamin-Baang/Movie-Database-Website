#include "../inc/genre_search.hpp"

vector<Movie*> GenreSearch::search(const vector<string> &conditions) const
{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    const char *sql = "SELECT title, genre_1, genre_2, genre_3 FROM movies"
                        "WHERE (genre_1 LIKE ? AND genre_2 LIKE ? AND genre_3 LIKE ?)"
                        "OR (genre_1 LIKE ? AND genre_2 LIKE ? AND genre_3 LIKE ?)" 
                        "OR (genre_1 LIKE ? AND genre_2 LIKE ? AND genre_3 LIKE ?);";
    vector< vector<string> > movies;

    int exit = sqlite3_open("movies.db", &db);
    if (exit == SQLITE_OK)
    {
        sqlite3_prepare(db, sql, -1, &stmt, NULL);
        string genre[3] = 
        {
            "%" + conditions[0] + "%", 
            "%" + conditions[1] + "%", 
            "%" + conditions[2] + "%"
        };
        sqlite3_bind_text(stmt, 1, genre[0].c_str(), genre[0].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, genre[1].c_str(), genre[1].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 3, genre[2].c_str(), genre[2].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 4, genre[1].c_str(), genre[1].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 5, genre[2].c_str(), genre[2].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 6, genre[0].c_str(), genre[0].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 7, genre[2].c_str(), genre[2].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 8, genre[0].c_str(), genre[0].size(), SQLITE_STATIC);
        sqlite3_bind_text(stmt, 9, genre[1].c_str(), genre[1].size(), SQLITE_STATIC);
        movies = sqlQuery(stmt);
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    vector<Movie*> result = doubleVectorToMovie(movies);
    return result;
}