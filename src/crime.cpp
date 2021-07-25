#include "../inc/crime.hpp"

Crime::Crime(Movie *movie) : MovieDecorator(movie) {}

Crime::~Crime()
{
    delete this->movie_;
}

string Crime::getTitle() const
{
    return this->movie_->getTitle() + "Crime ";
}

string Crime::getGenres() const
{
    return this->movie_->getGenres() + "Crime ";
}