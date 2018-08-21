#include "common.h"

common::common()
{
    //ctor
}

common::~common()
{
    //dtor
}



//Function to generate random numbers in given range
int common::random_num(int start, int end){

int range=end-start+1;
int r= start+rand()%range;
return r;
}

//Create random genes for mutation
char common::mutated_genes(){
int l=genes.size();
int r=random_num(0, l-1);
return genes[r];
}

//Create chromosomes or string of genes
string common:: create_gnome(){
int len=target.size();
string gnome="";

for(int i=0;i<len;i++)gnome+=mutated_genes();

return gnome;

}
