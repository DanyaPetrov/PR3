#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //����������� ��� ������� setlocale()
#include <windows.h> // ����������� ��� SetConsoleCP() � SetConsoleOutputCP()
#include <malloc.h>
#include "load.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russia");
    printf("� ����� ������ �������� ��������?\n");
    printf("1. ������\n");
    printf("2. �������\n");
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



