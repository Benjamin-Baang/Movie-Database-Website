#include "../inc/movie_base.hpp"

MovieBase::MovieBase(string title)
{
    this->title = title;
}

MovieBase::~MovieBase(){};

string MovieBase::getTitle() const 
{
    return title;
}

string MovieBase::getGenres() const 
{
    return "";
}