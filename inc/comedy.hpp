#ifndef __COMEDY_HPP__
#define __COMEDY_HPP__

#include <string>
#include "movie_decorator.hpp"

class Comedy : public MovieDecorator
{
private: 
    Movie *movie_;

public:
    Comedy(Movie *movie);
    ~Comedy();
    string getTitle() const;
    string getGenres() const;
};

#endif // __COMEDY_HPP__