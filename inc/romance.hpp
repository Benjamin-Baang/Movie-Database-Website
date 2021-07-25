#ifndef __ROMANCE_HPP__
#define __ROMANCE_HPP__

#include "movie_decorator.hpp"

class Romance : public MovieDecorator
{
public:
    Romance(Movie *movie) : MovieDecorator(movie) {}
    string getTitle() const;
    string getGenres() const;
};

#endif // __ROMANCE_HPP__