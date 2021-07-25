#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include <string>

using std::string;

class Movie
{
public:
    virtual ~Movie() = default;
    virtual string getTitle() const = 0;
    virtual string getGenres() const = 0;
};

#endif // __MOVIE_HPP__