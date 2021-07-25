#include "../inc/romance.hpp"

Romance::~Romance()
{
    delete this->movie_;
}

string Romance::getTitle() const
{
    return this->movie_->getTitle() + "Romance ";
}

string Romance::getGenres() const
{
    return this->movie_->getGenres() + "Romance ";
}