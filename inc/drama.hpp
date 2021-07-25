#ifndef __DRAMA_HPP__
#define __DRAMA_HPP__

#include <string>
#include "movie_decorator.hpp"

class Drama : public MovieDecorator
{
private: 
    Movie *movie_;

public:
    Drama(Movie *movie);
    ~Drama();
    string getTitle() const;
    string getGenres() const;
};

#endif // __DRAMA_HPP__