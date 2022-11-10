// Lab 6_2
// ����� 1
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void rand(int n, int a[])
{
    for (size_t i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 1;
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
}

void arr(int n, int a[])
{
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cout << "����i�� " << i + 1 << "������� ������: "; cin >> x;
        a[i] = x;
    }
    cout << "\n���i� ������: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
}

double in(int a[], int n)
{
    int min = a[0];//������� � ����������
    int index = 0;
    for (int r = 1; r < n; r++)
    {

        if (min > a[r])
        {
            min = a[r];
            index = r;
        }
    }
    return index;
}
double max(int a[], int n)
{
    int max = a[0];//������� � ����������
    int index = 0;
    for (int r = 1; r < n; r++)
    {
        
            if (max < a[r])
            {
                max = a[r];
                index = r;
            }
        
    }
    return index;
}
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int  size;
    int x;
    cout << "����i�� ������� ������ "; cin >> size;
    int* a = new int[size];

    cout << "\n���� ������ ������ �������� ������ ���i ����i�� '1', ���� �i ���i i��� ����� "; cin >> x;

    if (x == 1)
    {
        arr(size, a);
    }
    else

    {
        cout << "\n� ����� ����������� ����� �i� 1 �� 100 ";
        cout << "\narray: ";  rand(size, a);
    }
    cout << "\n i����� ���������� �����: " << in(a, size);
    cout << "\n i����� ����i������ �����: " << max(a, size);
    delete[] a;
    return 0;
}
