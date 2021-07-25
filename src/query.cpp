#include "../inc/query.hpp"

Query::~Query()
{
    delete this->search_;
}

void Query::set_strategy(Search *search)
{
    delete this->search_;
    this->search_ = search;
}

vector<Movie*> Query::search(const vector<string> &conditions) const
{
    return this->search_->search(conditions);
}