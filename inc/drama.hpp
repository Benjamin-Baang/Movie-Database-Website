#ifndef __DRAMA_HPP__
#define __DRAMA_HPP__

#include "movie_decorator.hpp"

class Drama : public MovieDecorator
{
public:
    Drama(Movie *movie) : MovieDecorator(movie) {}
    string getTitle() const;
    string getGenres() const;
};

#endif // __DRAMA_HPP__