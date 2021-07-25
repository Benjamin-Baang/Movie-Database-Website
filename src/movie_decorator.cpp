#include "../inc/movie_decorator.hpp"

MovieDecorator::MovieDecorator(Movie *movie) : movie_(movie) {}

MovieDecorator::~MovieDecorator() 
{
    delete this->movie_;
}

string MovieDecorator::getTitle() const
{
    return this->movie_->getTitle();
}

string MovieDecorator::getGenres() const 
{
    return this->movie_->getGenres();
}