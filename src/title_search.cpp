#include "../inc/title_search.hpp"

vector<Movie*> TitleSearch::search(const vector<string> &conditions) const
{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    const char *sql = "SELECT title, genre_1, genre_2, genre_3 FROM movies WHERE title LIKE ?;";
    vector< vector<string> > movies;

    int exit = sqlite3_open("movies.db", &db);
    if (exit == SQLITE_OK)
    {
        sqlite3_prepare(db, sql, -1, &stmt, NULL);
        string title = "%" + conditions[0] + "%";
        sqlite3_bind_text(stmt, 1, title.c_str(), title.size(), SQLITE_STATIC);
        movies = sqlQuery(stmt);
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    vector<Movie*> result = doubleVectorToMovie(movies);
    return result;
}