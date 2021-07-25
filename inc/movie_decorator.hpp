#ifndef __MOVIE_DECORATOR_HPP__
#define __MOVIE_DECORATOR_HPP__

#include "movie.hpp"

class MovieDecorator : public Movie
{
protected: 
    Movie *movie_;

public:
    MovieDecorator(Movie *movie);
    virtual ~MovieDecorator();
    string getTitle() const;
    string getGenres() const;
};

#endif // __MOVIE_DECORATOR_HPP__