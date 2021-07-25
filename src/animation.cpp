#include "../inc/animation.hpp"

string Animation::getTitle() const
{
    return this->movie_->getTitle();
}

string Animation::getGenres() const
{
    return this->movie_->getGenres() + "Animation ";
}