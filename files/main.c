#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Обязательно для функции setlocale()
#include <windows.h> // Обязательно для SetConsoleCP() и SetConsoleOutputCP()
#include <malloc.h>
#include "load.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russia");
    printf("С какой формой хранения работать?\n");
    printf("1. Массив\n");
    printf("2. Матрица\n");
    int N;
    scanf("%d",&N);
    if(N==1)
    {
   LoadMassLib("lib1.dll");
    }
    if(N==2)
    {
        LoadMatrLib("lib2.dll");
    }
system("pause");
    return 0;
}



