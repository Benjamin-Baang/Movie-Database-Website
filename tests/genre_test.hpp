#ifndef __GENRE_TEST_HPP__
#define __GENRE_TEST_HPP__

#include "gtest/gtest.h"

#include "../inc/movie_base.hpp"
#include "../inc/action.hpp"
#include "../inc/adventure.hpp"
#include "../inc/animation.hpp"
#include "../inc/comedy.hpp"
#include "../inc/crime.hpp"
#include "../inc/drama.hpp"
#include "../inc/horror.hpp"
#include "../inc/romance.hpp"

TEST (DecoratorTest, ActionGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Action(movie);
    string result = "Action ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, AdventureGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Adventure(movie);
    string result = "Adventure ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, AnimationGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Animation(movie);
    string result = "Animation ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, ComedyGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Comedy(movie);
    string result = "Comedy ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, CrimeGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Crime(movie);
    string result = "Crime ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, DramaGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Drama(movie);
    string result = "Drama ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, HorrorGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Horror(movie);
    string result = "Horror ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, RomanceGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Romance(movie);
    string result = "Romance ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, ActionAdventureGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Action(movie);
    baseMovie = new Adventure(movie);
    string result = "Action Adventure ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, AnimationComedyCrimeGenreConstructor)
{
    Movie *movie = new MovieBase("");
    baseMovie = new Animation(movie);
    baseMovie = new Comedy(movie);
    baseMovie = new Crime(movie);
    string result = "Animation Comedy Crime ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

#endif // __GENRE_TEST_HPP__