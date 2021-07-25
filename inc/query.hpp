#ifndef __QUERY_HPP__
#define __QUERY_HPP__

#include "title_search.hpp"
#include "genre_search.hpp"

class QuerySearch
{
private: 
    Search *search_;
public:
    QuerySearch(Search *search) : search_(search){}
    ~QuerySearch();
    void set_strategy(Search *search);
    vector<Movie*> search(const vector<string> &conditions) const;
};

#endif // __QUERY_HPP__