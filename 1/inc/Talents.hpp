#pragma once
#include <iostream>
#include <vector>

class Talent
{
protected:
    std::vector<std::string> talents_vec;
public:
    virtual void show_talents();
    virtual ~Talent();
};

class Swimming: virtual public Talent
{
public:
    Swimming();
    ~Swimming();
};

class Dancing: virtual public Talent
{
public:
    Dancing();
    ~Dancing();
};

class Counting: virtual public Talent
{
public:
    Counting();
    ~Counting();
};
