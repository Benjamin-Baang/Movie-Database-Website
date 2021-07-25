#ifndef __ACTION_HPP__
#define __ACTION_HPP__

#include <string>
#include "movie_decorator.hpp"

class Action : public MovieDecorator
{
private: 
    Movie *movie_;

public:
    Action(Movie *movie);
    ~Action();
    string getTitle() const;
    string getGenres() const;
};

#endif // __ACTION_HPP__