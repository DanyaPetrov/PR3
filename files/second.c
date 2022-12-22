#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void MatrCreate(int m, int n,long long int M[n][m])
{
    int j;
    int i;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            M[i][j]=rand()%100-50;
        }
    }
}
void MatrDel(int m, int n,long long int M[n][m])
{
    int i;
    for (i = 0; i < m; i++)
    {
        free(M[i]);
    }
    free(M);
}

void ShowMatr(int m, int n,long long int M[n][m])
{
    int i;
    int j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%u\t",M[i][j]);
        }
        printf("\n");
    }
}

void SortMatr(int m, int n,long long int M[n][m])
{
    int i;
    int j;
    long long int k;
    long long int M3[m];
    for(i=0; i<n; i++)//цикл по строкам
    {
        for(j=0; j<m; j++)
        {
            M3[j]=M[i][j];

        }
        int i2;
    for(i2=0; i2<m; i2++)
        for(j=i2+1; j<m; j++)
            if(M3[i2]<M3[j])
            {
                k=M3[i2];
                M3[i2]=M3[j];
                M3[j]=k;
            }


        for(j=0; j<m; j++)
        {
            M[i][j]=M3[j];
        }
    }
}
