#include "../inc/action.hpp"

string Action::getTitle() const
{
    return this->movie_->getTitle() + "Action ";
}

string Action::getGenres() const
{
    return this->movie_->getGenres() + "Action ";
}