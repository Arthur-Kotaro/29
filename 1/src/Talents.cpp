#include "Talents.hpp"

void Talent::show_talents()
{
    std::cout << "Its talents: ";
    for (int i = 0; i < talents_vec.size(); ++i) std::cout << '\"' << talents_vec[i] << "\" ";
    std::cout << std::endl;
}

Talent::~Talent() {}


Swimming::Swimming() {talents_vec.push_back("Swimming");}
Swimming::~Swimming() {}


Dancing::Dancing() {talents_vec.push_back("Dancing");}
Dancing::~Dancing() {}


Counting::Counting() {talents_vec.push_back("Counting");}
Counting::~Counting() {}