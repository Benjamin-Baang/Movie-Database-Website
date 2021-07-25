#ifndef __CRIME_HPP__
#define __CRIME_HPP__

#include "movie_decorator.hpp"

class Crime : public MovieDecorator
{
public:
    Crime(Movie *movie) : MovieDecorator(movie) {}
    string getTitle() const;
    string getGenres() const;
};

#endif // __CRIME_HPP__