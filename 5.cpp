#include <iostream>

using namespace std;


int main()
{
    int x;
    cin >> x;
    int y;
    int *m = new int[y];
    int *c = new int[y];
    double *w = new double[y];
    for(int i = 0; i < y; i++)
    {
        cout << "weight: "; cin >> m[i];
        cout << "price: "; cin >> c[i];
        w[i] = m[i] / c[i];
    }

    double max = w[0];
    int j = 0;
    for(int i = 1; i < y; i++)
    {
        if(max < w[i])
        {
            max = w[i];
            j = i;
        }
    }

    double W = x / m[j];
    cout << W*c[j];

    return 0;
}
