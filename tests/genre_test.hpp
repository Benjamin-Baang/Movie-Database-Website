#ifndef __GENRE_TEST_HPP__
#define __GENRE_TEST_HPP__

#include "gtest/gtest.h"

#include "../inc/myLib.hpp"

TEST (DecoratorTest, ActionGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Action(movie);
    string result = "Action ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, AdventureGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Adventure(movie);
    string result = "Adventure ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, AnimationGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Animation(movie);
    string result = "Animation ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, ComedyGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Comedy(movie);
    string result = "Comedy ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, CrimeGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Crime(movie);
    string result = "Crime ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, DramaGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Drama(movie);
    string result = "Drama ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, HorrorGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Horror(movie);
    string result = "Horror ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, RomanceGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Romance(movie);
    string result = "Romance ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, ActionAdventureGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Action(movie);
    movie = new Adventure(movie);
    string result = "Action Adventure ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

TEST (DecoratorTest, AnimationComedyCrimeGenreConstructor)
{
    Movie *movie = new MovieBase("");
    movie = new Animation(movie);
    movie = new Comedy(movie);
    movie = new Crime(movie);
    string result = "Animation Comedy Crime ";
    EXPECT_EQ(movie->getGenres(), result);
    delete movie;
}

#endif // __GENRE_TEST_HPP__