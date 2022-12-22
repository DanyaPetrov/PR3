#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <windows.h>
void LoadMassLib(const char * const s)
{
    void * lib;
    void (*fun)(long long int* M);
    lib = LoadLibrary(s); //�������� ���������� � ������;
    if (!lib)
    {
        printf("cannot open library '%s'\n", s);
        return;
    }
    long long int M[50];
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "MassCreate"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function MassCreate\n");
    }
    else
    {
        fun(M);
    }
    printf("����� ������������ �������\n");
//����� �������
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "ShowMass"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function ShowMass\n");
    }
    else
    {
        fun(M);
    }
//����������
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "SortMass"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function SortMass\n");
    }
    else
    {
        fun(M);
    }
  printf("\n");
    printf("����� ����������������� �������\n");
//����� ������� ������
    fun = (void (*)(long long int* M))GetProcAddress((HINSTANCE)lib, "ShowMass"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function ShowMass\n");
    }
    else
    {
        fun(M);
    }
  printf("\n");
    FreeLibrary((HINSTANCE)lib); //�������� ����������;
}

void LoadMatrLib(const char * const s)
{
    void * lib;
    void (*fun)(int m, int n,long long int M[n][m]);
    lib = LoadLibrary(s); //�������� ���������� � ������;
    if (!lib)
    {
        printf("cannot open library '%s'\n", s);
        return;
    }
    long long int M[6][7];
    int m=7;
    int n=6;
    //�������� �������
    fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "MatrCreate"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
        printf("����� ����������� �������\n");
//����� �������
   fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "ShowMatr"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
    //����������
       fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "SortMatr"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
   printf("\n");
        printf("����� ���������������� �������\n");
//����� �������
   fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "ShowMatr"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
    //�������� �������
    //����� �������
   fun = (void (*)(int m, int n,long long int M[n][m]))GetProcAddress((HINSTANCE)lib, "MatrDel"); //��������� ��������� �� ������� �� ����������;
    if (fun == NULL)
    {
        printf("cannot load function MatrCreate\n");
    }
    else
    {
        fun(m, n,M);
    }
  printf("\n");
    FreeLibrary((HINSTANCE)lib); //�������� ����������;
}
