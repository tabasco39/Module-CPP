#ifndef BRAIN_HPP
#define BRAIN_HPP

#pragma once
#include <string>
#include <iostream>
#include <cstring>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(Brain const &obj);
    Brain &operator=(Brain const &obj);
    
    ~Brain();
};

#endif