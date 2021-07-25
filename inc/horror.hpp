#ifndef __HORROR_HPP__
#define __HORROR_HPP__

#include "movie_decorator.hpp"

class Horror : public MovieDecorator
{
public:
    Horror(Movie *movie) : MovieDecorator(movie) {}
    string getTitle() const;
    string getGenres() const;
};

#endif // __HORROR_HPP__