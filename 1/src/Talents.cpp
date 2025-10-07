#include "Talents.hpp"

Talent::~Talent() {}

void Swimming::show_talent() { std::cout << "\"Swimming\"";}
Swimming::~Swimming() {}

void Dancing::show_talent() { std::cout << "\"Dancing\"";}
Dancing::~Dancing() {}

void Counting::show_talent() { std::cout << "\"Counting\"";}
Counting::~Counting() {}