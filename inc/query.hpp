#ifndef __QUERY_HPP__
#define __QUERY_HPP__

#include "title_search.hpp"
#include "genre_search.hpp"

class Query
{
private: 
    Search *search_;
public:
    Query(Search *search) : search_(search){}
    ~Query();
    void set_strategy(Search *search);
    vector<Movie*> search(const vector<string> &conditions) const;
};

#endif // __QUERY_HPP__