#include "../inc/drama.hpp"

Drama::Drama(Movie *movie) : MovieDecorator(movie) {}

Drama::~Drama()
{
    delete this->movie_;
}

string Drama::getTitle() const
{
    return this->movie_->getTitle() + "Drama ";
}

string Drama::getGenres() const
{
    return this->movie_->getGenres() + "Drama ";
}