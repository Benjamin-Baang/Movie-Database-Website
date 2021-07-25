#include "../inc/crime.hpp"

string Crime::getTitle() const
{
    return this->movie_->getTitle() + "Crime ";
}

string Crime::getGenres() const
{
    return this->movie_->getGenres() + "Crime ";
}