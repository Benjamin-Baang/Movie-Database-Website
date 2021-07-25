#include "../inc/helper.hpp"

vector< vector<string> > sqlQuery(sqlite3_stmt *stmt)
{
    vector< vector<string> > result;
    for (int i = 0; i < 4; i++) { result.push_back(vector<string>()); }

    sqlite3_step(stmt);
    while (sqlite3_column_text(stmt, 0))
    {
        for (int i = 0; i < 4; i++)
        {
            result[i].push_back(string((char *)sqlite3_column_text(stmt, i)));
        }
        sqlite3_step(stmt);
    }
    if (result[0].empty()) {
        for (int i = 0; i < 4; i++) {result[i].push_back(""); }
    }
    
    return result;
}

vector<Movie*> doubleVectorToMovie(vector< vector<string> > &movies)
{
    vector<Movie*> result;
    for (int col = 0; col < movies[0].size(); col++) {
        if (movies[0][col] != "") {
            Movie* movie = new MovieBase(movies[0][col]);
            for (int row = 1; row < movies.size(); row++) {
                if (movies[row][col] == "Action") { movie = new Action(movie); }
                else if (movies[row][col] == "Adventure") { movie = new Adventure(movie); }
                else if (movies[row][col] == "Animation") { movie = new Animation(movie); }
                else if (movies[row][col] == "Comedy") { movie = new Comedy(movie); }
                else if (movies[row][col] == "Crime") { movie = new Crime(movie); }
                else if (movies[row][col] == "Drama") { movie = new Drama(movie); }
                else if (movies[row][col] == "Horror") { movie = new Horror(movie); }
                else if (movies[row][col] == "Romance") { movie = new Romance(movie); }
            }
            result.push_back(movie);
        }
    }
    return result;
}