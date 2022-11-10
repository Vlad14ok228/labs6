#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
void number(int* a, const int size, int i, const int Low, const int High)
{
    int n = 25;
    Create(a, n, Low, High);
    int count = 0;

    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            count++;
    cout << "count = " << count << endl;

}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int i = 0;
    int a[n];
    int Low = 5;
    int High = 90;
    Create(a, n, Low, High);
    Print(a, n);
    number(a, n, i, Low, High);
    return 0;
}
