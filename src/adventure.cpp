#include "../inc/adventure.hpp"

Adventure::~Adventure()
{
    delete this->movie_;
}

string Adventure::getTitle() const
{
    return this->movie_->getTitle() + "Adventure ";
}

string Adventure::getGenres() const
{
    return this->movie_->getGenres() + "Adventure ";
}