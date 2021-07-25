#ifndef __SEARCH_HPP__
#define __SEARCH_HPP__

#include <string>
#include <vector>
#include "movie.hpp"

using std::string;
using std::vector;

class Search
{
public:
    virtual ~Search() = default;
    virtual vector<Movie*> search(const vector<string> &conditions) const = 0;
};

#endif // __SEARCH_HPP__