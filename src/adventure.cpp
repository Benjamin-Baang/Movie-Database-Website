#include "../inc/adventure.hpp"

string Adventure::getTitle() const
{
    return this->movie_->getTitle();
}

string Adventure::getGenres() const
{
    return this->movie_->getGenres() + "Adventure ";
}