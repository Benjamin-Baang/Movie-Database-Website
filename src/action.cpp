#include "../inc/action.hpp"

Action::Action(Movie *movie) : MovieDecorator(movie) {}

Action::~Action()
{
    delete this->movie_;
}

string Action::getTitle() const
{
    return this->movie_->getTitle() + "Action ";
}

string Action::getGenres() const
{
    return this->movie_->getGenres() + "Action ";
}