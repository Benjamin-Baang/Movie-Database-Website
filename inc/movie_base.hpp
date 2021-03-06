#ifndef __MOVIE_BASE_HPP__
#define __MOVIE_BASE_HPP__

#include "movie.hpp"

class MovieBase : public Movie
{
private: 
    string title;

public:
    MovieBase(string title);
    virtual ~MovieBase();
    string getTitle() const;
    string getGenres() const;
};

#endif // __MOVIE_BASE_HPP__