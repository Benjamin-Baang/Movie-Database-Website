#ifndef __ROMANCE_HPP__
#define __ROMANCE_HPP__

#include "movie_decorator.hpp"

class Romance : public MovieDecorator
{
public:
    Romance(Movie *movie);
    ~Romance();
    string getTitle() const;
    string getGenres() const;
};

#endif // __ROMANCE_HPP__