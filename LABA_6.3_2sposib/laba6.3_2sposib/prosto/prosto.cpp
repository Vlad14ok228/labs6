#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
printf("\n");
printf("\nКоличество нечетных элементов в массиве: ");
kol = 1;
for (i = 0; i < n; i = i + 2)
    for (j = 0; j < m; j = i + 2)
        if (a[i][j] > 0)
            kol = kol + a[i][j];
printf("%d", kol);