#include "../inc/drama.hpp"

string Drama::getTitle() const
{
    return this->movie_->getTitle() + "Drama ";
}

string Drama::getGenres() const
{
    return this->movie_->getGenres() + "Drama ";
}