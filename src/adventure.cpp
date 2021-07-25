#include "../inc/adventure.hpp"

string Adventure::getTitle() const
{
    return this->movie_->getTitle() + "Adventure ";
}

string Adventure::getGenres() const
{
    return this->movie_->getGenres() + "Adventure ";
}