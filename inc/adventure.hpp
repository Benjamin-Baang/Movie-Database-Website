#ifndef __ADVENTURE_HPP__
#define __ADVENTURE_HPP__

#include "movie_decorator.hpp"

class Adventure : public MovieDecorator
{
private: 
    Movie *movie_;

public:
    Adventure(Movie *movie);
    ~Adventure();
    string getTitle() const;
    string getGenres() const;
};

#endif // __ADVENTURE_HPP__