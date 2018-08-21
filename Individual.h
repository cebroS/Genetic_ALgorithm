#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include<string>
#include<iostream>
#pragma once
using namespace std;

#include "common.h"



class Individual
{
    public:
        //Individual();
        virtual ~Individual();
        string chromosome;
        int fitness;
        int calc_fitness();
        Individual(string chromosome);
        Individual mate(Individual parent2);

    protected:

    private:
};

#endif // INDIVIDUAL_H
