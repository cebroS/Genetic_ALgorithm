#ifndef COMMON_H
#define COMMON_H

//number of individuals in each popultaion
#define POPULATION_SIZE 100
#include<string>
#include<vector>
#include<iostream>
#include<random>
#include<ctime>

using namespace std;

class common
{
    public:
        common();
        virtual ~common();
         string genes ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ 1234567890, .-;:_!\"#%&/()=?@${[]}";;
        //void set_genes();
         string target="Ram Lalla Ayenge Mandir Wahin Banayenge- By shiv Bhanu Singh(Jai Shree Ram)";
        //void set_target();
        int random_num(int start, int end);
        char mutated_genes();
        string create_gnome();
    protected:

    private:
};

#endif // COMMON_H
