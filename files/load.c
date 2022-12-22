#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <windows.h>
void LoadMassLib(const char * const s)
{
    void * lib;
    void (*fun)(long long int* M);
    lib = LoadLibrary(s); //загрузка библиотеки в память;
    if (!lib)
    {
        printf("cannot open library '%s'\n", s);
        return;
    }
    long long int M[50];
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "MassCreate"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function MassCreate\n");
    }
    else
    {
        fun(M);
    }
    printf("Вывод изначального массива\n");
//показ массива
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "ShowMass"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function ShowMass\n");
    }
    else
    {
        fun(M);
    }
//сортировка
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "SortMass"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function SortMass\n");
    }
    else
    {
        fun(M);
    }
  printf("\n");
    printf("Вывод отстортированного массива\n");
//вывод массива нового
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "ShowMass"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function ShowMass\n");
    }
    else
    {
        fun(M);
    }
  printf("\n");
    FreeLibrary((HINSTANCE)lib); //выгрузка библиотеки;
}

void LoadMatrLib(const char * const s)
{
    void * lib;
    void (*fun)(int m, int n,long long int M[n][m]);
    lib = LoadLibrary(s); //загрузка библиотеки в память;
    if (!lib)
    {
        printf("cannot open library '%s'\n", s);
        return;
    }
    long long int M[6][7];
    int m=7;
    int n=6;
    //создание матрицы
    fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "MatrCreate"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
        printf("Вывод изначальной матрицы\n");
//вывод матрицы
   fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "ShowMatr"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
    //сортировка
       fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "SortMatr"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
   printf("\n");
        printf("Вывод отстортированной матрицы\n");
//вывод матрицы
   fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "ShowMatr"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
    //удаление матрицы
    //вывод матрицы
   fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "MatrDel"); //получение указателя на функцию из библиотеки;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
  printf("\n");
    FreeLibrary((HINSTANCE)lib); //выгрузка библиотеки;
}
