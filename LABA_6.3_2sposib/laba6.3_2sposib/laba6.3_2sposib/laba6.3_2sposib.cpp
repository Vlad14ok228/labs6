#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, int Low, int High, int i)
{

    if (i < size)
    {
        a[i] = Low + rand() % (High - Low + 1);
        return Create(a, size, Low, High, i + 1);
    }
}
void Print(int* a, const int size, int i)
{
    if (i <= size)
    {
        cout << setw(4) << a[i];
        return Print(a, size, i + 1);
        cout << endl;
    }
}
int Min(int* a, const int size, int i, int min)
{
    if (i < size)
    {
        if (a[i] < min)
        {
            min = a[i];

        }
        else
            return Min(a, size, i + 1, min);
    }
    else
        return min;

}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int i = 0;
    int a[n];
    int Low = 5;
    int High = 90;
    Create(a, n, Low, High, i);
    Print(a, n, i);
    cout << "\n Min = " << Min(a, n, 1, a[0]) << endl;
}
