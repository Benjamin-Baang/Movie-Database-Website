#include "../inc/comedy.hpp"

Comedy::~Comedy()
{
    delete this->movie_;
}

string Comedy::getTitle() const
{
    return this->movie_->getTitle() + "Comedy ";
}

string Comedy::getGenres() const
{
    return this->movie_->getGenres() + "Comedy ";
}