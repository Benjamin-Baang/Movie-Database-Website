#include "../inc/horror.hpp"

string Horror::getTitle() const
{
    return this->movie_->getTitle();
}

string Horror::getGenres() const
{
    return this->movie_->getGenres() + "Horror ";
}