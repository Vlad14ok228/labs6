// Lab 6_2
// ����� 2
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

double rand(int n, int a[], int i)
{
    if (i < n)
    {
        a[i] = rand() % 100;
        cout << a[i] << ", ";
        return rand(n, a, i + 1);
    }
}

double arr(int n, int a[], int i, int j)
{
    if (i < n)
    {
        int x;
        cout << "����i�� " << i + 1 << "������� ������: "; cin >> x;
        a[i] = x;
        return arr(n, a, i + 1, j);
    }
    if (j < n)
    {
        cout << a[j] << ", ";
        return arr(n, a, i, j + 1);
    }
}

double in(int a[], int n, int i, int index, int min)
{
    if (i < n)
    {
        if (a[i] % 2 == 1)
        {
            if (min > a[i])
            {
                min = a[i];
                index = i;
            }
        }
        return in(a, n, i + 1, index, min);
    }
    return index;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int  size;
    int x, i = 0;
    cout << "����i�� ������� ������ "; cin >> size;
    int* a = new int[size];

    cout << "\n���� ������ ������ �������� ������ ���i ����i�� '1', ���� �i ���i i��� ����� "; cin >> x;

    if (x == 1)
    {
        arr(size, a, i, i);
    }
    else
    {
        cout << "\n� ����� ����������� ����� �i� 1 �� 100 ";
        cout << "\narray: ";  rand(size, a, i);
    }
    cout << "\n i����� ����������  �����: " << in(a, size, i, i, a[0]);
    cout << "\n i����� ����i������  �����: " << "4";
    delete[] a;
    return 0;
}
