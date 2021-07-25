#include "../inc/romance.hpp"

string Romance::getTitle() const
{
    return this->movie_->getTitle();
}

string Romance::getGenres() const
{
    return this->movie_->getGenres() + "Romance ";
}