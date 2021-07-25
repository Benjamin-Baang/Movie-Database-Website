#ifndef __COMEDY_HPP__
#define __COMEDY_HPP__

#include "movie_decorator.hpp"

class Comedy : public MovieDecorator
{
public:
    Comedy(Movie *movie) : MovieDecorator(movie) {}
    ~Comedy();
    string getTitle() const;
    string getGenres() const;
};

#endif // __COMEDY_HPP__