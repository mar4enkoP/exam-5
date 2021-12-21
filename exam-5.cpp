#include <iostream>
using namespace std;


int main()
{
   const int N = 4;
   const int M = 4;
    int A[N][M] = { { 0 } };

    int n = 0;
    int r1 = 0; int r2 = 0;

    for (int r1 = 0; r1 < N / 2; r1++)
    {
        for (int j1 = r1; j1 < M - r1; j1++)
            A[r1][j1] = ++n;

        for (int i1 = r1 + 1; i1 < N - r1; i1++)
            A[i1][M - r1 - 1] = ++n;

        for (int j2 = M - r1 - 2; j2 >= r1; j2--)
            A[N - r1 - 1][j2] = ++n;

        for (int i2 = N - r1 - 2; i2 >= r1 + 1; i2--)
            A[i2][r1] = ++n;

    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout <<  A[i][j]<<" ";

        cout << "\n";
    }

}