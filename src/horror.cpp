#include "../inc/horror.hpp"

Horror::Horror(Movie *movie) : MovieDecorator(movie) {}

Horror::~Horror()
{
    delete this->movie_;
}

string Horror::getTitle() const
{
    return this->movie_->getTitle() + "Horror ";
}

string Horror::getGenres() const
{
    return this->movie_->getGenres() + "Horror ";
}