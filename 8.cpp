#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    int *w = new int[x];
    int *c = new int[x];
    for(int i = 1; i < x; i++)
    {
        cout << "weight " << i << " thing"; cin << w[i];
        cout << "price " << i << "thing "; cin << c[i];
        cout << "\n";
    }
    int **A = new *int[n] //A[N][M]
    for(int i = 0; i < n; i++)
    A[i] = new int[y];

    for(int i = 0; i < x; i++)
    A[i][0] = 0;
    for(int i = 0; i < y; i++)
    A[0][i] = 0;

    for(int i = 1; i < x; i++)
    {
        for(int j = 1; j < y; i++)
        {
            if(j < w[j])
            A[i][j] = max(A[i-1][j], A[i-1][j-w[j]] + c[i])
        }
    }
    cout << "\n";
    cout << A[x-1][y-1];

    return 0;
}
