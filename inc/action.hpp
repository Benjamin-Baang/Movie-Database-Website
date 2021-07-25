#ifndef __ACTION_HPP__
#define __ACTION_HPP__

#include "movie_decorator.hpp"

class Action : public MovieDecorator
{
public:
    Action(Movie *movie) : MovieDecorator(movie) {}
    ~Action();
    string getTitle() const;
    string getGenres() const;
};

#endif // __ACTION_HPP__