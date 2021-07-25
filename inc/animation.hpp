#ifndef __ANIMATION_HPP__
#define __ANIMATION_HPP__

#include <string>
#include "movie_decorator.hpp"

class Animation : public MovieDecorator
{
private: 
    Movie *movie_;

public:
    Animation(Movie *movie);
    ~Animation();
    string getTitle() const;
    string getGenres() const;
};

#endif // __ANIMATION_HPP__