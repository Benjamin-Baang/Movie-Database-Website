#ifndef __STRATEGY_TEST_HPP__
#define __STRATEGY_TEST_HPP__

#include "gtest/gtest.h"

#include "../inc/myLib.hpp"

TEST (StrategyTitleTest, AllTitles)
{
    Query *query = new Query(new TitleStrategy());
    vector<string> condition;
    condition.push_back("");
    vector<Movie*> result = query->search(condition);
    delete query;
    
    vector<Movie*> expect;
    Movie *movie = new MovieBase("How to Train Your Dragon");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Spirited Away");
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Sin City");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Annie Hall");
    movie = new Comedy(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Toy Story");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Wages of Fear");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Kill Bill: Vol. 1");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Harry Potter and the Deathly Hallows: Part 2");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Forrest Gump");
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Jaws");
    movie = new Adventure(movie);
    movie = new Horror(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Fight Club");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The General");
    movie = new Action(movie);
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Weathering with You");
    movie = new Animation(movie);
    movie = new Drama(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Full Metal Jacket");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Avengers");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Rocky");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Jurassic Park");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Mad Max: Fury Road");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Lawrence of Arabia");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Big Lebowski");
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Mary and Max");
    movie = new Animation(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Sharknado");
    movie = new Horror(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Saving Private Ryan");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Braveheart");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Network");
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Diabolique");
    movie = new Horror(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Up");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Donnie Darko");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Vertigo");
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("3 Idiots");
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("It Happened One Night");
    movie = new Comedy(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("2001: A Space Odyssey");
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Guardians of the Galaxy");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Star Wars: Episode V - The Empire Strikes Back");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Batman Begins");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Lord of the Rings: The Two Towers");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Ip Man");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("City Lights");
    movie = new Comedy(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Toy Story 3");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Monsters, Inc.");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Raiders of the Lost Ark");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Finding Nemo");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Princess Bride");
    movie = new Adventure(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Rush");
    movie = new Action(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("On the Waterfront");
    movie = new Crime(movie);
    movie = new Drama(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Shining");
    movie = new Horror(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Beauty and the Beast");
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Star Wars: Episode IV - A New Hope");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("It");
    movie = new Horror(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Conjuring");
    movie = new Horror(movie);
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

TEST (StrategyTitleTest, OneTitle)
{
    Query *query = new Query(new TitleStrategy());
    vector<string> condition;
    condition.push_back("Weathering with You");
    vector<Movie*> result = query->search(condition);
    delete query;

    vector<Movie*> expect;
    Movie *movie = new MovieBase("Weathering with You");
    movie = new Animation(movie);
    movie = new Drama(movie);
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

TEST (StrategyTitleTest, PartialTitle)
{
    Query *query = new Query(new TitleStrategy());
    vector<string> condition;
    condition.push_back("Star Wars");
    vector<Movie*> result = query->search(condition);
    delete query;

    vector<Movie*> expect;
    Movie *movie = new MovieBase("Star Wars: Episode V - The Empire Strikes Back");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Star Wars: Episode IV - A New Hope");
    movie = new Action(movie);
    movie = new Adventure(movie);
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

TEST (StrategyTitleTest, NonexistentTitle)
{
    Query *query = new Query(new TitleStrategy());
    vector<string> condition;
    condition.push_back("Minions");
    vector<Movie*> result = query->search(condition);
    delete query;

    vector<Movie*> expect;
    Movie *movie = new MovieBase("");
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

TEST (StrategyGenreTest, OneGenre)
{
    Query *query = new Query(new GenreStrategy());
    vector<string> condition;
    condition.push_back("Comedy");
    condition.push_back("");
    condition.push_back("");
    vector<Movie*> result = query->search(condition);
    delete query;

    vector<Movie*> expect;
    Movie *movie = new MovieBase("Annie Hall");
    movie = new Comedy(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Toy Story");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Forrest Gump");
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The General");
    movie = new Action(movie);
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("The Big Lebowski");
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Mary and Max");
    movie = new Animation(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Up");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("3 Idiots");
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("It Happened One Night");
    movie = new Comedy(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("City Lights");
    movie = new Comedy(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Toy Story 3");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Monsters, Inc.");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    movie = new MovieBase("Finding Nemo");
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

TEST (StrategyTest, TwoGenre)
{
    Query *query = new Query(new GenreStrategy());
    vector<string> condition;
    condition.push_back("Adventure");
    condition.push_back("Romance");
    condition.push_back("");
    vector<Movie*> result = query->search(condition);
    delete query;

    vector<Movie*> expect;
    Movie *movie = new MovieBase("The Princess Bride");
    movie = new Adventure(movie);
    movie = new Romance(movie);
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

TEST (StrategyTest, ThreeGenre)
{
    Query *query = new Query(new GenreStrategy());
    vector<string> condition;
    condition.push_back("Action");
    condition.push_back("Adventure");
    condition.push_back("Comedy");
    vector<Movie*> result = query->search(condition);
    delete query;

    vector<Movie*> expect;
    Movie *movie = new MovieBase("The General");
    movie = new Action(movie);
    movie = new Adventure(movie);
    movie = new Comedy(movie);
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

TEST (StrategyTest, MovieNotFound)
{
    Query *query = new Query(new GenreStrategy());
    vector<string> condition;
    condition.push_back("Adventure");
    condition.push_back("Drama");
    condition.push_back("");
    vector<Movie*> result = query->search(condition);
    delete query;

    vector<Movie*> expect;
    Movie *movie = new MovieBase("");
    expect.push_back(movie);
    delete movie;

    EXPECT_EQ(expect, result);
}

#endif // __STRATEGY_TEST_HPP__