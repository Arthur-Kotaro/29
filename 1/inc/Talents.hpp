#pragma once
#include <iostream>

class Talent
{
public:
    virtual void show_talent() = 0;
    virtual ~Talent();
};

class Swimming: virtual public Talent
{
public:
    virtual void show_talent();
    ~Swimming();
};

class Dancing: virtual public Talent
{
public:
    virtual void show_talent();
    ~Dancing();
};

class Counting: virtual public Talent
{
public:
    virtual void show_talent();
    ~Counting();
};
