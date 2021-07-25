#ifndef __ANIMATION_HPP__
#define __ANIMATION_HPP__

#include "movie_decorator.hpp"

class Animation : public MovieDecorator
{
public:
    Animation(Movie *movie) : MovieDecorator(movie) {}
    ~Animation();
    string getTitle() const;
    string getGenres() const;
};

#endif // __ANIMATION_HPP__