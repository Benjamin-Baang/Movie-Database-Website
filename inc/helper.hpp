#ifndef __HELPER_HPP__
#define __HELPER_HPP__

#include "movie_base.hpp"
#include "action.hpp"
#include "adventure.hpp"
#include "animation.hpp"
#include "comedy.hpp"
#include "crime.hpp"
#include "drama.hpp"
#include "horror.hpp"
#include "romance.hpp"
#include <string>
#include <vector>
#include <sqlite3.h>

using std::string;
using std::vector;

vector< vector<string> > sqlQuery(vector<string> &condition, sqlite3_stmt *stmt);
vector<Movie*> doubleVectorToMovie(vector< vector<string> > &movies);

#endif // __HELPER_HPP__