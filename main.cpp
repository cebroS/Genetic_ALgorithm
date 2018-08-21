#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<random>
#include<ctime>
#include "Individual.h"
#include "common.h"
using namespace std;






//operator overloading <
bool operator <(Individual parent1, Individual parent2){
return parent1.fitness<parent2.fitness;
}
int main()
{
    common c;
//    c.set_genes();c.set_target();
    cout<<c.target<<endl;
   cout<<"****************Generating Target String from random string of same length using Genetic Algorithm****************"<<endl;
   srand(time(0));
   //current generation
   int generation=0;
   vector<Individual>population;
   bool found = false;
   //creating initial population
   string gnome;
   for(int i=0;i<POPULATION_SIZE;i++){

    gnome=c.create_gnome();

    population.push_back(Individual(gnome));
   }

   while(!found){
    //sort the population in increasing order  of fitness value

    sort(population.begin(), population.end());
    // If fitness==0 ==> we've got the result
    if(population[0].fitness==0){
        population[0].fitness==0;
        break;
    }
    //otherwise generate new offsprings

    vector<Individual>new_generation;
    //perform elitism i.e. 10% of population goes to the next generation

    int s=(10*POPULATION_SIZE)/100;
    for(int i=0;i<s;i++){
        new_generation.push_back(population[i]);
    }
    //from 50% of population offsprings will be passed to new generation
    s=(90*POPULATION_SIZE)/100;
    for(int i=0;i<s;i++){
        int r=c.random_num(0,50);
        Individual par1=population[r];
        r=c.random_num(0,50);
        Individual par2=population[r];
        Individual offspring=par1.mate(par2);
        new_generation.push_back(offspring);
    }
    population=new_generation;
    cout<<"Generation : "<< generation<<"\t";
    cout<<"String : "<<population[0].chromosome<<"\t"<<"Fitness : "<<population[0].fitness<<endl;
    generation++;

   }
cout<<"Generation : "<< generation<<"\t";
    cout<<"String : "<<population[0].chromosome<<"\t"<<"Fitness : "<<population[0].fitness<<endl;
}











