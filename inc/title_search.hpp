#ifndef __TITLE_SEARCH_HPP__
#define __TITLE_SEARCH_HPP__

#include "search.hpp"
#include "helper.hpp"

class TitleSearch : public Search
{
public:
    TitleSearch(){}
    vector<Movie*> search(const vector<string> &conditions) const;
};

#endif // __TITLE_SEARCH_HPP__