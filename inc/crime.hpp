#ifndef __CRIME_HPP__
#define __CRIME_HPP__

#include <string>
#include "movie_decorator.hpp"

class Crime : public MovieDecorator
{
private: 
    Movie *movie_;

public:
    Crime(Movie *movie);
    ~Crime();
    string getTitle() const;
    string getGenres() const;
};

#endif // __CRIME_HPP__