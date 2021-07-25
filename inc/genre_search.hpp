#ifndef __GENRE_SEARCH_HPP__
#define __GENRE_SEARCH_HPP__

#include "search.hpp"
#include "helper.hpp"

class GenreSearch : public Search
{
public:
    GenreSearch(){}
    vector<Movie*> search(const vector<string> &conditions) const;
};

#endif // __GENRE_SEARCH_HPP__