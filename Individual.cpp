#include "Individual.h"

Individual::Individual(string chromosome)
{
    //ctor
    this->chromosome=chromosome;
    fitness=calc_fitness();
}

Individual::~Individual()
{
    //dtor
}
common c;
int Individual::calc_fitness(){
int l = c.target.size();
int fitness=0;
for(int i=0;i<l;i++){
    if(chromosome[i]!=c.target[i])fitness++;
}
return fitness;
}

Individual Individual:: mate(Individual parent2){
    //chromosome for offspirng
    string chromosome_offspring;
    int n=chromosome.size();
    for(int i=0;i<n;i++){
            float p=c.random_num(0,100)/100;//random number between 0 and 1
            if(p<0.45){
                chromosome_offspring+=chromosome[i];
            }
            else if(p<0.90)chromosome_offspring+=parent2.chromosome[i];
            else chromosome_offspring+=c.mutated_genes();
    }
    //create new individual using constructor function
    return Individual(chromosome_offspring);
}







