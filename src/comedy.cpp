#include "../inc/comedy.hpp"

string Comedy::getTitle() const
{
    return this->movie_->getTitle();
}

string Comedy::getGenres() const
{
    return this->movie_->getGenres() + "Comedy ";
}