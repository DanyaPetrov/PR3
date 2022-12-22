#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void MassCreate(long long int* M)
{
    printf("¬ведите массив\n");
    int i;
    for(i=0; i<50; i++)
    {
 M[i]=-50+rand()%100;
    }
}

void ShowMass(long long int* M)
{
    int i;
    for(i=0; i<50; i++)
    {
        printf("%u\t",M[i]);
    }
}

void SortMass(long long int* M)
{
    int i;
    for(i=0; i<49; i++)
    {
        int c;
        for(c=i+1; c<50; c++)
        {
            if(M[c]>M[i])
            {
               long long int t=M[c];
                M[c]=M[i];
                M[i]=t;
            }
        }
    }
}
