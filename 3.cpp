#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int lom = new int[n];
    for(int i = 0; i < n; i++)
    cin >> n;
    int m,l; 
    int j = 0; 
    for(int i = 0; i < n; i++)
    {
        if(lom[i] == m)
        j++;
        if(lom[i] == l)
        j++;
    }
    if(j => 2)
    cout << "true";
    else
    cout << "false";
return 0;
}
