#include<iostream>
#include<math.h>
using namespace std;
#define N 10

int determinant(int a[][N], int n)
{
    int det = 0, sign = 1, p, q, b[N][N], m = n - 1;
    if (n == 1) return (a[0][0]);
    else {
        det = 0;
        for (int x = 0; x < n; x++) {
            p = 0; q = 0;
            for (int i = 1; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j != x) {
                        b[p][q++] = a[i][j];
                        if (q % m == 0) {
                            p++;
                            q = 0;
                        }
                    }
                }
            }
            det += a[0][x] * pow(-1, x) * determinant(b, m);
        }
    }
    return det;
}

int main()
{
    int a[N][N], n;
    cout << "Enter the order of matrix : ";
    cin >> n;
    cout << "Enter the elements of matrix : ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    cout << "The determinant of matrix is : " << determinant(a, n);
    return 0;
}