#include "../inc/animation.hpp"

Animation::Animation(Movie *movie) : MovieDecorator(movie) {}

Animation::~Animation()
{
    delete this->movie_;
}

string Animation::getTitle() const
{
    return this->movie_->getTitle() + "Animation ";
}

string Animation::getGenres() const
{
    return this->movie_->getGenres() + "Animation ";
}